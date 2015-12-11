#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include "Metody.h"


using namespace std;

int main() {
    Metody m;
    int ScreenWidth = 900;
    int ScreenHeight = 700;
    int difficulty = 0;
    int tura = 0;
    int tryb = 0;

    ALLEGRO_DISPLAY *display = NULL;

    const char *Info1 = " Celem gry jest dobranie kolejno czterech ciągów figur według pewnej reguły,";
    const char *Info2 = " którą trzeba odgadnąć samemu na podstawie pierwszych podanych trzech ciągów.";
    const char *Info3 = " Figury mogą się różnić wielkością, kształtem,kolorem. ";
    const char *Info4 = " Po poprawnym dobraniu czterech ciągów figur zostaniesz o tym poinformowany oraz wyświetlona zostanie reguła.";
    const char *Info5 = "POWODZENIA!";
//Window init
    if (!al_init()) {
        return -1;
    }

    //Window
    display = al_create_display(ScreenWidth, ScreenHeight);
    al_set_window_position(display, 50, 50);
    al_set_window_title(display, "LogicKing");

    //setup
    al_init_primitives_addon();
    al_install_keyboard();
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();
    ALLEGRO_BITMAP *image = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Images/binar.jpg");
    ALLEGRO_FONT *font24 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 24,
                                            0);
    ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 16,
                                            0);

    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
    al_draw_bitmap(image, -120, -150, ALLEGRO_ALIGN_CENTER);
    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 300, NULL, "Start");
    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 350, NULL, "Rules");
    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 400, NULL, "Exit");

    al_flip_display();
    al_register_event_source(event_queue, al_get_keyboard_event_source());

    bool done = false;
    bool wybortryb = true;
    bool wyborlvl = true;
    bool howTo = true;
    bool choice3 = true;
    bool choiceESC = true;
    bool diff1 = true;
    bool diff2 = true;

    while (!done) {
        ALLEGRO_EVENT events;

        al_flip_display();

        al_wait_for_event(event_queue, &events);
        if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
            switch (events.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    al_clear_to_color(al_map_rgb(0, 0, 0));
                    al_flip_display();
                    wybortryb = false;
                    done = true;
                    continue;
                case ALLEGRO_KEY_2:
                    howTo = false;
                    done = true;
                    break;

                case ALLEGRO_KEY_3:
                    done = true;
                    break;

                case ALLEGRO_KEY_ESCAPE: {
                    int temp = al_show_native_message_box(display, "Exit", "Chcesz zamknąć grę?", "", NULL,
                                                          ALLEGRO_MESSAGEBOX_YES_NO);
                    if (temp == 1) {
                        done = true;
                        break;
                    }
                    else {
                        continue;
                    }
                }

                default:
                    break;
            }
        }
    }
    while (!howTo) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_bitmap(image, -120, -150, ALLEGRO_ALIGN_CENTER);
        al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 300, ALLEGRO_ALIGN_CENTER, Info1);
        al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 320, ALLEGRO_ALIGN_CENTER, Info2);
        al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 340, ALLEGRO_ALIGN_CENTER, Info3);
        al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 360, ALLEGRO_ALIGN_CENTER, Info4);
        al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 380, ALLEGRO_ALIGN_CENTER, Info5);
        al_flip_display();


        ALLEGRO_EVENT events;
        al_wait_for_event(event_queue, &events);
        if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
            switch (events.keyboard.keycode) {
                case ALLEGRO_KEY_ESCAPE: {
                    int temp = al_show_native_message_box(display, "Exit", "Chcesz zamknąć grę?", "", NULL,
                                                          ALLEGRO_MESSAGEBOX_YES_NO);
                    if (temp == 1) {
                        howTo = true;
                        break;
                    }
                    else {
                        continue;
                    }
                }
                case ALLEGRO_KEY_BACKSPACE: {
                    howTo = true;
                    al_clear_to_color(al_map_rgb(0, 0, 0));
                    al_draw_bitmap(image, -120, -150, ALLEGRO_ALIGN_CENTER);
                    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 300, NULL, "Start");
                    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 350, NULL, "Rules");
                    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 400, NULL, "Exit");
                    al_flip_display();
                    done = false;
                }
            }
        }
    }
    while (!wybortryb) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        ALLEGRO_EVENT events;
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 300, NULL, "Wybierz tryb");
        al_draw_text(font16, al_map_rgb(150, 105, 150), 455, 350, ALLEGRO_ALIGN_CENTER, "1.Graficzny  2.Tekstowy");
        al_flip_display();
        al_wait_for_event(event_queue, &events);
        if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
            switch (events.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    tryb = 1;
                    wybortryb = true;
                    wyborlvl = false;
                    break;
                case ALLEGRO_KEY_2:
                    tryb = 2;
                    wybortryb = true;
                    wyborlvl = false;
                    break;
                default:
                    break;
            }
        }
    }

    while (!wyborlvl) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        ALLEGRO_EVENT events;
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 300, NULL, "Wybierz poziom");
        al_draw_text(font16, al_map_rgb(150, 105, 150), 350, 350, ALLEGRO_ALIGN_CENTER,
                     "1.Łatwy  2.Średni  3.Trudny  4.Pro");
        al_flip_display();
        al_wait_for_event(event_queue, &events);
        if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
            switch (events.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    diff1 = false;
                    wyborlvl = true;
                    break;
                case ALLEGRO_KEY_2:
                    difficulty = 2;
                    wyborlvl = false;
                    break;
                case ALLEGRO_KEY_3:
                    difficulty = 3;
                    wyborlvl = false;
                    break;
                case ALLEGRO_KEY_4:
                    difficulty = 4;
                    wyborlvl = false;
                    break;
                case ALLEGRO_KEY_ESCAPE: {
                    int temp2 = al_show_native_message_box(display, "Exit", "Chcesz zamknąć grę?", "", NULL,
                                                           ALLEGRO_MESSAGEBOX_YES_NO);
                    if (temp2 == 1) {
                        wyborlvl = 0;
                        break;
                    }
                    else {

                    }
                }
            }
        }
    }
    while (!diff1) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 10, NULL, "Poziom 1");
        ALLEGRO_EVENT events;
        al_flip_display();
        al_wait_for_event(event_queue, &events);


    }

    while (difficulty == 2) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 10, NULL, "Poziom 2");
        ALLEGRO_EVENT events;
        al_flip_display();
        al_wait_for_event(event_queue, &events);
    }
    while (difficulty == 3) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 10, NULL, "Poziom 3");
        ALLEGRO_EVENT events;
        al_flip_display();
        al_wait_for_event(event_queue, &events);
    }
    while (difficulty == 4) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 10, NULL, "Poziom 4");
        ALLEGRO_EVENT events;
        al_flip_display();
        al_wait_for_event(event_queue, &events);
    }

    return 0;
}



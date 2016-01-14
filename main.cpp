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
    srand(time(NULL));
    Metody m;

    int ScreenWidth = 900;
    int ScreenHeight = 700;
    int tura = 0;
    int tryb = 0;
    bool first = 0;
    int difficulty = 0;

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
    al_set_window_title(display, "LogicKing");

    //setup
    al_init_primitives_addon();
    al_install_keyboard();
    al_install_mouse();

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
    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 300, NULL, "1.Start");
    al_draw_rectangle(380, 300, 500, 330, al_map_rgb(1, 200, 1), 2);
    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 331, NULL, "2.Rules");
    al_draw_rectangle(380, 330, 500, 360, al_map_rgb(1, 200, 1), 2);
    al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 362, NULL, "3.Exit");
    al_draw_rectangle(380, 360, 500, 390, al_map_rgb(1, 200, 1), 2);

    al_flip_display();
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue,al_get_mouse_event_source());

    bool done = false;
    bool wybortryb = true;
    bool wyborlvl = true;
    bool howTo = true;
    bool choice3 = true;
    bool choiceESC = true;
    bool game = false;
    bool winWindow = false;


    while (!done) {
        ALLEGRO_EVENT events;

        al_flip_display();

        al_wait_for_event(event_queue, &events);
        if (events.type == ALLEGRO_EVENT_KEY_UP) {
            switch (events.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    al_clear_to_color(al_map_rgb(0, 0, 0));
                    al_flip_display();
                    wybortryb = false;
                    done = true;
                    break;
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
        } else if (events.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP) {
            if (events.mouse.x >= 380 && events.mouse.x < 500 && events.mouse.y >= 300 && events.mouse.y < 330)
            {
                al_clear_to_color(al_map_rgb(0, 0, 0));
                al_flip_display();
                wybortryb = false;
                done;
                break;
            }
            else if (events.mouse.x >= 380 && events.mouse.x < 500 && events.mouse.y >= 330 && events.mouse.y < 360)
            {
                howTo = false;
                done;
                break;
            }else if (events.mouse.x >= 380 && events.mouse.x < 500 && events.mouse.y >= 360 && events.mouse.y < 390){
                done;
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
                    done = false;
                    howTo = true;
                    break;
                }
                default:
                    break;
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
        if (events.type == ALLEGRO_EVENT_KEY_UP) {
            switch (events.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    tryb = 0;
                    wybortryb = true;
                    wyborlvl = false;
                    break;
                case ALLEGRO_KEY_2:
                    tryb = 1;
                    wybortryb = true;
                    wyborlvl = false;
                    break;
                default:
                    break;
            }
        }
    }

    while (!wyborlvl) {
        ALLEGRO_EVENT events;
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 300, NULL, "Wybierz poziom");
        al_draw_text(font16, al_map_rgb(150, 105, 150), 470, 350, ALLEGRO_ALIGN_CENTER,
                     "1.Łatwy  2.Średni  3.Trudny  4.Pro");
        al_flip_display();
        al_wait_for_event(event_queue, &events);
        if (events.type == ALLEGRO_EVENT_KEY_UP) {
            switch (events.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    game = true;
                    difficulty = 1;
                    wyborlvl = true;
                    break;
                case ALLEGRO_KEY_2:
                    game = true;
                    difficulty = 2;
                    wyborlvl = true;
                    break;
                case ALLEGRO_KEY_3:
                    game = true;
                    difficulty = 3;
                    wyborlvl = true;
                    break;
                case ALLEGRO_KEY_4:
                    game = true;
                    difficulty = 4;
                    wyborlvl = true;
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
                default:
                    break;
            }
        }
    }
    al_clear_to_color(al_map_rgb(0, 0, 0));


    while (game) {
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 10, NULL, "Poziom 1");
        ALLEGRO_EVENT events1;
        if (tura == 6) {
            winWindow;
            !game;
            break;
        }
        al_flip_display();
        if (first == 0) {
            m.GetFirstThree(tryb, tura, difficulty);
            al_rest(0.25);
            first = 1;
        }

        al_wait_for_event(event_queue, &events1);
        if (events1.type == ALLEGRO_EVENT_KEY_UP) {
            switch (events1.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    tura++;
                    continue;
                case ALLEGRO_KEY_2:
                    tura++;
                    continue;
                case ALLEGRO_KEY_3:
                    tura++;
                    continue;
                case ALLEGRO_KEY_4:
                    tura++;
                    continue;
                default:
                    break;
            }
        }
    }


    while (winWindow) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 10, NULL, "Poziom 2");
        ALLEGRO_EVENT events2;
        al_flip_display();
        al_wait_for_event(event_queue, &events2);

    }

    return 0;
}



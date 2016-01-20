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
    int easyLoss9, easyLoss12;
    int mediumLoss18, mediumLoss24, mediumLoss27;
    int hardLoss;
    int ScreenWidth = 900;
    int ScreenHeight = 700;
    int tura = 0, tura1 =2;
    int difficulty = 0;
    int loss = 0;
    int RightOnePos = 0;
    int falseLoss1,falseLoss2,falseLoss3;
    int tempx,tempy;

    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    if(!al_init()) {
        fprintf(stderr, "failed to initialize allegro!\n");
        return -1;
    }

    display = al_create_display(640, 480);
    if(!display) {
        fprintf(stderr, "failed to create display!\n");
        return -1;
    }

    event_queue = al_create_event_queue();
    if(!event_queue) {
        fprintf(stderr, "failed to create event_queue!\n");
        al_destroy_display(display);
        return -1;
    }
    al_register_event_source(event_queue,al_get_display_event_source(display));
    al_clear_to_color(al_map_rgb(0,0,0));
    al_flip_display();

    ALLEGRO_TIMEOUT timeout;
    al_init_timeout(&timeout, 0.16);

    const char *Info1 = " Celem gry jest dobranie kolejno czterech ciągów figur według pewnej reguły,";
    const char *Info2 = " którą trzeba odgadnąć samemu na podstawie pierwszych podanych trzech ciągów.";
    const char *Info3 = " Figury mogą się różnić wielkością, kształtem,kolorem. ";
    const char *Info4 = " Po poprawnym dobraniu czterech ciągów figur zostaniesz o tym poinformowany oraz wyświetlona zostanie reguła.";
    const char *Info5 = "POWODZENIA!";

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

    ALLEGRO_EVENT ev;

    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_mouse_event_source());

    bool first = 0;
    bool done = false;
    bool wyborlvl = true;
    bool howTo = true;
    bool initHowTo=false;
    bool game = false;
    bool winWindow = false;
    bool loseWindow = false;
    bool Options = true;
    bool lossAlgorythmFound = false;
    bool ThisTourRand = false;
    bool get_event = al_wait_for_event_until(event_queue,&ev,&timeout);
    bool initwyborlvl = false;
    bool LVLDRAW = false;
    bool firstinit = false;

    while (!done) {
        if (!firstinit){
            al_draw_bitmap(image, -120, -150, ALLEGRO_ALIGN_CENTER);
            al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 300, NULL, "1.Start");
            al_draw_rectangle(380, 300, 500, 330, al_map_rgb(1, 200, 1), 1);
            al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 331, NULL, "2.Rules");
            al_draw_rectangle(380, 330, 500, 360, al_map_rgb(1, 200, 1), 1);
            al_draw_text(font24, al_map_rgb(227, 219, 0), 400, 362, NULL, "3.Exit");
            al_draw_rectangle(380, 360, 500, 390, al_map_rgb(1, 200, 1), 1);
            al_draw_text(font16, al_map_rgb(1, 200, 1), 720, 5, NULL, "Naciśnij ESC aby wyjść");
            al_flip_display();
            firstinit = true;
        }
        al_wait_for_event(event_queue, &ev);
        al_get_next_event(event_queue, &ev);
        if (ev.type == ALLEGRO_EVENT_KEY_UP) {
            switch (ev.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    al_clear_to_color(al_map_rgb(0, 0, 0));
                    al_flip_display();
                    wyborlvl = false;
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
        } else if (ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_UP) {
            if (ev.mouse.x >= 380 && ev.mouse.x < 500 && ev.mouse.y >= 300 && ev.mouse.y < 330) {
                al_clear_to_color(al_map_rgb(0, 0, 0));
                al_flip_display();
                wyborlvl = false;
                done;
                break;
            }
            else if (ev.mouse.x >= 380 && ev.mouse.x < 500 && ev.mouse.y >= 330 && ev.mouse.y < 360) {
                howTo = false;
                done;
                break;
            } else if (ev.mouse.x >= 380 && ev.mouse.x < 500 && ev.mouse.y >= 360 && ev.mouse.y < 390) {
                done;
                break;
            }

        } else if(get_event && ev.type==ALLEGRO_EVENT_DISPLAY_CLOSE){
            done = true;
            break;
        }

    }
    while (!howTo) {
        if(!initHowTo) {
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_bitmap(image, -120, -150, ALLEGRO_ALIGN_CENTER);
            al_draw_text(font16, al_map_rgb(1, 200, 1), 720, 5, NULL, "Naciśnij ESC aby wyjść");
            al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 300, ALLEGRO_ALIGN_CENTER, Info1);
            al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 320, ALLEGRO_ALIGN_CENTER, Info2);
            al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 340, ALLEGRO_ALIGN_CENTER, Info3);
            al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 360, ALLEGRO_ALIGN_CENTER, Info4);
            al_draw_text(font16, al_map_rgb(227, 255, 0), ScreenWidth / 2, 380, ALLEGRO_ALIGN_CENTER, Info5);
            al_flip_display();
            initHowTo = true;
        }
        al_wait_for_event(event_queue, &ev);
        al_get_next_event(event_queue, &ev);

        if (ev.type == ALLEGRO_EVENT_KEY_UP) {
            switch (ev.keyboard.keycode) {
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
                    break;
                }
                default:
                    break;
            }
        }
    }


    while (!wyborlvl) {

        if(!initwyborlvl) {
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_text(font16,al_map_rgb(100,100,100),5,10,NULL,"Naciśnij ESC aby wyjść");
            al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 300, NULL, "Wybierz poziom");
            al_draw_text(font16, al_map_rgb(150, 105, 150), 470, 350, ALLEGRO_ALIGN_CENTER,
                         "1.Łatwy  2.Średni  3.Trudny  4.Pro");
            initwyborlvl = true;
        }

        al_flip_display();
        al_wait_for_event(event_queue, &ev);
        al_get_next_event(event_queue, &ev);

        if (ev.type == ALLEGRO_EVENT_KEY_UP) {
            switch (ev.keyboard.keycode) {
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

    while (game) {
        if(!LVLDRAW) {
            al_clear_to_color(al_map_rgb(0, 0, 0));
            al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 10, NULL, "Poziom Łatwy");
            LVLDRAW = true;
        }
        if (tura1 == 6) {
            winWindow=true;
            game = false;
            break;
        }
        if(!lossAlgorythmFound) {
            if (difficulty == 1) {
                loss = rand() % 7;
                falseLoss1 = rand()%7;
                falseLoss2 = rand()%7;
                falseLoss3 = rand()%7;
            }
            else if (difficulty == 2) {
                loss = rand() % 14;
                falseLoss1 = rand()%14;
                falseLoss2 = rand()%14;
                falseLoss3 = rand()%14;
                while(falseLoss1==loss)
                {falseLoss1 = rand()%14;}
                while(falseLoss2==loss)
                {falseLoss2 = rand()%14;}
                while(falseLoss3==loss)
                {falseLoss3 = rand()%14;}
            }
            else if (difficulty == 3) {
                loss = rand() % 18;
                falseLoss1 = rand()%18;
                falseLoss2 = rand()%18;
                falseLoss3 = rand()%18;
                while(falseLoss1==loss)
                {falseLoss1 = rand()%18;}
                while(falseLoss2==loss)
                {falseLoss2 = rand()%18;}
                while(falseLoss3==loss)
                {falseLoss3 = rand()%18;}
            }
            lossAlgorythmFound = true;
        }

        if(!ThisTourRand ||tura >=5){
            if (difficulty == 1){
                easyLoss9 = m.LossFiguresEasy9(easyLoss9);
                easyLoss12 = m.LossFiguresEasy12(easyLoss12);
            } else if(difficulty == 2){
                mediumLoss18 = std::rand()%18;
                mediumLoss24 = std::rand()%24;
                mediumLoss27 = std::rand()%27;
            } else if(difficulty ==3){
                hardLoss = std::rand()%12;
            }
            ThisTourRand = true;
        }

        if (first == 0) {
            m.GetFirstThree(tura, difficulty, loss,easyLoss9, easyLoss12, mediumLoss18, mediumLoss24, mediumLoss27, hardLoss);
            if (tura<=2){
                m.LossFiguresEasy9(easyLoss9);
            }
            al_rest(0.25);
            tura+=1;
            if(tura==3) {
                Options = false;
                first = 1;
            }
        }

        if (!Options) {
            al_draw_filled_rectangle(1,540,899,650,al_map_rgb(0,0,0));
            int lossRightOnePos = (rand() % 4) + 1;
            RightOnePos = lossRightOnePos;
            m.ShowOptions(difficulty, loss, RightOnePos,falseLoss1,falseLoss2,falseLoss3, easyLoss9, easyLoss12, mediumLoss18, mediumLoss24, mediumLoss27, hardLoss, tempx,tempy);
            cout<<tempx<<endl;
            Options = true;
        }
        al_flip_display();
        al_wait_for_event(event_queue, &ev);
        al_get_next_event(event_queue, &ev);

        if (ev.type == ALLEGRO_EVENT_KEY_UP) {
            switch (ev.keyboard.keycode) {
                case ALLEGRO_KEY_1:
                    if (RightOnePos == 1) {
                        tura1++;
                        ALLEGRO_BITMAP *tempbmp = al_create_sub_bitmap(al_get_backbuffer(display),tempx,tempy,300,100);
                        m.PrintChosen(tempbmp,tura);
                        Options = false;
                        ThisTourRand = false;
                    } else {
                        game = false;
                        loseWindow = true;
                        break;
                    }

                    continue;
                case ALLEGRO_KEY_2:

                    if (RightOnePos == 2) {
                        tura1++;
                        ALLEGRO_BITMAP *tempbmp = al_create_sub_bitmap(al_get_backbuffer(display),tempx,tempy,300,100);
                        m.PrintChosen(tempbmp,tura);
                        Options = false;
                        ThisTourRand = false;
                    } else { game = false;
                        loseWindow = true;
                        break;}

                    continue;
                case ALLEGRO_KEY_3:

                    if (RightOnePos == 3) {
                        tura1++;
                        ALLEGRO_BITMAP *tempbmp = al_create_sub_bitmap(al_get_backbuffer(display),tempx,tempy,300,100);
                        m.PrintChosen(tempbmp,tura);
                        Options = false;
                        ThisTourRand = false;
                    } else { game = false;
                        loseWindow = true;
                        break;}

                    continue;
                case ALLEGRO_KEY_4:

                    if (RightOnePos == 4) {
                        tura1++;
                        ALLEGRO_BITMAP *tempbmp = al_create_sub_bitmap(al_get_backbuffer(display),tempx,tempy,300,100);
                        m.PrintChosen(tempbmp,tura);
                        Options = false;
                        ThisTourRand = false;
                    } else { game = false;
                        loseWindow = true;
                        break;}

            }
        }
    }


    while (winWindow) {
        al_clear_to_color(al_map_rgb(0, 0, 0));
        const char *zasada = m.PrintAlgorythm(loss, difficulty);
        al_draw_text(font24, al_map_rgb(150, 105, 150), 450, 300, ALLEGRO_ALIGN_CENTER, "Wygrałeś, gratulację!");
        al_draw_text(font24,al_map_rgb(150,105,150),450,330,ALLEGRO_ALIGN_CENTER,"A zasada brzmiała:");
        al_draw_text(font16,al_map_rgb(150,105,150),450,360,ALLEGRO_ALIGN_CENTER,zasada);
        al_flip_display();
        al_wait_for_event(event_queue, &ev);
        al_rest(4);
        winWindow = false;
    }

    while(loseWindow){
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_draw_text(font24, al_map_rgb(150, 105, 150), 380, 300, NULL, "Przegrałeś!");
        al_flip_display();
        al_rest(4);
        loseWindow = false;
    }
    al_destroy_event_queue(event_queue);
    al_destroy_display(display);
    return 0;
}



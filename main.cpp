#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>



using namespace std;


int main() {

    float ScreenWidth = 900;
    float ScreenHeight = 700;
    int difficulty = 0;

    ALLEGRO_DISPLAY *display = NULL;

    const char *Start = "1. Start";
    const char *Rules = "2. Zasady";
    const char *Exit =  "3. Wyjście";
    const char *Info1 = " Celem gry jest dobranie kolejno czterech ciągów figur według pewnej reguły,";
    const char *Info2 = " którą trzeba odgadnąć samemu na podstawie pierwszych podanych trzech ciągów.";
    const char *Info3 = " Figury mogą się różnić wielkością, kształtem,kolorem. ";
    const char *Info4 = " Po poprawnym dobraniu czterech ciągów figur zostaniesz o tym poinformowany oraz wyświetlona zostanie reguła.";
    const char *Info5 = "POWODZENIA!";



//Window init
    if (!al_init()) {
        return -1;
    }
    //Window properties
    display = al_create_display(ScreenWidth, ScreenHeight);
    al_set_window_title(display, "LogicKing");



    //add tools
    al_init_primitives_addon();
    al_install_keyboard();
    al_init_image_addon();
    al_init_font_addon();
    al_init_ttf_addon();

    ALLEGRO_BITMAP *image = al_load_bitmap("/media/oogway/LINUX MINT/binar.jpg");
    ALLEGRO_FONT *font24 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 24, 0);
    ALLEGRO_FONT *font14 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 14, 0);


    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
    al_draw_bitmap(image,-120,-150,ALLEGRO_ALIGN_CENTER);
    al_draw_text(font24,al_map_rgb(227,219,0),400,300,NULL,Start);
    al_draw_text(font24,al_map_rgb(227,219,0),400,350,NULL,Rules);
    al_draw_text(font24,al_map_rgb(227,219,0),400,400,NULL,Exit);

    al_flip_display();
    al_flip_display();
    al_register_event_source(event_queue, al_get_keyboard_event_source());

    bool done = false;
    bool choice1= false;
    bool choice2= false;
    bool choice3= false;
    bool choiceESC= false;


    while (!done) {
        ALLEGRO_EVENT events;
        //al_clear_to_color(al_map_rgb(0, 0, 0));

        al_flip_display();

        al_wait_for_event(event_queue, &events);

        switch(events.keyboard.keycode)
        {
            case ALLEGRO_KEY_1:
                al_clear_to_color(al_map_rgb(0,0,0));
                al_flip_display();
                choice1 = true;
                done = true;
                break;
                case ALLEGRO_KEY_2:
                al_flip_display();
                al_clear_to_color(al_map_rgb(0,0,0));
                al_draw_bitmap(image,-120,-150,ALLEGRO_ALIGN_CENTER);
                al_flip_display();
                al_draw_text(font14,al_map_rgb(227,219,0),ScreenWidth/2,200,ALLEGRO_ALIGN_CENTER,Info1);
                al_draw_text(font14,al_map_rgb(227,219,0),ScreenWidth/2,220,ALLEGRO_ALIGN_CENTER,Info2);
                al_draw_text(font14,al_map_rgb(227,219,0),ScreenWidth/2,240,ALLEGRO_ALIGN_CENTER,Info3);
                al_draw_text(font14,al_map_rgb(227,219,0),ScreenWidth/2,260,ALLEGRO_ALIGN_CENTER,Info4);
                al_draw_text(font14,al_map_rgb(227,219,0),ScreenWidth/2,280,ALLEGRO_ALIGN_CENTER,Info5);
                al_flip_display();
                choice2 = true;

                continue;
            case ALLEGRO_KEY_3:
                done = true;
                break;
            case ALLEGRO_KEY_ESCAPE:
                al_clear_to_color(al_map_rgb(0,0,0));
                al_draw_bitmap(image,-120,-150,ALLEGRO_ALIGN_CENTER);
                al_draw_text(font24,al_map_rgb(227,219,0),400,300,NULL,Start);
                al_draw_text(font24,al_map_rgb(227,219,0),400,350,NULL,Rules);
                al_draw_text(font24,al_map_rgb(227,219,0),400,400,NULL,Exit);
                al_flip_display();
        }

        }
    while (choice1) {
        ALLEGRO_EVENT events;
        al_clear_to_color(al_map_rgb(0, 0, 0));
        al_flip_display();
        al_wait_for_event(event_queue, &events);

        switch(events.keyboard.keycode){
            case ALLEGRO_KEY_1:
                difficulty = 1;
                continue;
            case ALLEGRO_KEY_2:
                difficulty = 2;
                continue;
            case ALLEGRO_KEY_3:
                difficulty = 3;
                continue;
            case ALLEGRO_KEY_4:
                difficulty = 4;
                continue;
            case ALLEGRO_KEY_ESCAPE:
                al_show_native_message_box(display,"Exit","Chcesz zamknąć grę?","",NULL,ALLEGRO_MESSAGEBOX_YES_NO);

        }


        }
    return 0;
}

void Draw1(){
    al_draw_circle(50,50,5,al_map_rgb(50,50,50),5);
}




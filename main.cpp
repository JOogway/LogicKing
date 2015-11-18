#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>


using namespace std;


int main() {

    int ScreenWidth = 900;
    int ScreenHeight = 700;

    ALLEGRO_DISPLAY *display = NULL;
    ALLEGRO_BITMAP *image = NULL;
    ALLEGRO_FONT *font24 = al_load_ttf_font("/ubuntu-font-family/Ubuntu-B.ttf", 80, 10);




//Window init
    if (!al_init()) {
        return -1;
    }
    //Window properties
    display = al_create_display(ScreenWidth, ScreenHeight);
    al_set_window_title(display, "LogicKing");


    //add tools
    al_init_font_addon();
    al_init_ttf_addon();
    al_init_primitives_addon();
    al_install_keyboard();
    al_init_image_addon();
    al_draw_text(font24, al_map_rgb(44, 117, 225), ScreenWidth / 2, ScreenHeight / 2, ALLEGRO_ALIGN_CENTER,
                 "Start Game");

    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();

    al_register_event_source(event_queue, al_get_keyboard_event_source());
    bool done = false;

    while (!done) {
        ALLEGRO_EVENT events;
        al_wait_for_event(event_queue, &events);
        al_clear_to_color(al_map_rgb(0, 0, 0));

        al_flip_display();
        if(events.type == ALLEGRO_EVENT_KEY_DOWN){
            switch(events.keyboard.keycode)
            {
                case ALLEGRO_KEY_1:
                    al_clear_to_color(al_map_rgb(50,50,50));

                case ALLEGRO_KEY_2:
                    al_clear_to_color(al_map_rgb(150,150,150));
                case ALLEGRO_KEY_3:
                    done = false;
                    break;
                default:break;
            }

        }

/*
        if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEYBOAR) {

        }

        else if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_2) {

        }
        else if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_3) {

        }
        else if (ev.type == ALLEGRO_EVENT_KEY_DOWN && ev.keyboard.keycode == ALLEGRO_KEY_4) {
            done = true;
            al_destroy_display(display);
            al_destroy_event_queue(event_queue);
            */
}
    return 0;
}


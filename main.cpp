#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>


struct LoadBitMaps{

    ALLEGRO_BITMAP *SmallBlueCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Small_Blue_Circle.png");
    ALLEGRO_BITMAP *MediumBlueCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Medium_Blue_Circle.png");
    ALLEGRO_BITMAP *BigBlueCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Big_Blue_Circle.png");
    ALLEGRO_BITMAP *SmallYellowCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Small_Yellow_Circle.png");
    ALLEGRO_BITMAP *MediumYellowCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Medium_Yellow_Circle.png");
    ALLEGRO_BITMAP *BigYellowCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Big_Yellow_Circle.png");
    ALLEGRO_BITMAP *SmallRedCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Small_Red_Circle.png");
    ALLEGRO_BITMAP *MediumRedCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Medium_Red_Circle.png");
    ALLEGRO_BITMAP *BigRedCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Big_Red_Circle.png");
    ALLEGRO_BITMAP *SmallGreenCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Small_Green_Circle.png");
    ALLEGRO_BITMAP *MediumGreenCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Medium_Green_Circle.png");
    ALLEGRO_BITMAP *BigGreenCircle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Circle/Big_Green_Circle.png");

    ALLEGRO_BITMAP *SmallBlueSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Small_Blue_Square.png");
    ALLEGRO_BITMAP *MediumBlueSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Medium_Blue_Square.png");
    ALLEGRO_BITMAP *BigBlueSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Big_Blue_Square.png");
    ALLEGRO_BITMAP *SmallYellowSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Small_Yellow_Square.png");
    ALLEGRO_BITMAP *MediumYellowSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Medium_Yellow_Square.png");
    ALLEGRO_BITMAP *BigYellowSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Big_Yellow_Square.png");
    ALLEGRO_BITMAP *SmallRedSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Small_Red_Square.png");
    ALLEGRO_BITMAP *MediumRedSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Medium_Red_Square.png");
    ALLEGRO_BITMAP *BigRedSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Big_Red_Square.png");
    ALLEGRO_BITMAP *SmallGreenSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Small_Green_Square.png");
    ALLEGRO_BITMAP *MediumGreenSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Medium_Green_Square.png");
    ALLEGRO_BITMAP *BigGreenSquare = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Square/Big_Green_Square.png");

    ALLEGRO_BITMAP *SmallBlueTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Small_Blue_Triangle.png");
    ALLEGRO_BITMAP *MediumBlueTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Medium_Blue_Triangle.png");
    ALLEGRO_BITMAP *BigBlueTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Big_Blue_Triangle.png");
    ALLEGRO_BITMAP *SmallYellowTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Small_Yellow_Triangle.png");
    ALLEGRO_BITMAP *MediumYellowTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Medium_Yellow_Triangle.png");
    ALLEGRO_BITMAP *BigYellowTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Big_Yellow_Triangle.png");
    ALLEGRO_BITMAP *SmallRedTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Small_Red_Triangle.png");
    ALLEGRO_BITMAP *MediumRedTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Medium_Red_Triangle.png");
    ALLEGRO_BITMAP *BigRedTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Big_Red_Triangle.png");
    ALLEGRO_BITMAP *SmallGreenTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Small_Green_Triangle.png");
    ALLEGRO_BITMAP *MediumGreenTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Medium_Green_Triangle.png");
    ALLEGRO_BITMAP *BigGreenTriangle = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Big_Green_Triangle.png");
}figura;
void SmallSames(int loss, int y,int tura) {
    int x1 = 100;
    int x2 = 200;
    int x3 = 300;
    LoadBitMaps figura;
    if (loss == 1) {
        al_draw_bitmap(figura.SmallBlueCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.SmallBlueSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.SmallBlueTriangle, x3, y + tura * 40, 0);
        al_flip_display();
    }
    else if(loss == 2){
        al_draw_bitmap(figura.SmallYellowCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.SmallYellowSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.SmallYellowTriangle, x3, y + tura * 40, 0);
    }
    else if(loss == 3){
        al_draw_bitmap(figura.SmallRedCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.SmallRedSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.SmallRedTriangle, x3, y + tura * 40, 0);
    }
    else if(loss == 4){
        al_draw_bitmap(figura.SmallYellowCircle,x1,y+tura * 40,0);
        al_draw_bitmap(figura.SmallYellowSquare,x1,y+tura * 40,0);
        al_draw_bitmap(figura.SmallYellowTriangle,x1,y+tura * 40,0);
    }
}
void MediumSames(int loss, int y,int tura){
    int x1 = 100;
    int x2 = 200;
    int x3 = 300;
    LoadBitMaps figura;
    if (loss == 1) {
        al_draw_bitmap(figura.MediumBlueCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.MediumBlueSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.MediumBlueTriangle, x3, y + tura * 40, 0);
        al_flip_display();
    }
    else if(loss == 2){
        al_draw_bitmap(figura.MediumYellowCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.MediumYellowSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.MediumYellowTriangle, x3, y + tura * 40, 0);
    }
    else if(loss == 3){
        al_draw_bitmap(figura.MediumRedCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.MediumRedSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.MediumRedTriangle, x3, y + tura * 40, 0);
    }
    else if(loss == 4){
        al_draw_bitmap(figura.MediumYellowCircle,x1,y+tura * 40,0);
        al_draw_bitmap(figura.MediumYellowSquare,x1,y+tura * 40,0);
        al_draw_bitmap(figura.MediumYellowTriangle,x1,y+tura * 40,0);
    }
} 
void BigSames(int loss, int y,int tura){
    int x1 = 100;
    int x2 = 200;
    int x3 = 300;
    LoadBitMaps figura;
    if (loss == 1) {
        al_draw_bitmap(figura.BigBlueCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.BigBlueSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.BigBlueTriangle, x3, y + tura * 40, 0);
        al_flip_display();
    }
    else if(loss == 2){
        al_draw_bitmap(figura.BigYellowCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.BigYellowSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.BigYellowTriangle, x3, y + tura * 40, 0);
    }
    else if(loss == 3){
        al_draw_bitmap(figura.BigRedCircle, x1, y + tura * 40, 0);
        al_draw_bitmap(figura.BigRedSquare, x2, y + tura * 40, 0);
        al_draw_bitmap(figura.BigRedTriangle, x3, y + tura * 40, 0);
    }
    else if(loss == 4){
        al_draw_bitmap(figura.BigYellowCircle,x1,y+tura * 40,0);
        al_draw_bitmap(figura.BigYellowSquare,x1,y+tura * 40,0);
        al_draw_bitmap(figura.BigYellowTriangle,x1,y+tura * 40,0);
    }
}

using namespace std;


int main() {

    int ScreenWidth = 900;
    int ScreenHeight = 700;
    int difficulty = 0;
    int tura = 0;

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

    ALLEGRO_BITMAP *image = al_load_bitmap("/home/oogway/ClionProjects/LogicKing/Images/binar.jpg");
    ALLEGRO_FONT *font24 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 24, 0);
    ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 16, 0);

    ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();
    al_draw_bitmap(image,-120,-150,ALLEGRO_ALIGN_CENTER);
    al_draw_text(font24,al_map_rgb(227,219,0),400,300,NULL,Start);
    al_draw_text(font24,al_map_rgb(227,219,0),400,350,NULL,Rules);
    al_draw_text(font24,al_map_rgb(227,219,0),400,400,NULL,Exit);

    al_flip_display();
    al_flip_display();
    al_register_event_source(event_queue, al_get_keyboard_event_source());

    bool done = false;
    bool choice1= true;
    bool choice2= false;
    bool choice3= false;
    bool choiceESC= false;


    while (!done) {
        ALLEGRO_EVENT events;

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
                al_draw_text(font16,al_map_rgb(227,255,0),ScreenWidth/2,300,ALLEGRO_ALIGN_CENTER,Info1);
                al_draw_text(font16,al_map_rgb(227,255,0),ScreenWidth/2,320,ALLEGRO_ALIGN_CENTER,Info2);
                al_draw_text(font16,al_map_rgb(227,255,0),ScreenWidth/2,340,ALLEGRO_ALIGN_CENTER,Info3);
                al_draw_text(font16,al_map_rgb(227,255,0),ScreenWidth/2,360,ALLEGRO_ALIGN_CENTER,Info4);
                al_draw_text(font16,al_map_rgb(227,255,0),ScreenWidth/2,380,ALLEGRO_ALIGN_CENTER,Info5);

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

            default:break;
        }

        }
    while (choice1) {
        ALLEGRO_EVENT events;

        al_flip_display();
        al_wait_for_event(event_queue, &events);

        switch(events.keyboard.keycode){
            case ALLEGRO_KEY_1:
                difficulty = 1;
                SmallSames(1,50,tura);
                SmallSames(2,50,2);
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
                int temp = al_show_native_message_box(display,"Exit","Chcesz zamknąć grę?","",NULL,ALLEGRO_MESSAGEBOX_YES_NO);
                if (temp == 1)
                {
                    choice1 = 0;
                    break;
                }
                else{
                    continue;
                }
        }
        tura +=1;
    }
    return 0;
}


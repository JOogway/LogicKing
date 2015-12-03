//
// Created by oogway on 03.12.15.
//

#ifndef LOGICKING_METODY_H
#define LOGICKING_METODY_H
#include <allegro5/bitmap_io.h>
#include <allegro5/bitmap_draw.h>
#include <allegro5/allegro_font.h>


class Metody {

    struct LoadBitMaps{

        //Small => 100 Medium => 200 Big = >300
        //Blue => 10 Red =>20 Yellow =>30 Green => 40
        //Circle => 1 Triangle => 2 Square => 3

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
//level 1
public: static void SmallSameColors(int loss, int y,int tura) {
        int x1 = 100;
        int x2 = 200;
        int x3 = 300;
        LoadBitMaps figura;
        if (loss == 1) {
            al_draw_bitmap(figura.SmallBlueCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.SmallBlueSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.SmallBlueTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_flip_display();
        }
        else if(loss == 2){
            al_draw_bitmap(figura.SmallYellowCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.SmallYellowSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.SmallYellowTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
        }
        else if(loss == 3){
            al_draw_bitmap(figura.SmallRedCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.SmallRedSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.SmallRedTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
        }
        else if(loss == 4){
            al_draw_bitmap(figura.SmallGreenCircle,x1,y+tura * 40,0);
            al_draw_bitmap(figura.SmallGreenSquare,x1,y+tura * 40,0);
            al_draw_bitmap(figura.SmallGreenTriangle,x1,y+tura * 40,0);
        }
    }

static void MediumSameColors(int loss, int y,int tura){
        int x1 = 100;
        int x2 = 200;
        int x3 = 300;
        LoadBitMaps figura;
        if (loss == 1) {
            al_draw_bitmap(figura.MediumBlueCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.MediumBlueSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.MediumBlueTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_flip_display();
        }
        else if(loss == 2){
            al_draw_bitmap(figura.MediumYellowCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.MediumYellowSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.MediumYellowTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
        }
        else if(loss == 3){
            al_draw_bitmap(figura.MediumRedCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.MediumRedSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.MediumRedTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
        }
        else if(loss == 4){
            al_draw_bitmap(figura.MediumGreenCircle,x1,y+tura * 40,0);
            al_draw_bitmap(figura.MediumGreenSquare,x1,y+tura * 40,0);
            al_draw_bitmap(figura.MediumGreenTriangle,x1,y+tura * 40,0);
        }
    }

    static void BigSameColors(int loss, int y,int tura){
        int x1 = 100;
        int x2 = 200;
        int x3 = 300;
        LoadBitMaps figura;
        if (loss == 1) {
            al_draw_bitmap(figura.BigBlueCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.BigBlueSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.BigBlueTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_flip_display();
        }
        else if(loss == 2){
            al_draw_bitmap(figura.BigYellowCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.BigYellowSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.BigYellowTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
        }
        else if(loss == 3){
            al_draw_bitmap(figura.BigRedCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.BigRedSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.BigRedTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
        }
        else if(loss == 4){
            al_draw_bitmap(figura.BigGreenCircle,x1,y+tura * 40,0);
            al_draw_bitmap(figura.BigGreenSquare,x1,y+tura * 40,0);
            al_draw_bitmap(figura.BigGreenTriangle,x1,y+tura * 40,0);
        }
    }
    static void SameFigures(int loss, int y, int tura)
    {
        
    }



};


#endif //LOGICKING_METODY_H

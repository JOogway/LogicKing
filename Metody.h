//
// Created by oogway on 03.12.15.
//

#ifndef LOGICKING_METODY_H
#define LOGICKING_METODY_H
#include <allegro5/bitmap_io.h>
#include <allegro5/bitmap_draw.h>
#include <allegro5/allegro_font.h>




const char *Info1 = " Celem gry jest dobranie kolejno czterech ciągów figur według pewnej reguły,";
const char *Info2 = " którą trzeba odgadnąć samemu na podstawie pierwszych podanych trzech ciągów.";
const char *Info3 = " Figury mogą się różnić wielkością, kształtem,kolorem. ";
const char *Info4 = " Po poprawnym dobraniu czterech ciągów figur zostaniesz o tym poinformowany oraz wyświetlona zostanie reguła.";
const char *Info5 = "POWODZENIA!";



class Metody {

    static struct LoadText{
        ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 16, 0);
        const char *tSmallBlueCircle = "Małe niebieskie kółko";
        const char *tMediumBlueCircle = "Średnie niebieskie kółko";
        const char *tBigBlueCircle = "Duże niebieskie kółko";
        const char *tSmallYellowCircle = "Małe żółte kółko";
        const char *tMediumYellowCircle = "Średnie żółte kółko";
        const char *tBigYellowCircle = "Duże żółte kółko";
        const char *tSmallRedCircle = "Małe czerwone kółko";
        const char *tMediumRedCircle = "Średnie czerwone kółko";
        const char *tBigRedCircle = "Duże czerwone kółko";
        const char *tSmallGreenCircle = "Mały zielone kółko";
        const char *tMediumGreenCircle = "Średnie zielone kółko";
        const char *tBigGreenCircle = "Duże zielone kółko";
        const char *tSmallBlueSquare = "Mały niebieski kwadrat";
        const char *tMediumBlueSquare = "Średni niebieski kwadrat";
        const char *tBigBlueSquare = "Duż niebieski kwadraty";
        const char *tSmallYellowSquare = "Mały żółty kwadrat";
        const char *tMediumYellowSquare = "Średni żółty kwadrat";
        const char *tBigYellowSquare = "Duży żółty kwadrat";
        const char *tSmallRedSquare = "Mały czerwony kwadrat";
        const char *tMediumRedSquare = "Średni czerwony kwadrat";
        const char *tBigRedSquare = "Duży czerwony kwadrat";
        const char *tSmallGreenSquare = "Mały zielony kwadrat";
        const char *tMediumGreenSquare = "Średni zielony kwadrat";
        const char *tBigGreenSquare = "Duży zielony kwadrat";
        const char *tSmallBlueTriangle = "Mały niebieski trójkąt";
        const char *tMediumBlueTriangle = "Średni niebieski trójkąt";
        const char *tBigBlueTriangle = "Duży niebieski trójkąt";
        const char *tSmallYellowTriangle = "Mały żółty trójkąt";
        const char *tMediumYellowTriangle = "Średni żółty trójkąt";
        const char *tBigYellowTriangle = "Duży żółty trójkąt";
        const char *tSmallRedTriangle = "Mały czerwony trójkąt";
        const char *tMediumRedTriangle = "Średni czerwony trójkąt";
        const char *tBigRedTriangle = "Duży czerwony trójkąt";
        const char *tSmallGreenTriangle = "Mały zielony trójkąt";
        const char *tMediumGreenTriangle = "Średni zielony trójkąt";
        const char *tBigGreenTriangle = "Duży zielony trójkąt";
        //Small => 100 Medium => 200 Big = >300
        //Blue => 10 Red =>20 Yellow =>30 Green => 40
        //Circle => 1 Triangle => 2 Square => 3

    }tekst;
//level 1

public: static void SmallSameColors(int tryb, int loss, int y,int tura) {
        int x1 = 100;
        int x2 = 200;
        int x3 = 300;
        LoadBitMaps figura;
        if (tryb == 1) {
            if (loss == 1) {
                al_draw_bitmap(figura.SmallBlueCircle, x1, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_draw_bitmap(figura.SmallBlueSquare, x2, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_draw_bitmap(figura.SmallBlueTriangle, x3, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_flip_display();
            }
            else if (loss == 2) {
                al_draw_bitmap(figura.SmallYellowCircle, x1, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_draw_bitmap(figura.SmallYellowSquare, x2, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_draw_bitmap(figura.SmallYellowTriangle, x3, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_flip_display();

            }
            else if (loss == 3) {
                al_draw_bitmap(figura.SmallRedCircle, x1, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_draw_bitmap(figura.SmallRedSquare, x2, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_draw_bitmap(figura.SmallRedTriangle, x3, y + tura * 40, ALLEGRO_ALIGN_CENTER);
                al_flip_display();

            }
            else if (loss == 4) {
                al_draw_bitmap(figura.SmallGreenCircle, x1, y + tura * 40, 0);
                al_draw_bitmap(figura.SmallGreenSquare, x2, y + tura * 40, 0);
                al_draw_bitmap(figura.SmallGreenTriangle, x3, y + tura * 40, 0);
                al_flip_display();

            }
        }
        else if(tryb == 2){
            if (loss == 1) {

                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x1,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallBlueCircle);
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x2,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallBlueSquare);
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x3,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallBlueTriangle);
                al_flip_display();
            }
            else if (loss == 2) {
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x1,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallYellowCircle);
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x2,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallYellowSquare);
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x3,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallYellowTriangle);
            }
            else if (loss == 3) {
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x1,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallRedCircle);
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x2,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallRedSquare);
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x3,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallRedTriangle);
            }
            else if (loss == 4) {
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x1,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallGreenCircle);
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x2,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallGreenSquare);
                al_draw_text(tekst.font16, al_map_rgb(255, 0, 0),x3,y+tura*40,ALLEGRO_ALIGN_LEFT, tekst.tSmallGreenTriangle);
            }


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
            al_flip_display();
        }
        else if(loss == 3){
            al_draw_bitmap(figura.MediumRedCircle, x1, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.MediumRedSquare, x2, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_draw_bitmap(figura.MediumRedTriangle, x3, y + tura * 40,ALLEGRO_ALIGN_CENTER);
            al_flip_display();
        }
        else if(loss == 4){
            al_draw_bitmap(figura.MediumGreenCircle,x1,y+tura * 40,0);
            al_draw_bitmap(figura.MediumGreenSquare,x1,y+tura * 40,0);
            al_draw_bitmap(figura.MediumGreenTriangle,x1,y+tura * 40,0);
            al_flip_display();
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
            al_flip_display();
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

    static void SameFigures(int loss, int loss2, int y, int tura)
    {
        int x1 = 100;
        int x2 = 200;
        int x3 = 300;
        int x;
        LoadBitMaps figura;
        for(int i = 1; i<3; i++){
            loss2 == rand()%4;
        loss = rand()%3;

            if(loss == 1) {
                if (loss2 == 1) {
                    al_draw_bitmap(figura.SmallBlueSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 2) {
                    al_draw_bitmap(figura.SmallRedSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 3) {
                    al_draw_bitmap(figura.SmallYellowSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 4) {
                    al_draw_bitmap(figura.SmallGreenSquare, i * 100, y + tura * 40, 0);
                }
            }
            else if(loss ==2){
                if (loss2 ==1){
                    al_draw_bitmap(figura.MediumBlueSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 2) {
                    al_draw_bitmap(figura.MediumRedSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 3) {
                    al_draw_bitmap(figura.MediumYellowSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 4) {
                    al_draw_bitmap(figura.MediumGreenSquare, i * 100, y + tura * 40, 0);
                }
            }
            else if (loss == 3) {
                if (loss2 == 1) {
                    al_draw_bitmap(figura.BigBlueSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 2) {
                    al_draw_bitmap(figura.BigRedSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 3) {
                    al_draw_bitmap(figura.BigYellowSquare, i * 100, y + tura * 40, 0);
                }
                else if (loss2 == 4) {
                    al_draw_bitmap(figura.BigGreenSquare, i * 100, y + tura * 40, 0);
                }
            }
        }
    }

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
};







#endif //LOGICKING_METODY_H



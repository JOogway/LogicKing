//
// Created by oogway on 03.12.15.
//

#ifndef LOGICKING_METODY_H
#define LOGICKING_METODY_H

#include <allegro5/allegro.h>
#include <allegro5/allegro5.h>
#include <allegro5/bitmap_io.h>
#include <allegro5/bitmap_draw.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/utf8.h>
#include "Metody.h"
#include <iostream>


class Metody {
    int arr[36] = {111, 112, 113, 121, 122, 123, 131, 132, 133, 141, 142, 143, 211, 212, 213, 221, 222, 223, 231,
                          232, 233, 241, 242, 243, 311, 312, 313, 321, 322, 323, 331, 332, 333, 341, 342, 343};
    int SameSizeRed[3]={111,112,113}; //easy 3
    int SameSizeBlue[3]={121,122,123}; //easy 3
    int SameSizeYellow[3]={131,132,133}; //easy 3
    int SameSizeGreen[3]={141,142,143}; //easy 3

    //Allofthem
    int SameColorRed[9] = {111, 112, 113, 211, 212, 213, 311, 312, 313};
    //easy 9
    int SameColorBlue[9] = {121, 122, 123, 221, 222, 223, 321, 322, 323};
    //easy 9
    int SameColorYellow[9] = {131, 132, 133, 231, 232, 233, 331, 332, 333};
    //easy 9
    int SameColorGreen[9] = {141, 142, 143, 241, 242, 243, 341, 342, 343};
    //easy 9

    int SameShapeCircle[12] = {111, 121, 131, 141, 211, 221, 231, 241, 311, 321, 331, 341};
    //easy 12
    int SameShapeSquare[12] = {112, 122, 132, 142, 212, 222, 232, 242, 312, 322, 332, 342};
    //easy 12
    int SameShapeTriangle[12] = {113, 123, 133, 143, 213, 223, 233, 243, 313, 323, 333, 343};
    //easy 12

    int SameColorRedOrBlue[18] = {111, 112, 113, 211, 212, 213, 311, 312, 313, 121, 122, 123, 221, 222, 223, 321,
                                         322, 323};
    //Medium 18
    int SameColorRedOrYellow[18] = {111, 112, 113, 211, 212, 213, 311, 312, 313, 131, 132, 133, 231, 232, 233,
                                           331, 332, 333};
    //Medium 18
    int SameColorRedOrGreen[18] = {111, 112, 113, 211, 212, 213, 311, 312, 313, 141, 142, 143, 241, 242, 243,
                                          341, 342, 343};
    //Medium 18
    int SameColorBlueOrYellow[18] = {121, 122, 123, 221, 222, 223, 321, 322, 323, 131, 132, 133, 231, 232, 233,
                                            331, 332, 333};
    //Medium 18
    int SameColorBlueOrGreen[18] = {121, 122, 123, 221, 222, 223, 321, 322, 323, 141, 142, 143, 241, 242, 243,
                                           341, 342, 343};
    //Medium 18
    int SameColorYellowOrGreen[18] = {131, 132, 133, 231, 232, 233, 331, 332, 333, 141, 142, 143, 241, 242, 243,
                                             341, 342, 343};
    //Medium 18
    int SameShapeCircleOrSquare[24] = {111, 121, 131, 141, 211, 221, 231, 241, 311, 321, 331, 341, 112, 122, 132,
                                              142, 212, 222, 232, 242, 312, 322, 332, 342};
    //medium 24
    int SameShapeCircleOrTriangle[24] = {111, 121, 131, 141, 211, 221, 231, 241, 311, 321, 331, 341, 113, 123,
                                                133, 143, 213, 223, 233, 243, 313, 323, 333, 343};
    //medium 24
    int SameShapeSquareOrTriangle[24] = {112, 122, 132, 142, 212, 222, 232, 242, 312, 322, 332, 342, 113, 123,
                                                133, 143, 213, 223, 233, 243, 313, 323, 333, 343};
    //medium 24

    int SameColorRedOrBlueOrYellow[27] = {111, 112, 113, 211, 212, 213, 311, 312, 313, 121, 122, 123, 221, 222,
                                                 223, 321, 322, 323, 131, 132, 133, 231, 232, 233, 331, 332, 333};
    //medium 27
    int SameColorRedOrBlueOrGreen[27] = {111, 112, 113, 211, 212, 213, 311, 312, 313, 121, 122, 123, 221, 222,
                                                223, 321, 322, 323, 141, 142, 143, 241, 242, 243, 341, 342, 343};
    //medium 27
    int SameColorRedOrYellowOrGreen[27] = {111, 112, 113, 211, 212, 213, 311, 312, 313, 131, 132, 133, 231, 232,
                                                  233, 331, 332, 333, 141, 142, 143, 241, 242, 243, 341, 342, 343};
    //medium 27
    int SameColorBlueOrYellowOrGreen[27] = {121, 122, 123, 221, 222, 223, 321, 322, 323, 131, 132, 133, 231, 232,
                                                   233, 331, 332, 333, 141, 142, 143, 241, 242, 243, 341, 342, 343};
    //medium 27

    int SameColorRedOrBlueShapeCircleOrSquare[12]={111,112,121,122,211,212,221,222,311,312,321,322};
    //hard 12
    int SameColorRedOrBlueShapeCircleOrTriangle[12]={111,113,121,123,211,213,221,223,311,313,321,323};
    //hard 12
    int SameColorRedOrBlueShapeSquareOrTriangle[12]={112,113,122,123,212,213,222,223,312,313,322,323};
    //hard 12
    int SameColorRedOrYellowShapeCircleOrSquare[12]={111,112,131,132,211,212,231,232,311,312,331,332};
    //hard 12
    int SameColorRedOrYellowShapeCircleOrTriangle[12]={111,113,131,133,211,213,231,233,311,313,331,333};
    //hard 12
    int SameColorRedOrYellowShapeSquareOrTriangle[12]={112,113,132,133,212,213,232,233,312,313,332,333};
    //hard 12

    int SameColorRedOrGreenShapeCircleOrSquare[12]={111,112,141,142,211,212,241,242,311,313,341,342};
    //hard 12
    int SameColorRedOrGreenShapeCircleOrTriangle[12]={111,113,141,143,211,213,241,243,311,313,341,343};
    //hard 12
    int SameColorRedOrGreenShapeSquareOrTriangle[12]={112,113,142,143,212,213,242,243,312,313,342,343};
    //hard 12

    int SameColorBlueOrYellowShapeCircleOrSquare[12]={121,122,131,132,221,222,231,232,321,322,331,332};
    //hard 12
    int SameColorBlueOrYellowShapeCircleOrTriangle[12]={121,123,131,133,221,223,231,233,321,323,331,333};
    //hard 12
    int SameColorBlueOrYellowShapeSquareOrTriangle[12]={122,123,132,133,222,223,232,233,322,323,332,333};
    //hard 12

    int SameColorBlueOrGreenShapeCircleOrSquare[12]={121,122,141,142,221,222,241,242,321,322,341,342};
    //hard 12
    int SameColorBlueOrGreenShapeCircleOrTriangle[12]={121,123,141,143,221,223,241,243,321,323,341,343};
    //hard 12
    int SameColorBlueOrGreenShapeSquareOrTriangle[12]={122,123,142,143,222,223,242,243,322,323,342,343};
    //hard 12

    int SameColorYellowOrGreenShapeCircleOrSquare[12]={131,132,141,142,231,232,241,242,331,332,341,342};
    //hard 12
    int SameColorYellowOrGreenShapeCircleOrTriangle[12]={131,133,141,143,231,233,241,243,331,333,341,343};
    //hard 12
    int SameColorYellowOrGreenShapeSquareOrTriangle[12]={132,133,142,143,232,233,242,243,332,333,342,343};
    //hard 12



public:
    static ALLEGRO_BITMAP *getFigure(ALLEGRO_BITMAP *bmp, int codeOfFigure) {
        struct LoadBitMaps figura;
        if (codeOfFigure == 111) { bmp = figura.SmallRedCircle; }
        else if (codeOfFigure == 112) { bmp = figura.SmallRedSquare; }
        else if (codeOfFigure == 113) { bmp = figura.SmallRedTriangle; }

        else if (codeOfFigure == 121) { bmp = figura.SmallBlueCircle; }
        else if (codeOfFigure == 122) { bmp = figura.SmallBlueSquare; }
        else if (codeOfFigure == 123) { bmp = figura.SmallBlueTriangle; }

        else if (codeOfFigure == 131) { bmp = figura.SmallYellowCircle; }
        else if (codeOfFigure == 132) { bmp = figura.SmallYellowSquare; }
        else if (codeOfFigure == 133) { bmp = figura.SmallYellowTriangle; }

        else if (codeOfFigure == 141) { bmp = figura.SmallGreenCircle; }
        else if (codeOfFigure == 142) { bmp = figura.SmallGreenSquare; }
        else if (codeOfFigure == 143) { bmp = figura.SmallGreenTriangle; }

        else if (codeOfFigure == 211) { bmp = figura.MediumRedCircle; }
        else if (codeOfFigure == 212) { bmp = figura.MediumRedSquare; }
        else if (codeOfFigure == 213) { bmp = figura.MediumRedTriangle; }

        else if (codeOfFigure == 221) { bmp = figura.MediumBlueCircle; }
        else if (codeOfFigure == 222) { bmp = figura.MediumBlueSquare; }
        else if (codeOfFigure == 223) { bmp = figura.MediumBlueTriangle; }

        else if (codeOfFigure == 231) { bmp = figura.MediumYellowCircle; }
        else if (codeOfFigure == 232) { bmp = figura.MediumYellowSquare; }
        else if (codeOfFigure == 233) { bmp = figura.MediumYellowTriangle; }

        else if (codeOfFigure == 241) { bmp = figura.MediumGreenCircle; }
        else if (codeOfFigure == 242) { bmp = figura.MediumGreenSquare; }
        else if (codeOfFigure == 243) { bmp = figura.MediumGreenTriangle; }

        else if (codeOfFigure == 311) { bmp = figura.BigRedCircle; }
        else if (codeOfFigure == 312) { bmp = figura.BigRedSquare; }
        else if (codeOfFigure == 313) { bmp = figura.BigRedTriangle; }

        else if (codeOfFigure == 321) { bmp = figura.BigBlueCircle; }
        else if (codeOfFigure == 322) { bmp = figura.BigBlueSquare; }
        else if (codeOfFigure == 323) { bmp = figura.BigBlueTriangle; }

        else if (codeOfFigure == 331) { bmp = figura.BigYellowCircle; }
        else if (codeOfFigure == 332) { bmp = figura.BigYellowSquare; }
        else if (codeOfFigure == 333) { bmp = figura.BigYellowTriangle; }

        else if (codeOfFigure == 341) { bmp = figura.BigGreenCircle; }
        else if (codeOfFigure == 342) { bmp = figura.BigGreenSquare; }
        else if (codeOfFigure == 343) { bmp = figura.BigGreenTriangle; }
        bmp;
    }

public:
    void PrintRuleFigureEasy(int tryb, int tura, int loss){
        ALLEGRO_BITMAP *bmp = NULL;
        int y = 60;
        int x = 100;

        int BigSameColorSameShape = (std::rand() % 12) + 24;//easy 12
        int MediumSameColorSameShape = (std::rand() % 12) + 12;//easy 12
        int SmallSameColorSameShape = (std::rand() % 12);//easy 12

        if (loss == 0) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, arr[BigSameColorSameShape]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 1) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, arr[MediumSameColorSameShape]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 2) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, arr[SmallSameColorSameShape]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 3) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, arr[BigSameColorSameShape]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 4) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRed[std::rand() % 9]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 5) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlue[std::rand() % 9]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 6) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorYellow[std::rand() % 9]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 7) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorGreen[std::rand() % 9]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 8) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameShapeCircle[std::rand() % 12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 9) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameShapeSquare[std::rand() % 12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 10) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameShapeTriangle[std::rand() % 12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }//

    }

public:
    void PrintRuleFigureMedium(int tryb, int tura, int loss){
        ALLEGRO_BITMAP *bmp = NULL;
        int y = 60;
        int x = 100;

        int BigSameColorSameShape = (std::rand() % 12) + 24;//easy 12
        int MediumSameColorSameShape = (std::rand() % 12) + 12;//easy 12
        int SmallSameColorSameShape = (std::rand() % 12);//easy 12


        if (loss == 0) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlue[std::rand() % 18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 1) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellow[std::rand() %18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 2) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrGreen[std::rand() %18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 3) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellow[std::rand() %18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 4) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrGreen[std::rand() %18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 5) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorYellowOrGreen[std::rand() %18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 6) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameShapeCircleOrSquare[std::rand() %24]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 7) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameShapeCircleOrTriangle[std::rand() %24]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 8) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameShapeSquareOrTriangle[std::rand() %24]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 9) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueOrYellow[std::rand() %27]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 10) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueOrGreen[std::rand() %27]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 11) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellowOrGreen[std::rand() %27]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 12) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellowOrGreen[std::rand() %27]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
    }
public:
    void PrintRuleFigureHard(int tryb, int tura, int loss){
        ALLEGRO_BITMAP *bmp = NULL;
        int y = 60;
        int x = 100;

        int BigSameColorSameShape = (std::rand() % 12) + 24;//easy 12
        int MediumSameColorSameShape = (std::rand() % 12) + 12;//easy 12
        int SmallSameColorSameShape = (std::rand() % 12);//easy 12

        if (loss == 0) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueShapeCircleOrSquare[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 1) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueShapeCircleOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 2) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueShapeSquareOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 3) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellowShapeCircleOrSquare[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 4) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellowShapeCircleOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 5) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellowShapeSquareOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 6) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrGreenShapeCircleOrSquare[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 7) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrGreenShapeCircleOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 8) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrGreenShapeSquareOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 9) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellowShapeCircleOrSquare[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
        else if (loss == 10) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellowShapeCircleOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }//
        else if (loss == 11) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellowShapeSquareOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 12) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrGreenShapeCircleOrSquare[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 13) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrGreenShapeCircleOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 14) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrGreenShapeSquareOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 15) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorYellowOrGreenShapeCircleOrSquare[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 16) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorYellowOrGreenShapeCircleOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 17) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameColorYellowOrGreenShapeSquareOrTriangle[std::rand() %12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        } else if (loss == 18) {
            for (int i = 1; i < 4; i++) {
                al_draw_bitmap(getFigure(bmp, SameShapeCircleOrTriangle[std::rand() %24]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
    }



public:
    void GetFirstThree(int tryb,  int tura, int difficulty) {

        ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf",
                                                16, 0);

        if(difficulty == 1) {
            int loss = rand() %7 ;
            for (int i = 1; i < 4; i++) {
                PrintRuleFigureEasy(tryb, tura, loss);
                tura+=1;
            }
        }
        else if(difficulty ==2){
            int loss = rand() %14;
            for (int i = 1; i < 4; i++) {
                PrintRuleFigureMedium(tryb, tura, loss);
                tura+=1;
            }
        }
        else if(difficulty ==3){
            int loss = rand()%18;
            for (int i = 1; i < 4; i++) {
                PrintRuleFigureHard(tryb, tura, loss);
                tura+=1;
            }
        }
    }

public:
    void ShowOptions(){
    }


    static struct LoadBitMaps {

        //Small => 100 Medium => 200 Big = >300
        //Blue => 10 Red =>20 Yellow =>30 Green => 40
        //Circle => 1 Triangle => 2 Square => 3

        ALLEGRO_BITMAP *SmallBlueCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Small_Blue_Circle.png");
        ALLEGRO_BITMAP *MediumBlueCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Medium_Blue_Circle.png");
        ALLEGRO_BITMAP *BigBlueCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Big_Blue_Circle.png");
        ALLEGRO_BITMAP *SmallYellowCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Small_Yellow_Circle.png");
        ALLEGRO_BITMAP *MediumYellowCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Medium_Yellow_Circle.png");
        ALLEGRO_BITMAP *BigYellowCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Big_Yellow_Circle.png");
        ALLEGRO_BITMAP *SmallRedCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Small_Red_Circle.png");
        ALLEGRO_BITMAP *MediumRedCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Medium_Red_Circle.png");
        ALLEGRO_BITMAP *BigRedCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Big_Red_Circle.png");
        ALLEGRO_BITMAP *SmallGreenCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Small_Green_Circle.png");
        ALLEGRO_BITMAP *MediumGreenCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Medium_Green_Circle.png");
        ALLEGRO_BITMAP *BigGreenCircle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Circle/Big_Green_Circle.png");

        ALLEGRO_BITMAP *SmallBlueSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Small_Blue_Square.png");
        ALLEGRO_BITMAP *MediumBlueSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Medium_Blue_Square.png");
        ALLEGRO_BITMAP *BigBlueSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Big_Blue_Square.png");
        ALLEGRO_BITMAP *SmallYellowSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Small_Yellow_Square.png");
        ALLEGRO_BITMAP *MediumYellowSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Medium_Yellow_Square.png");
        ALLEGRO_BITMAP *BigYellowSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Big_Yellow_Square.png");
        ALLEGRO_BITMAP *SmallRedSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Small_Red_Square.png");
        ALLEGRO_BITMAP *MediumRedSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Medium_Red_Square.png");
        ALLEGRO_BITMAP *BigRedSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Big_Red_Square.png");
        ALLEGRO_BITMAP *SmallGreenSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Small_Green_Square.png");
        ALLEGRO_BITMAP *MediumGreenSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Medium_Green_Square.png");
        ALLEGRO_BITMAP *BigGreenSquare = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Square/Big_Green_Square.png");

        ALLEGRO_BITMAP *SmallBlueTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Small_Blue_Triangle.png");
        ALLEGRO_BITMAP *MediumBlueTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Medium_Blue_Triangle.png");
        ALLEGRO_BITMAP *BigBlueTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Big_Blue_Triangle.png");
        ALLEGRO_BITMAP *SmallYellowTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Small_Yellow_Triangle.png");
        ALLEGRO_BITMAP *MediumYellowTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Medium_Yellow_Triangle.png");
        ALLEGRO_BITMAP *BigYellowTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Big_Yellow_Triangle.png");
        ALLEGRO_BITMAP *SmallRedTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Small_Red_Triangle.png");
        ALLEGRO_BITMAP *MediumRedTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Medium_Red_Triangle.png");
        ALLEGRO_BITMAP *BigRedTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Big_Red_Triangle.png");
        ALLEGRO_BITMAP *SmallGreenTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Small_Green_Triangle.png");
        ALLEGRO_BITMAP *MediumGreenTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Medium_Green_Triangle.png");
        ALLEGRO_BITMAP *BigGreenTriangle = al_load_bitmap(
                "/home/oogway/ClionProjects/LogicKing/Figures/Triangle/Big_Green_Triangle.png");
    } figura;

};


#endif //LOGICKING_METODY_H



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
    int y = 60;
    int x = 100;

    int arr[36] = {111, 112, 113, 121, 122, 123, 131, 132, 133, 141, 142, 143, 211, 212, 213, 221, 222, 223, 231,
                   232, 233, 241, 242, 243, 311, 312, 313, 321, 322, 323, 331, 332, 333, 341, 342, 343};

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

    int SameColorRedOrBlueShapeCircleOrSquare[12] = {111, 112, 121, 122, 211, 212, 221, 222, 311, 312, 321, 322};
    //hard 12
    int SameColorRedOrBlueShapeCircleOrTriangle[12] = {111, 113, 121, 123, 211, 213, 221, 223, 311, 313, 321, 323};
    //hard 12
    int SameColorRedOrBlueShapeSquareOrTriangle[12] = {112, 113, 122, 123, 212, 213, 222, 223, 312, 313, 322, 323};
    //hard 12
    int SameColorRedOrYellowShapeCircleOrSquare[12] = {111, 112, 131, 132, 211, 212, 231, 232, 311, 312, 331, 332};
    //hard 12
    int SameColorRedOrYellowShapeCircleOrTriangle[12] = {111, 113, 131, 133, 211, 213, 231, 233, 311, 313, 331, 333};
    //hard 12
    int SameColorRedOrYellowShapeSquareOrTriangle[12] = {112, 113, 132, 133, 212, 213, 232, 233, 312, 313, 332, 333};
    //hard 12

    int SameColorRedOrGreenShapeCircleOrSquare[12] = {111, 112, 141, 142, 211, 212, 241, 242, 311, 313, 341, 342};
    //hard 12
    int SameColorRedOrGreenShapeCircleOrTriangle[12] = {111, 113, 141, 143, 211, 213, 241, 243, 311, 313, 341, 343};
    //hard 12
    int SameColorRedOrGreenShapeSquareOrTriangle[12] = {112, 113, 142, 143, 212, 213, 242, 243, 312, 313, 342, 343};
    //hard 12

    int SameColorBlueOrYellowShapeCircleOrSquare[12] = {121, 122, 131, 132, 221, 222, 231, 232, 321, 322, 331, 332};
    //hard 12
    int SameColorBlueOrYellowShapeCircleOrTriangle[12] = {121, 123, 131, 133, 221, 223, 231, 233, 321, 323, 331, 333};
    //hard 12
    int SameColorBlueOrYellowShapeSquareOrTriangle[12] = {122, 123, 132, 133, 222, 223, 232, 233, 322, 323, 332, 333};
    //hard 12

    int SameColorBlueOrGreenShapeCircleOrSquare[12] = {121, 122, 141, 142, 221, 222, 241, 242, 321, 322, 341, 342};
    //hard 12
    int SameColorBlueOrGreenShapeCircleOrTriangle[12] = {121, 123, 141, 143, 221, 223, 241, 243, 321, 323, 341, 343};
    //hard 12
    int SameColorBlueOrGreenShapeSquareOrTriangle[12] = {122, 123, 142, 143, 222, 223, 242, 243, 322, 323, 342, 343};
    //hard 12

    int SameColorYellowOrGreenShapeCircleOrSquare[12] = {131, 132, 141, 142, 231, 232, 241, 242, 331, 332, 341, 342};
    //hard 12
    int SameColorYellowOrGreenShapeCircleOrTriangle[12] = {131, 133, 141, 143, 231, 233, 241, 243, 331, 333, 341, 343};
    //hard 12
    int SameColorYellowOrGreenShapeSquareOrTriangle[12] = {132, 133, 142, 143, 232, 233, 242, 243, 332, 333, 342, 343};
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
    const char *PrintAlgorythm(int loss, int difficulty) {
        std::string str;
        if (difficulty == 1) {
            if (loss == 0) { str = "Dobierz figury koloru czerwonego."; }
            else if (loss == 1) { str = "Dobierz figury koloru niebieskiego."; }
            else if (loss == 2) { str = "Dobierz figury koloru żółtego."; }
            else if (loss == 3) { str = "Dobierz figury koloru zielonego."; }
            else if (loss == 4) { str = "Dobierz figury będące okręgami."; }
            else if (loss == 5) { str = "Dobierz figury będące kwadratami."; }
            else if (loss == 6) { str = "Dobierz figury będące trójkątami."; }
        }
        else if (difficulty == 2) {
            if (loss == 0) { str = "Dobierz figury koloru czerwonego lub niebieskiego."; }
            else if (loss == 1) { str = "Dobierz figury koloru czerwonego lub żółtego."; }
            else if (loss == 2) { str = "Dobierz figury koloru czerwonego lub zielonego."; }
            else if (loss == 3) { str = "Dobierz figury koloru niebieskiego lub żółtego."; }
            else if (loss == 4) { str = "Dobierz figury koloru niebieskiego lub zielonego."; }
            else if (loss == 5) { str = "Dobierz figury koloru żótego lub zielonego."; }
            else if (loss == 6) { str = "Dobierz figury będące okręgami lub kwadratami."; }
            else if (loss == 7) { str = "Dobierz figury będące okręgami lub trójkątami."; }
            else if (loss == 8) { str = "Dobierz figury będące kwadratami lub trójkątami."; }
            else if (loss == 9) { str = "Dobierz figury koloru czerwonego lub niebieskiego lub żółtego."; }
            else if (loss == 10) { str = "Dobierz figury koloru czerwonego lub niebieskiego lub zielonego."; }
            else if (loss == 11) { str = "Dobierz figury koloru czerwonego lub żółtego lub zielonego."; }
            else if (loss == 12) { str = "Dobierz figury koloru niebieskiego lub żółtego lub zielonego."; }
        }
        else if (difficulty == 3) {
            if (loss == 0) { str = "Dobierz figury koloru czerwonego lub niebieskiego będące okręgami lub kwadratami"; }
            else if (loss == 1) { str = "Dobierz figury koloru czerwonego lub niebieskiego będące okręgami lub trójkątami"; }
            else if (loss == 2) { str = "Dobierz figury koloru czerwonego lub niebieskiego będące kwadratami lub trójkątami"; }
            else if (loss == 3) { str = "Dobierz figury koloru czerwonego lub żółtego będące okręgami lub kwadratami"; }
            else if (loss == 4) { str = "Dobierz figury koloru czerwonego lub żółtego będące okręgami lub trójkątami"; }
            else if (loss == 5) { str = "Dobierz figury koloru czerwonego lub żółtego będące kwadratami lub trójkątami"; }
            else if (loss == 6) { str = "Dobierz figury koloru czerwonego lub zielonego będące okręgami lub kwadratami"; }
            else if (loss == 7) { str = "Dobierz figury koloru czerwonego lub zielonego będące okręgami lub trójkątami"; }
            else if (loss == 8) { str = "Dobierz figury koloru czerwonego lub zielonego będące kwadratami lub trójkątami"; }
            else if (loss == 9) { str = "Dobierz figury koloru niebieskiego lub żółtego będące okręgami lub kwadratami"; }
            else if (loss == 10) { str = "Dobierz figury koloru niebieskiego lub żółtego będące okręgami lub trójkątami"; }
            else if (loss == 11) { str = "Dobierz figury koloru niebieskiego lub żółtego będące kwadratami lub trójkątami"; }
            else if (loss == 12) { str = "Dobierz figury koloru niebieskiego lub zielonego będące okręgami lub kwadratami"; }
            else if (loss == 13) { str = "Dobierz figury koloru niebieskiego lub zielonego będące okręgami lub trójkątami"; }
            else if (loss == 14) { str = "Dobierz figury koloru niebieskiego lub zielonego będące kwadratami lub trójkątami"; }
            else if (loss == 15) { str = "Dobierz figury koloru żółtego lub zielonego będące okręgami lub kwadratami"; }
            else if (loss == 16) { str = "Dobierz figury koloru żółtego lub zielonego będące okręgami lub trójkątami"; }
            else if (loss == 17) { str = "Dobierz figury koloru żółtego lub zielonego będące kwadratami lub trójkątami"; }


        }
        const char *zasada = str.c_str();
        return zasada;
    }

public:
    int LossFiguresEasy9(int easyLoss9) {
            easyLoss9 = std::rand() % 9;
        return easyLoss9;
    }
public:
    int LossFiguresEasy12(int easyLoss12) {
        easyLoss12 = std::rand() % 12;
        return easyLoss12;
    }

public:
    int  LossFigureMedium18( int mediumLoss18){
        mediumLoss18 = std::rand() % 18;
        return mediumLoss18;
    }
public:
    int  LossFigureMedium24(int mediumLoss24){
        mediumLoss24 = std::rand() % 24;
        return mediumLoss24;
    }
public:
    int  LossFigureMedium27(int mediumLoss27){
        mediumLoss27 = std::rand() % 27;
        return mediumLoss27;
    }

public:
    int LossFigureHard(int hardLoss){
        hardLoss = std::rand() % 17;
        return hardLoss;
        }


public:
    void PrintRuleFigureEasy(int tura, int loss, int x, int y, int easyLoss9, int easyLoss12) {

        ALLEGRO_BITMAP *bmp = NULL;
        for (int i = 1; i < 4; i++) {
             easyLoss9 = LossFiguresEasy9(easyLoss9);
            easyLoss12 = LossFiguresEasy12(easyLoss12);
            if (loss == 0) {
                al_draw_bitmap(getFigure(bmp, SameColorRed[easyLoss9]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
                }
        else if (loss == 1) {
                al_draw_bitmap(getFigure(bmp, SameColorBlue[easyLoss9]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        }
        else if (loss == 2) {
                al_draw_bitmap(getFigure(bmp, SameColorYellow[easyLoss9]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        }
        else if (loss == 3) {
                al_draw_bitmap(getFigure(bmp, SameColorGreen[easyLoss9]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        }
        else if (loss == 4) {
                al_draw_bitmap(getFigure(bmp, SameShapeCircle[easyLoss12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        }
        else if (loss == 5) {
                al_draw_bitmap(getFigure(bmp, SameShapeSquare[easyLoss12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        }
        else if (loss == 6) {
                al_draw_bitmap(getFigure(bmp, SameShapeTriangle[easyLoss12]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        }
        }
    }

public:
    void PrintRuleFigureMedium(int tura, int loss, int x, int y, int mediumLoss18, int mediumLoss24,
                               int mediumLoss27) {
        ALLEGRO_BITMAP *bmp = NULL;
        for (int i = 1; i < 4; i++) {
        mediumLoss18 = LossFigureMedium18(mediumLoss18);
        mediumLoss24 = LossFigureMedium24(mediumLoss24);
        mediumLoss27 = LossFigureMedium27(mediumLoss27);
        if (loss == 0) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlue[mediumLoss18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 1) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellow[mediumLoss18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 2) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrGreen[mediumLoss18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 3) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellow[mediumLoss18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 4) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrGreen[mediumLoss18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 5) {
                al_draw_bitmap(getFigure(bmp, SameColorYellowOrGreen[mediumLoss18]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 6) {
                al_draw_bitmap(getFigure(bmp, SameShapeCircleOrSquare[mediumLoss24]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 7) {
                al_draw_bitmap(getFigure(bmp, SameShapeCircleOrTriangle[mediumLoss24]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 8) {
                al_draw_bitmap(getFigure(bmp, SameShapeSquareOrTriangle[mediumLoss24]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 9) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueOrYellow[mediumLoss27]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 10) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueOrGreen[mediumLoss27]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 11) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellowOrGreen[mediumLoss27]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
        } else if (loss == 12) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellowOrGreen[mediumLoss27]), x, y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
    }

public:
    void PrintRuleFigureHard(int tura, int loss, int x, int y, int hardLoss) {
        ALLEGRO_BITMAP *bmp = NULL;
        for (int i = 1; i < 4; i++) {
            hardLoss = LossFigureHard(hardLoss);
            if (loss == 0) {

                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueShapeCircleOrSquare[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;

            }
            else if (loss == 1) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueShapeCircleOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
            else if (loss == 2) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrBlueShapeSquareOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
            else if (loss == 3) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellowShapeCircleOrSquare[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
            else if (loss == 4) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellowShapeCircleOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
            else if (loss == 5) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrYellowShapeSquareOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
            else if (loss == 6) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrGreenShapeCircleOrSquare[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;

            }
            else if (loss == 7) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrGreenShapeCircleOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
            else if (loss == 8) {
                al_draw_bitmap(getFigure(bmp, SameColorRedOrGreenShapeSquareOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;

            }
            else if (loss == 9) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellowShapeCircleOrSquare[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;

            }
            else if (loss == 10) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellowShapeCircleOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
            else if (loss == 11) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrYellowShapeSquareOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;

            } else if (loss == 12) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrGreenShapeCircleOrSquare[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            } else if (loss == 13) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrGreenShapeCircleOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            } else if (loss == 14) {
                al_draw_bitmap(getFigure(bmp, SameColorBlueOrGreenShapeSquareOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            } else if (loss == 15) {
                al_draw_bitmap(getFigure(bmp, SameColorYellowOrGreenShapeCircleOrSquare[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            } else if (loss == 16) {
                al_draw_bitmap(getFigure(bmp, SameColorYellowOrGreenShapeCircleOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            } else if (loss == 17) {
                al_draw_bitmap(getFigure(bmp, SameColorYellowOrGreenShapeSquareOrTriangle[hardLoss]), x,
                               y + tura * 50, 0);
                al_flip_display();
                x += 150;
            }
        }
    }

public:
    int GetFirstThree(int tura, int difficulty, int loss, int easyLoss9, int easyLoss12,
                      int mediumLoss18, int mediumLoss24, int mediumLoss27,
                      int hardLoss) {

        ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf",
                                                16, 0);
        if (difficulty == 1) {
            PrintRuleFigureEasy(tura, loss, x, y, easyLoss9, easyLoss12);
        }
        else if (difficulty == 2) {

            PrintRuleFigureMedium(tura, loss, x, y, mediumLoss18, mediumLoss24, mediumLoss27);
        }
        else if (difficulty == 3) {

            PrintRuleFigureHard(tura, loss, x, y, hardLoss);
        }
        return loss, easyLoss9, easyLoss12, mediumLoss18, mediumLoss24, mediumLoss27, hardLoss;
    }

public:
    void PrintChosen(ALLEGRO_BITMAP *tempbmp,int tura) {

        al_draw_bitmap(tempbmp,x,y+tura*50,0);
        al_flip_display();
    }

public:
    int ShowOptions(int difficulty, int loss, int lossRightOnePos, int falseLoss1, int falseLoss2,
                    int falseLoss3, int easyLoss9, int easyLoss12,
                    int mediumLoss18, int mediumLoss24, int mediumLoss27,
                    int hardLoss, int& tempx, int& tempy) {
        int x1 = 60;
        int y1 = 550;
        int x2 = 450;
        int y2 = 600;

        ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf",
                                                16, 0);
        al_draw_text(font16, al_map_rgb(150, 105, 150), x1 - 20, y1, NULL, "1.");
        al_draw_text(font16, al_map_rgb(150, 105, 150), x1 - 20, y2, NULL, "2.");
        al_draw_text(font16, al_map_rgb(150, 105, 150), x2 - 20, y1, NULL, "3.");
        al_draw_text(font16, al_map_rgb(150, 105, 150), x2 - 20, y2, NULL, "4.");
        int tur = 0;
        if (difficulty == 1) {
            if (lossRightOnePos == 1) {
                PrintRuleFigureEasy(tur, loss, x1, y1, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss1, x1, y2, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss2, x2, y1, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss3, x2, y2, easyLoss9, easyLoss12);
                tempx = x1;
                tempy = y1;
            }
            else if (lossRightOnePos == 2) {

                PrintRuleFigureEasy(tur, loss, x1, y2, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss1, x1, y1, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss2, x2, y1, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss3, x2, y2, easyLoss9, easyLoss12);
                tempx = x1;
                tempy = y2;
            }
            else if (lossRightOnePos == 3) {

                PrintRuleFigureEasy(tur, loss, x2, y1, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss1, x1, y1, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss2, x1, y2, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss3, x2, y2, easyLoss9, easyLoss12);
                tempx = x2;
                tempy = y1;
            }
            else if (lossRightOnePos == 4) {

                PrintRuleFigureEasy(tur, loss, x2, y2, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss1, x1, y1, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss2, x1, y2, easyLoss9, easyLoss12);
                PrintRuleFigureEasy(tur, falseLoss3, x2, y1, easyLoss9, easyLoss12);
                tempx = x2;
                tempy = y2;
            }
        }
        else if (difficulty == 2) {
            if (lossRightOnePos == 1) {
                PrintRuleFigureMedium(tur, loss, x1, y1, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss1, x1, y2, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss2, x2, y1, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss3, x2, y2, mediumLoss18, mediumLoss24, mediumLoss27);
                tempx = x1;
                tempy = y1;
            }
            else if (lossRightOnePos == 2) {
                PrintRuleFigureMedium(tur, loss, x1, y2, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss1, x1, y1, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss2, x2, y1, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss3, x2, y2, mediumLoss18, mediumLoss24, mediumLoss27);
                tempx = x1;
                tempy = y2;
            }
            else if (lossRightOnePos == 3) {
                PrintRuleFigureMedium(tur, loss, x2, y1, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss1, x1, y1, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss2, x1, y2, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss3, x2, y2, mediumLoss18, mediumLoss24, mediumLoss27);
                tempx = x2;
                tempy = y1;
            }
            else if (lossRightOnePos == 4) {
                PrintRuleFigureMedium(tur, loss, x2, y2, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss1, x1, y1, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss2, x1, y2, mediumLoss18, mediumLoss24, mediumLoss27);
                PrintRuleFigureMedium(tur, falseLoss3, x2, y1, mediumLoss18, mediumLoss24, mediumLoss27);
                tempx = x2;
                tempy = y2;
            }
        }
        else if (difficulty == 3) {
            if (lossRightOnePos == 1) {
                PrintRuleFigureHard(tur, loss, x1, y1, hardLoss);
                PrintRuleFigureHard(tur, falseLoss1, x1, y2, hardLoss);
                PrintRuleFigureHard(tur, falseLoss2, x2, y1, hardLoss);
                PrintRuleFigureHard(tur, falseLoss3, x2, y2, hardLoss);
                tempx = x1;
                tempy = y1;
            }
            else if (lossRightOnePos == 2) {
                PrintRuleFigureHard(tur, loss, x1, y2, hardLoss);
                PrintRuleFigureHard(tur, falseLoss1, x1, y1, hardLoss);
                PrintRuleFigureHard(tur, falseLoss2, x2, y1, hardLoss);
                PrintRuleFigureHard(tur, falseLoss3, x2, y2, hardLoss);
                tempx = x1;
                tempy = y2;
            }
            else if (lossRightOnePos == 3) {
                PrintRuleFigureHard(tur, loss, x2, y1, hardLoss);
                PrintRuleFigureHard(tur, falseLoss1, x1, y1, hardLoss);
                PrintRuleFigureHard(tur, falseLoss2, x1, y2, hardLoss);
                PrintRuleFigureHard(tur, falseLoss3, x2, y2, hardLoss);
                tempx = x2;
                tempy = y1;
            }
            else if (lossRightOnePos == 4) {
                PrintRuleFigureHard(tur, loss, x2, y2, hardLoss);
                PrintRuleFigureHard(tur, falseLoss1, x1, y1, hardLoss);
                PrintRuleFigureHard(tur, falseLoss2, x1, y2, hardLoss);
                PrintRuleFigureHard(tur, falseLoss3, x2, y1, hardLoss);
                tempx = x2;
                tempy = y2;
            }
        }
        return  difficulty,  loss,  lossRightOnePos,  falseLoss1,  falseLoss2,
                falseLoss3,  easyLoss9,  easyLoss12,
                mediumLoss18,  mediumLoss24,  mediumLoss27,
                hardLoss,  tempx,  tempy;
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



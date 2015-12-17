//
// Created by oogway on 03.12.15.
//

#ifndef LOGICKING_METODY_H
#define LOGICKING_METODY_H
#include <allegro5/bitmap_io.h>
#include <allegro5/bitmap_draw.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/utf8.h>

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

class Metody {


//level 1
//znajdź taki wiersz który ma te same kolory
public:
    static void SameSizeAndColors(int tryb, int y, int tura) {
        int x1 = 100;
        int x2 = 200;
        int x3 = 300;
        struct LoadBitMaps figura;
        int loss = rand() % 12;

        if (tryb == 1) {
            if (loss == 1) {
                al_draw_bitmap(figura.SmallBlueCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallBlueSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallBlueTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 2) {
                al_draw_bitmap(figura.SmallYellowCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallYellowSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallYellowTriangle, x3, y + tura * 50, 0);
                al_flip_display();

            }
            else if (loss == 3) {
                al_draw_bitmap(figura.SmallRedCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallRedSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallRedTriangle, x3, y + tura * 50, 0);
                al_flip_display();

            }
            else if (loss == 4) {
                al_draw_bitmap(figura.SmallGreenCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallGreenSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallGreenTriangle, x3, y + tura * 50, 0);
                al_flip_display();

            }
            else if (loss == 5) {
                al_draw_bitmap(figura.MediumBlueCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumBlueSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumBlueTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 6) {
                al_draw_bitmap(figura.MediumYellowCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumYellowSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumYellowTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 7) {
                al_draw_bitmap(figura.MediumRedCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumRedSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumRedTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 8) {
                al_draw_bitmap(figura.MediumGreenCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumGreenSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumGreenTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 9) {
                al_draw_bitmap(figura.BigBlueCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.BigBlueSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.BigBlueTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 10) {
                al_draw_bitmap(figura.BigYellowCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.BigYellowSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.BigYellowTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 11) {
                al_draw_bitmap(figura.BigRedCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.BigRedSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.BigRedTriangle, x3, y + tura * 50, 0);
            }
            else if (loss == 12) {
                al_draw_bitmap(figura.BigGreenCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.BigGreenSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.BigGreenTriangle, x3, y + tura * 50, 0);
            }
        }
        else if (tryb == 2) {
            if (loss == 1) {

                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallBlueCircle);
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallBlueSquare);
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallBlueTriangle);
                al_flip_display();
            }
            else if (loss == 2) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallYellowCircle);
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallYellowSquare);
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallYellowTriangle);
            }
            else if (loss == 3) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallRedCircle);
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallRedSquare);
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallRedTriangle);
            }
            else if (loss == 4) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallGreenCircle);
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallGreenSquare);
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             tSmallGreenTriangle);
            }


        }
    }
//Znajdz taki wiersz który ma te same kwadraty
    static void SameSizeSquare(int tryb, int y, int tura) {
        int x1 = 100;
        int x2 = 200;
        int x3 = 300;
        int x;
        LoadBitMaps figura;
        for (int i = 1; i < 3; i++) {
            int loss2 = rand() % 4;
            int loss = rand() % 3;
            if (tryb == 1) {
                if (loss == 1) {
                    if (loss2 == 1) {
                        al_draw_bitmap(figura.SmallBlueSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.SmallRedSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.SmallYellowSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 4) {
                        al_draw_bitmap(figura.SmallGreenSquare, i * 100, y + tura * 50, 0);
                    }
                }
                else if (loss == 2) {
                    if (loss2 == 1) {
                        al_draw_bitmap(figura.MediumBlueSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.MediumRedSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.MediumYellowSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 4) {
                        al_draw_bitmap(figura.MediumGreenSquare, i * 100, y + tura * 50, 0);
                    }
                }
                else if (loss == 3) {
                    if (loss2 == 1) {
                        al_draw_bitmap(figura.BigBlueSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.BigRedSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.BigYellowSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 4) {
                        al_draw_bitmap(figura.BigGreenSquare, i * 100, y + tura * 50, 0);
                    }
                }
            }
            else if(tryb ==2){
                {
                    if (loss == 1) {
                        if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tSmallBlueSquare);
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tSmallRedSquare);
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tSmallYellowSquare);
                        }
                        else if (loss2 == 4) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tSmallGreenSquare);
                        }
                    }
                    else if (loss == 2) {
                        if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tMediumBlueSquare);
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tMediumRedSquare);
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tMediumYellowSquare);
                        }
                        else if (loss2 == 4) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tMediumGreenSquare);
                        }
                    }
                    else if (loss == 3) {
                        if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tBigBlueSquare);
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tBigRedSquare);
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tBigYellowSquare);
                        }
                        else if (loss2 == 4) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tBigGreenSquare);
                        }
                    }

            }
        }
        al_flip_display();
    }
    }
    static void SameSizeCircle(int tryb, int y, int tura) {
        int x1 = 100;
        int x2 = 200;
        int x3 = 300;
        int x;
        LoadBitMaps figura;
        for (int i = 1; i < 3; i++) {
            int loss2 = rand() % 4;
            int loss = rand() % 3;
            if (tryb == 1) {
                if (loss == 1) {
                    if (loss2 == 1) {
                        al_draw_bitmap(figura.SmallBlueCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.SmallRedCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.SmallYellowCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 4) {
                        al_draw_bitmap(figura.SmallGreenCircle, i * 100, y + tura * 50, 0);
                    }
                }
                else if (loss == 2) {
                    if (loss2 == 1) {
                        al_draw_bitmap(figura.MediumBlueCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.MediumRedCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.MediumYellowCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 4) {
                        al_draw_bitmap(figura.MediumGreenCircle, i * 100, y + tura * 50, 0);
                    }
                }
                else if (loss == 3) {
                    if (loss2 == 1) {
                        al_draw_bitmap(figura.BigBlueCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.BigRedCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.BigYellowCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 4) {
                        al_draw_bitmap(figura.BigGreenCircle, i * 100, y + tura * 50, 0);
                    }
                }
            }
            else if(tryb ==2){
                {
                    if (loss == 1) {
                        if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tSmallBlueCircle);
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tSmallRedCircle);
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tSmallYellowCircle);
                        }
                        else if (loss2 == 4) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tSmallGreenCircle);
                        }
                    }
                    else if (loss == 2) {
                        if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tMediumBlueCircle);
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tMediumRedCircle);
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tMediumYellowCircle);
                        }
                        else if (loss2 == 4) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tMediumGreenCircle);
                        }
                    }
                    else if (loss == 3) {
                        if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tBigBlueCircle);
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tBigRedCircle);
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tBigYellowCircle);
                        }
                        else if (loss2 == 4) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*100, y+tura, NULL, tBigGreenCircle);
                        }
                    }

                }
            }
            al_flip_display();
        }
    }

    struct LoadBitMaps {

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



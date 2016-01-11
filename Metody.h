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


//level 1
//znajdź taki wiersz który ma te same kolory
public:
    static ALLEGRO_BITMAP * getFigure(ALLEGRO_BITMAP *bmp,int codeOfFigure){
        struct LoadBitMaps figura;
        if(codeOfFigure ==111){bmp = figura.SmallRedCircle;}
        else if (codeOfFigure ==112){bmp = figura.SmallRedSquare; }
        else if (codeOfFigure ==113){bmp = figura.SmallRedTriangle;}
        else if (codeOfFigure ==121){bmp = figura.SmallBlueCircle;}
        else if (codeOfFigure ==122){bmp = figura.SmallBlueSquare;}
        else if (codeOfFigure ==123){bmp = figura.SmallBlueTriangle;}
        else if (codeOfFigure ==131){bmp = figura.SmallYellowCircle;}
        else if (codeOfFigure ==132){bmp = figura.SmallYellowSquare;}
        else if (codeOfFigure ==133){bmp = figura.SmallYellowTriangle;}
        else if (codeOfFigure ==141){bmp = figura.SmallGreenCircle;}
        else if (codeOfFigure ==142){bmp = figura.SmallGreenSquare;}
        else if (codeOfFigure ==143){bmp = figura.SmallGreenTriangle;}
        else if (codeOfFigure ==211){bmp = figura.MediumRedCircle;}
        else if (codeOfFigure ==212){bmp = figura.MediumRedSquare;}
        else if (codeOfFigure ==213){bmp = figura.MediumRedTriangle;}
        else if (codeOfFigure ==221){bmp = figura.MediumBlueCircle;}
        else if (codeOfFigure ==222){bmp = figura.MediumBlueSquare;}
        else if (codeOfFigure ==223){bmp = figura.MediumBlueTriangle;}
        else if (codeOfFigure ==231){bmp = figura.MediumYellowCircle;}
        else if (codeOfFigure ==232){bmp = figura.MediumYellowSquare;}
        else if (codeOfFigure ==233){bmp = figura.MediumYellowTriangle;}
        else if (codeOfFigure ==241){bmp = figura.MediumGreenCircle;}
        else if (codeOfFigure ==242){bmp = figura.MediumGreenSquare;}
        else if (codeOfFigure ==243){bmp = figura.MediumGreenTriangle;}
        else if (codeOfFigure ==311){bmp = figura.BigRedCircle;}
        else if (codeOfFigure ==312){bmp = figura.BigRedSquare;}
        else if (codeOfFigure ==313){bmp = figura.BigRedTriangle;}
        else if (codeOfFigure ==321){bmp = figura.BigBlueCircle;}
        else if (codeOfFigure ==322){bmp = figura.BigBlueSquare;}
        else if (codeOfFigure ==323){bmp = figura.BigBlueTriangle;}
        else if (codeOfFigure ==331){bmp = figura.BigYellowCircle;}
        else if (codeOfFigure ==332){bmp = figura.BigYellowSquare;}
        else if (codeOfFigure ==333){bmp = figura.BigYellowTriangle;}
        else if (codeOfFigure ==341){bmp = figura.BigGreenCircle;}
        else if (codeOfFigure ==342){bmp = figura.BigGreenSquare;}
        else if (codeOfFigure ==343){bmp = figura.BigGreenTriangle;}
        bmp;
    }

public:
    static void SameSizeAndColors(int tryb, int y, int tura) {
        int x1 = 100;
        int x2 = 250;
        int x3 = 400;
        struct LoadBitMaps figura;
        ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 16, 0);
        int nr;
        int loss = rand() % 11;
       // if(){}
            int temp = loss;
        ALLEGRO_BITMAP *bmp = NULL;
        if (tryb == 0) {
            if (loss == 0) {
                al_draw_bitmap(getFigure(bmp,341), x1, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallBlueSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallBlueTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 1) {
                al_draw_bitmap(figura.SmallYellowCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallYellowSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallYellowTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 2) {
                al_draw_bitmap(figura.SmallRedCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallRedSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallRedTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 3) {
                al_draw_bitmap(figura.SmallGreenCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallGreenSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.SmallGreenTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 4) {
                al_draw_bitmap(figura.MediumBlueCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumBlueSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumBlueTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 5) {
                al_draw_bitmap(figura.MediumYellowCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumYellowSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumYellowTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 6) {
                al_draw_bitmap(figura.MediumRedCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumRedSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumRedTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 7) {
                al_draw_bitmap(figura.MediumGreenCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumGreenSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.MediumGreenTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 8) {
                al_draw_bitmap(figura.BigBlueCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.BigBlueSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.BigBlueTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 9) {
                al_draw_bitmap(figura.BigYellowCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.BigYellowSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.BigYellowTriangle, x3, y + tura * 50, 0);
                al_flip_display();
            }
            else if (loss == 10) {
                al_draw_bitmap(figura.BigRedCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.BigRedSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.BigRedTriangle, x3, y + tura * 50, 0);
            }
            else if (loss == 11) {
                al_draw_bitmap(figura.BigGreenCircle, x1, y + tura * 50, 0);
                al_draw_bitmap(figura.BigGreenSquare, x2, y + tura * 50, 0);
                al_draw_bitmap(figura.BigGreenTriangle, x3, y + tura * 50, 0);
            }
        }
        else if (tryb == 1) {
            if (loss == 0) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Małe niebieskie kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Mały niebieski kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Mały niebieski trójkąt");
                al_flip_display();
            }
            else if (loss == 1) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Małe żółte kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Mały żółty kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Mały żółty trójkąt");
            }
            else if (loss == 2) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Małe czerwone kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Małe czerwone kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Mały czerwone trójkąt");
            }
            else if (loss == 3) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Małe zielone kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Mały zielony kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Mały zielony trójkąt");
            }
            else if(loss == 4) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średnie niebieskie kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średni niebieski kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średni niebieski trójkąt");
            }
            else if(loss == 5) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                                 "Średnie żółte kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                                 "Średni żółty kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                                 "Średni żółty trójkąt");
                }
            else if(loss == 6) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średnie czerwone kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średni czerwony kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średni czerwony trójkąt");
            }
            else if(loss == 7) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średnie zielone kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średni zielony kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Średni zielony trójkąt");
            }
            else if(loss == 8) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duże niebieskie kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duży niebieski kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duży niebieski trójkąt");
            }
            else if(loss == 9) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duże żółte kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duży żółty kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duży żółty trójkąt");
            }
            else if(loss == 10) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duże czerwone kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duży czerwony kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duży czerwony trójkąt");
            }
            else if(loss == 11) {
                al_draw_text(font16, al_map_rgb(255, 0, 0), x1, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duże zielone kółko");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x2, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duży zielony kwadrat");
                al_draw_text(font16, al_map_rgb(255, 0, 0), x3, y + tura * 50, ALLEGRO_ALIGN_LEFT,
                             "Duży zielony trójkąt");
            }
        }
    }

//Znajdz taki wiersz który ma te same kwadraty
    static void SameSizeSquare(int tryb, int y, int tura) {
        LoadBitMaps figura;
        ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 16, 0);

        for (int i = 1; i < 3; i++) {
            int loss2 = rand() % 5;
            int loss = rand() % 4;
            if (tryb == 0) {
                if (loss == 0) {
                    if (loss2 == 0) {
                        al_draw_bitmap(figura.SmallBlueSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 1) {
                        al_draw_bitmap(figura.SmallRedSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.SmallYellowSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.SmallGreenSquare, i * 100, y + tura * 50, 0);
                    }
                }
                else if (loss == 1) {
                    if (loss2 == 0) {
                        al_draw_bitmap(figura.MediumBlueSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 1) {
                        al_draw_bitmap(figura.MediumRedSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.MediumYellowSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.MediumGreenSquare, i * 100, y + tura * 50, 0);
                    }
                }
                else if (loss == 3) {
                    if (loss2 == 0) {
                        al_draw_bitmap(figura.BigBlueSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 1) {
                        al_draw_bitmap(figura.BigRedSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.BigYellowSquare, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.BigGreenSquare, i * 100, y + tura * 50, 0);
                    }
                }
            }
            else if(tryb ==1){
                {
                    if (loss == 0) {
                        if (loss2 == 0) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT,  "");
                        }
                        else if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                    }
                    else if (loss == 1) {
                        if (loss2 == 0) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                    }
                    else if (loss == 2) {
                        if (loss2 == 0) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                    }
                }
            }
        al_flip_display();
        }
    }
    static void SameSizeCircle(int tryb, int y, int tura) {
        LoadBitMaps figura;
        ALLEGRO_FONT *font16 = al_load_ttf_font("/home/oogway/ClionProjects/LogicKing/ubuntu-font-family/Ubuntu-B.ttf", 16, 0);

        for (int i = 1; i < 3; i++) {
            int loss2 = rand() % 4;
            int loss = rand() % 3;
            if (tryb == 0) {
                if (loss == 0) {
                    if (loss2 == 0) {
                        al_draw_bitmap(figura.SmallBlueCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 1) {
                        al_draw_bitmap(figura.SmallRedCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.SmallYellowCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.SmallGreenCircle, i * 100, y + tura * 50, 0);
                    }
                }
                else if (loss == 1) {
                    if (loss2 == 0) {
                        al_draw_bitmap(figura.MediumBlueCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 1) {
                        al_draw_bitmap(figura.MediumRedCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.MediumYellowCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.MediumGreenCircle, i * 100, y + tura * 50, 0);
                    }
                }
                else if (loss == 2) {
                    if (loss2 == 0) {
                        al_draw_bitmap(figura.BigBlueCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 1) {
                        al_draw_bitmap(figura.BigRedCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 2) {
                        al_draw_bitmap(figura.BigYellowCircle, i * 100, y + tura * 50, 0);
                    }
                    else if (loss2 == 3) {
                        al_draw_bitmap(figura.BigGreenCircle, i * 100, y + tura * 50, 0);
                    }
                }
            }
            else if(tryb == 1){
                {
                    if (loss == 0) {
                        if (loss2 == 0) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                    }
                    else if (loss == 1) {
                        if (loss2 == 0) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                    }
                    else if (loss == 2) {
                        if (loss2 == 0) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 1) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 2) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                        else if (loss2 == 3) {
                            al_draw_text(font16, al_map_rgb(150, 105, 150), i*250, y+tura, ALLEGRO_ALIGN_LEFT, "");
                        }
                    }
                }
            }
            al_flip_display();
        }
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



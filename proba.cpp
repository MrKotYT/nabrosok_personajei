#include "TXLib.h"

void drawDiskord (int x, int y, int r);

void kotik ();

void mnogougolnik (int x, int y);

void drawpatrik (int x, int y);

void drawshar (int x, int y, int r);

void dvigshar (int x, int y, int r);

void dvigpatrik (int x, int y);

void dvigDiskord (int x, int y, int r);

void drawgdcube (int x, int y);

int main ()
    {
    txCreateWindow (1337, 542);
    txSetFillColor (RGB (255, 255, 255));
    txClear ();



    return 0;

    }

void drawDiskord (int x, int y, int r)
    {
    txBegin ();
    txSetFillColor (RGB (21, 138, 255));
    txClear ();
    txSetFillColor (RGB (255, 255, 255));
    txSetColor (RGB (255, 255, 255));
    txRectangle (x - 220, y, x + 220, y + 253);

    txSetColor (RGB (255, 255, 255));
    txSetFillColor (RGB (21, 138, 255));

    txCircle (x - 110, y + 100, r);

    txCircle (x + 110, y + 100, r);
    txSleep (50);
    txEnd ();
    }

void kotik ()
    {
    txSetColor (RGB (18, 18, 18));
    txSetFillColor (RGB (18, 18, 18));
    txRectangle (1075, 385, 1315, 514);

    txSetColor (RGB (0, 0, 0));
    txSetFillColor (RGB (0, 0, 0));
    txRectangle (1075, 385, 1113, 424);
    txRectangle (1277, 385, 1315, 424);

    txSetColor (RGB (255, 255, 255));
    txSetFillColor (RGB (255, 255, 255));
    txRectangle (1094, 405, 1113, 424);
    txRectangle (1277, 405, 1295, 424);

    txSetColor (RGB (18, 18, 18));
    txSetFillColor (RGB (255, 255, 255));
    txRectangle (1137, 480, 1261, 514);

    txSetColor (RGB (237, 28, 36));
    txSetFillColor (RGB (237, 28, 36));        //1193,
    txRectangle (1156, 480, 1230, 500);

    txSetColor (RGB (18, 18, 18));
    txSetFillColor (RGB (68, 217, 36));
    txRectangle (1133, 432, 1169, 461);
    txRectangle (1223, 432, 1260, 461);

    txSetColor (RGB (255, 255, 255));
    txSetFillColor (RGB (255, 255, 255));
    txRectangle (1150, 445, 1169, 461);
    txRectangle (1240, 445, 1260, 461);
    }

void mnogougolnik (int x, int y)
    {
    txSetFillColor (RGB (237, 28, 36));
    POINT tochki [6] = {{x, y}, {x + 100, y}, {x + 150, y + 50}, {x + 100, y + 100}, {x, y + 100}, {x - 50, y + 50}};
    txPolygon (tochki, 6);
    }

void drawpatrik (int x, int y)
    {
    txBegin ();
    txSetFillColor (RGB (21, 138, 255));
    txClear ();
    txSetFillColor (RGB (255, 40, 40));
    txSetColor (RGB (166, 0, 0));
    POINT zvezda [10] = {{x, y - 147}, {x + 28, y - 76}, {x + 108, y - 76}, {x + 45, y - 30}, {x + 68, y + 40}, {x, y}, {x - 67, y + 40}, {x - 43, y - 30}, {x - 109, y - 76}, {x - 25, y - 76}};
    txPolygon (zvezda, 10);
    txSetColor (RGB (0, 0, 0));
    txSetFillColor (RGB (255, 255, 255));
    txCircle (x - 13, y - 111, 11);
    txCircle (x + 12, y - 111, 11);
    txRectangle (x - 14, y - 112, x - 12, y - 110);
    txRectangle (x + 11, y - 112, x + 13, y - 110);
    txSleep (50);
    txEnd ();
    }

void drawshar (int x, int y, int r)
    {
    txBegin ();
    txSetFillColor (RGB (21, 138, 255));
    txClear ();
    txSetFillColor (TX_GREEN);
    txCircle (x, y, r);
    txEnd ();
    }

void dvigshar (int x, int y, int r)
        {
        int t;
        for (t=1; t<200; t++)
            {
            drawshar (x+t*7, y-t*2, r);
            txSleep (35);
            }
        }

void dvigpatrik (int x, int y)
    {
    int t;
    for (t=1; t<100; t++)
        {
        drawpatrik (x, y-t*10);
        }
    }

void dvigDiskord (int x, int y, int r)
    {
    int t;
    for (t=1; t<200; t++)
        {
        drawDiskord (x-t*10, y, r);
        }
    }

void drawgdcube (int x, int y)
    {
    txBegin ();
    txSetColor (RGB (0, 0, 0));
    txSetFillColor (RGB (244, 244, 2));
    txRectangle (x - 68, y - 48, x + 48, y + 72);
    txSetFillColor (RGB (36, 31, 237));             //358,460
    txRectangle (x - 38, y - 20, x - 19, y + 6);
    txRectangle (x + 4, y - 20, x + 26, y + 6);
    txRectangle (x - 42, y + 35, y + 32, y + 50);     //384, 510
    txEnd ();
    }

void drawamongustelo (int x, int y)
    {
    txSetFillColor (RGB (255, 6, 0));
    txRectangle (512, 102, 728, 432);
    }

void drawamogisnoga1 (int x, int y)
    {
    txSetFillColor (RGB (255, 6, 0));
    txRectangle (512, 432, 559, 509);
    }

void drawamogusnoga2 (int x, int y)
    {
    txSetFillColor (RGB (255, 6, 0));
    txRectangle (681, 432, 728, 509);
    }

void drawamogusbackpack (int x, int y)
    {
    txSetFillColor (RGB (255, 6, 0));
    txRectangle (450, 158, 512, 380);
    }

void AAAAAAA (int x, int y)
    {
    }

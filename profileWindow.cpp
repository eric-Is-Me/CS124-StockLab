#include "lab.h"

Fl_Button* buyB;
Fl_Button* sellB;
Fl_Button* logoutB;

void profileWindow()
{
    int x = 5*WIDTH/8;  int y = 1*HEIGHT/8;
    int w = 1*WIDTH/4;  int h = 1*HEIGHT/8;
    buyB = new Fl_Button(x,y,w,h,"Buy Stock");
    buyB->callback();
    
    x = 5*WIDTH/8;  y = 2*HEIGHT/8;
    sellB = new Fl_Button(x,y,w,h,"Sell Stock");
    sellB->callback();
        
    x = 5*WIDTH/8;  y = 3*HEIGHT/8;
    logoutB = new Fl_Button(x,y,w,h,"Logout");
    logoutB->callback(logoutCB);
}

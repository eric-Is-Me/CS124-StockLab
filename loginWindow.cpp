#include "lab.h"

Fl_Double_Window lw(WIDTH,HEIGHT);
Fl_Button* loginB;
Fl_Button* registerB;
Fl_Input* loginI;
Fl_Secret_Input* loginP;   
    
void loginWindow()
{
    lw.label("Login Screen");
    //Login Button
    int x = 0.42 * WIDTH;    int y = HEIGHT/4;
    int w = 1*WIDTH/4;  int h = HEIGHT/12;
    loginB = new Fl_Button(x,y,w,h,"Login");
    loginB->callback(loginCB);
    //Register Button
    x = 0.69 * WIDTH;
    registerB = new Fl_Button(x,y,w,h,"Register");
    registerB->callback(registerCB);
    //Name Text Field
    x = WIDTH/4;  y = HEIGHT/12; 
    w = 2 * WIDTH/3 + 10;  h = 25;
    loginI = new Fl_Input(x,y,w,h,"Name:");
    //Password Text Field
    y = HEIGHT/6;
    loginP = new Fl_Secret_Input(x,y,w,h,"Password:");
    x = 1*WIDTH/8;  y = 3*HEIGHT/8;
    w = 1*WIDTH/2;  h = 1*HEIGHT/2;
    
    lw.show();
    Fl::run();
}

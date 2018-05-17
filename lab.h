#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Secret_Input.H>

const int WIDTH = 400;
const int HEIGHT = 400;

const int MAXUSERS = 10;

struct Subscriber
{
    std::string name;
    std::string password;
};

extern Fl_Double_Window lw;
extern Fl_Double_Window* pf;
extern Fl_Input* loginI;
extern Fl_Secret_Input* loginP;
extern Subscriber users[MAXUSERS];
extern Fl_Text_Editor* msg;

void profileWindow();
void loginCB(Fl_Widget*);
void arrayInfoSample();
bool Eva(std::string v,std::string p);
void loginWindow();
void logoutCB(Fl_Widget*);
void registerCB(Fl_Widget*);




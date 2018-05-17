#include "maxheap.h"
#include "minheap.h"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/fl_ask.H>


const int WIDTH = 400;
const int HEIGHT = 400;

const int MAXUSERS = 10;

struct Subscriber
{
    std::string name;
    std::string password;
};
struct Stock {
  std::string name;
  MaxHeap<int> buyorders;
  MinHeap<int> sellorders;
};

extern std::vector<Stock> stocks;
extern Fl_Double_Window *lw;
extern Fl_Double_Window* pf;
extern Fl_Input* loginI;
extern Fl_Input* loginP;
extern Subscriber users[MAXUSERS];
extern Fl_Text_Editor* msg;
extern Fl_Double_Window* bw;
extern Fl_Input* snameI;
extern Fl_Input* snumI;
extern Fl_Input* spriceI;
extern Fl_Button* buyB;

void buyB_CB(Fl_Widget*);
void buystockCB(Fl_Widget*);
void buyWindow();
void profileWindow();
void loginCB(Fl_Widget*);
void arrayInfoSample();
bool Eva(std::string v,std::string p);
void loginWindow();
void logoutCB(Fl_Widget*);




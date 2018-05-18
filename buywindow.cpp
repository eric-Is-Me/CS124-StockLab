#include "lab.h"

void buyWindow() {
  bw = new Fl_Double_Window(WIDTH, HEIGHT);
  snameI = new Fl_Input(105,60,100,35,"stock name");
  spriceI = new Fl_Input(105,95,100,35, "price limit");
  snumI = new Fl_Input(105,130,100,35, "number of shares");
  buyB = new Fl_Button(105,170,100,35,"Buy");
  buyB->callback(buyB_CB);
  bw->hide();
}

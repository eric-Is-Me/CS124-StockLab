#include "lab.h"

void buyB_CB(Fl_Widget* w) {
  int x;
  std::string price = spriceI->value();
  std::string numShares = snumI->value();
  for(int i = 0; i < stocks.size();i++) {
    if(snameI->value() == stocks[i].name) {
      if(stocks[i].sellorders.peak(std::stoi(price))) {
        stocks[i].sellorders.Remove(x);
        std::cout << "Purchased " << snumI->value() << " Stocks at " << x
        << " per stock\n";
        std::cout << "Total spent: " << (std::stoi(numShares) * x) << std::endl;
        return;
      }
      else
        std::cout << "could not purchase stock\n";
    }
    else
      std::cout << "stock not found\n";

  }
}

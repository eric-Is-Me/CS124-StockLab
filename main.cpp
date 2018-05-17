#include "lab.h"

Subscriber users[MAXUSERS];
std::vector<Stock> stocks;
Fl_Double_Window* bw;
Fl_Input* snameI;
Fl_Input* snumI;
Fl_Input* spriceI;
Fl_Button* buyB;
int main()
{
    Stock Microsoft;
    Microsoft.name = "MSFT";
    Microsoft.buyorders.Insert(247);
    Microsoft.buyorders.Insert(200);
    Microsoft.buyorders.Insert(300);
    Microsoft.buyorders.Insert(347);

    Microsoft.sellorders.Insert(245);
    Microsoft.sellorders.Insert(302);
    Microsoft.sellorders.Insert(275);
    Microsoft.sellorders.Insert(233);

    stocks.push_back(Microsoft);

    /*int x;

    stocks[0].sellorders.Remove(x);

    std::cout << x << std::endl;*/
    buyWindow();
    arrayInfoSample();
    loginWindow();
    //lw.show();
    Fl::run();
}

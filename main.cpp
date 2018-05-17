#include "lab.h"
 
Subscriber users[MAXUSERS];

int main()
{
    arrayInfoSample();
    loginWindow();
    lw.show();
    Fl::run();
}

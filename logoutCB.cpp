#include "lab.h"

void logoutCB(Fl_Widget*)
{
    std::string msg = "Are you sure you wish to Logout?";
    int choice = fl_choice(msg.c_str(),"NO","YES",0);
    switch(choice)
    {
    case 0:
        pf->show(); break;
    case 1:
        pf->hide();
        lw.show();
    }
}

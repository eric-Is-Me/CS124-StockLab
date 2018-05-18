#include "lab.h"

Fl_Double_Window* pf;
void loginCB(Fl_Widget*)
{
    std::string v = loginI->value();
    std::string p = loginP->value();
    if(Eva(v,p) == true)
    {
        std::string msg = "Hello, " + v;
        int choice = fl_choice(msg.c_str(),"Profile",0,0);
        switch(choice)
        {
        case 0:
            pf = new Fl_Double_Window(WIDTH,HEIGHT);
            pf->label("Profile");
            profileWindow();
            pf->show();
            lw.hide();
        }
    }
    
    else if(Eva(v,p) == false)
    {
        std::string msg = "ERROR! Name or Password not in system.";
        int choice = fl_choice(msg.c_str(),"Back to Login",0,0);
        switch(choice)
        {
        case 0:
        lw.show();
           
        }
    }
    
}

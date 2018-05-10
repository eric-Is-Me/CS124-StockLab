#include "lab.h"
void registerUserCB(Fl_Widget*)
{
    
    Subscriber registersub; 
    registersub.setName(loginU->value());
    registersub.setPassword(loginP->value());
    if (NewUser(registersub))
    {
        fl_alert("You are now registered!");
    }
    else if(!NewUser(registersub))
    {
        fl_alert("Registration failed!");
    }
}

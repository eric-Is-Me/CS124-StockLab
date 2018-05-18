#include "lab.h"
void registerCB(Fl_Widget*)
{
    if(loginI->value() == "" or loginP->value() == ""){
        fl_alert("You must enter a value into the name and password field to register");
    }
    Subscriber registersub; 
    registersub.name = loginI->value();
    registersub.password = loginP->value();
    
    fl_alert("You have registerd a new user!");
}

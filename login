#include "lab.h"
Fl_Double_Window* sw;
Fl_Button* readB;
Fl_Button* rereadB;
Fl_Button* sendB;
Fl_Button* changePassB;
Fl_Button* logoutB;
Fl_Button* billB;
string loginname;
void loginCB(Fl_Widget*)
{
    Subscriber loginsub; 
    loginsub.setName(loginU->value());
    loginsub.setPassword(loginP->value());
    if (login(loginsub) != -1)              //What is the login function? It takes one parameter and returns an integer value but where is it created?
    {
        if(login(loginsub) == 0) fl_alert("Incorrect Password, please re-enter");
        else
        {
            int unread = loginsub.getsize();
        //string msg = "Hello, " + loginsub.getName() + "\nYou have " + to_string(unread) + " unread emails";
        //fl_alert(msg.c_str());
        sw = new Fl_Double_Window(WIDTH, HEIGHT);
        sw->label("Main Menu");
        //Read
        double x = 0.25*WIDTH; double y = 0.09*HEIGHT;
        double w = 0.40*WIDTH; double h = 0.15*HEIGHT;
        loginname = loginsub.getName();
       // readB = new Fl_Button(x,y,w,h,"Read Messages");
        //readB->callback(readCB);
        //Use a void pointer to point to the address of the current subscriber
        //billing
      /*  if(loginsub.getSysop())
        {
            x = x+ .15*HEIGHT;
            billB = new Fl_Button(x,y,w/1.5,h,"billiing");
            billB->callback(billCB);
        }
        */
       /* //Archive
        y =y+ .18*HEIGHT;
        rereadB = new Fl_Button(x,y,w,h,"Open Archive");
        rereadB->callback(readArchiveCB);
    */
       /* //Send
        y=y+ .18*HEIGHT;
        sendB = new Fl_Button(x,y,w,h,"Send");
        sendB->callback(sendCB);
       */
        //PasswordChange
       /* y=y+ .18*HEIGHT;
        changePassB = new Fl_Button(x,y,w,h,"Change Password");
        changePassB->callback(changePassCB);
        */
        y=y+ .18*HEIGHT;
        logoutB = new Fl_Button(x,y,w,h,"Log Out");
        logoutB->callback(logoutCB);
        
        sw->show();
    }
    }
    else if(login(loginsub) == -1)
    {
        fl_alert("You are not registered!");
    }
    
    //fl_alert(msg->buffer()->text());
}

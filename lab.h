#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Text_Buffer.H>
#include <FL/fl_ask.H>
using namespace std;
const int WIDTH = 400;
const int HEIGHT = 400;
template<typename T>
string to_string(const T&x)
{
    std::ostringstream os;
    os << x;
    return os.str();
}
struct Message
{
    string from;
    string to;
    string subject;
    string msg;
};
#include "llqueue.h"

const int MAXUSERS = 10;
class Subscriber
{
private:
    string name;
    string password;
    LLQUEUE mailbox;
    string archive;
    bool sysop;
    int sent;
public:
    Subscriber() {name = password = ""; archive = ""; sysop = false; sent = 0;}
    Subscriber(string n, string p, int s) {name = n; password = p; sent =s;}
    string getName() {return name;}
    string getPassword() {return password;}
    bool getSysop() {return sysop;}
    void setName(string n) {name = n;} 
    void setPassword(string p) {password = p;}
    void setSysop(bool b) {sysop = b;}
    void insert(Message &msg) {mailbox.Insert(msg);}
    void remove(Message &msg) {mailbox.Remove(msg);}
    void incrementSent() {sent++;}
    bool isempty() {return (mailbox.isEmpty());}
    int getsize() {return mailbox.getSize();}
    int getSent() {return sent;}
    string getArchive() {return (archive + "archive");}
    //int size() {return (mailbox.Size());}
};
struct Treenode
{
    Subscriber data;
    Treenode *right;
    Treenode *left;
};
extern Fl_Button* registerB;
extern Fl_Input *loginU; 
extern Fl_Input *loginP;
extern Fl_Double_Window ew;
extern Treenode* subs;
void loginCB(Fl_Widget*);
extern Fl_Text_Editor* msg;
extern Fl_Double_Window* sw;
extern Fl_Button* readB;
extern Fl_Button* rereadB;
extern Fl_Button* sendB;
extern Fl_Button* changePassB;
extern Fl_Button* logoutB;
extern Fl_Double_Window* readw;
extern Fl_Text_Editor* readEditor;
extern Fl_Text_Buffer* readBuffer;

extern Fl_Text_Display* readmDisplay;
extern Fl_Text_Buffer* readmBuffer;

extern Fl_Button* archiveB;
extern Fl_Button* deleteB;
extern Fl_Double_Window* sendw;

extern Fl_Input* sendTo;
extern Fl_Input* sendSubject;

extern Fl_Text_Editor* sendMessage;
extern Fl_Text_Buffer* sendMessageBuf;
extern Fl_Button* sendMessageB;
extern string loginname;
extern Message arch;
extern Fl_Double_Window* changePw;
extern Fl_Input *loginNewPassI;
extern Fl_Button *ChangePassB;
extern Fl_Button* billB;
extern Fl_Double_Window* billw;
extern Fl_Text_Display* billDisplay;
extern Fl_Text_Buffer* billBuffer;
extern Treenode *subs;
int Compare(string sub1, Subscriber &sub2);
bool ArchiveMsg(Message, Subscriber);
void RemoveMsg(LLQUEUE &mailbox);
Treenode *FindUser(Treenode *root, const string name);
bool NewUser(Subscriber data);
void Destroy(Treenode *&root);
int login(Subscriber &sub);
void SendMsg(Message &msg);
void registerUserCB(Fl_Widget*);
void readCB(Fl_Widget*);
void sendCB(Fl_Widget*);
void sendMessageCB(Fl_Widget*);
void deleteCB(Fl_Widget*);
void archiveCB(Fl_Widget*);
void logoutCB(Fl_Widget*);
void readArchiveCB(Fl_Widget*);
void changePassCB(Fl_Widget*);
void newPassCB(Fl_Widget*);
void billCB(Fl_Widget*);
string billingCycle(Treenode* root);

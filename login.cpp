#include "lab.h"
int login(/*Treenode* &root,*/ Subscriber &sub)
{
    Treenode* find;
    find = FindUser(/*root*/subs, sub.getName());
    if (find == nullptr) return -1;
    if(find->data.getName() == sub.getName())
    {
        if(find->data.getPassword() == sub.getPassword())
        {
            sub = find->data;
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

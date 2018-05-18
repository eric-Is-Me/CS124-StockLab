#include "lab.h"

bool Eva(std::string v,std::string p) // Evaluation
{ 
    for(int i = 0; i < MAXUSERS;)
    {
        if(v == users[i].name)
        {
            if(p == users[i].password) return true;
        }
        i++;
    }
    return false;
}

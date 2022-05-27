#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
class instrument{
public:
    virtual void play()=0;
//    {
//        cout<<"playing instrument...."<<endl;
//    }
    
};
class piano: public instrument{
public:
    void play(){
        cout<<"playing piano...."<<endl;
    }
    
};
class gitter: public instrument{
public:
    void play(){
        cout<<"playing gitter...."<<endl;
    }
    
};

int main(){
    instrument* m1= new piano();
    instrument* m2= new gitter();
//    m1->play();
//    m2->play();
    instrument* instruments[2]={m1,m2};
    for(int i=0;i<2;i++)
        instruments[i]->play();

    

    return 0;
}


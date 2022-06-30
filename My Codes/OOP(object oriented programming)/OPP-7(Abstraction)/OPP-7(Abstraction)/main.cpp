#include <iostream>
using namespace std;
class smartphone{
public:
    virtual void takeselfie()=0;
    virtual void call()=0;
};
class andriod: public smartphone{
public:
    void takeselfie(){
        cout<<"andriod selfie\n";
    }
    void call(){
        cout<<"andriod calling\n";
    };
    
};
class iphone: public smartphone{
public:
    void takeselfie(){
        cout<<"iphone selfie\n";
    }
    void call(){
        cout<<"Iphone calling\n";
    };
};
int main() {
    smartphone*s1=new iphone();
    smartphone*s2=new andriod();
    s1->takeselfie();
    s1->call();
    s2->call();
    
    return 0;
}

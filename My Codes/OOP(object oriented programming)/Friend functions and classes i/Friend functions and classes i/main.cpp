#include <iostream>
using namespace std;
class tringle{
    float a;
    float porisima;
    float area;
public:
    void setA(float leanth){
        a=leanth;
        porisima=a*3;
        area=(1.73*a*a)/4;
    }
    friend void printresults(tringle); //global friend
    friend class Homework; //class friend
    
};
class Homework{
public:
    void output(tringle op){
        cout<<"tringle leangth: "<<op.a<<endl;
        cout<<"tringle porisima: "<<op.porisima<<endl;
        cout<<"tringle area: "<<op.area<<endl;
    
}
};
void printresults(tringle et){
    cout<<"tringle leangth: "<<et.a<<endl;
    cout<<"tringle porisima: "<<et.porisima<<endl;
    cout<<"tringle area: "<<et.area<<endl;
}

int main() {
    tringle op;
    tringle et;
    et.setA(3);
    op.setA(7);
    Homework h;
    printresults(et); // global frind print
    h.output(op); //class friend print

    return 0;
}

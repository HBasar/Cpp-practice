#include <iostream>
#include<memory>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor invoked" << endl;
    }
    ~MyClass() {
        cout << "Destructor invoked" << endl;
    }
};

int main()
{
    shared_ptr<MyClass>srptr1=make_shared<MyClass>();
    cout<<"shared count "<<srptr1.use_count()<<endl;
    {
        shared_ptr<MyClass>srptr2=srptr1;
    cout<<"shared count "<<srptr1.use_count()<<endl;
    }   //dealocated
    cout<<"shared count "<<srptr1.use_count()<<endl;


    
    //unique_ptr<MyClass>unprt1= make_unique<MyClass>();
    return 0;
}

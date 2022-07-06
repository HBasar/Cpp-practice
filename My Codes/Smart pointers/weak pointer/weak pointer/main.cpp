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
    weak_ptr<int>wkptr1;
    {
    shared_ptr<int>srptr1= make_shared<int>(25);
        wkptr1=srptr1;
    }

    system("pause>nul");
}

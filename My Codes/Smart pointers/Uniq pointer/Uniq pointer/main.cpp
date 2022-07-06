#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int>unptr1=make_unique<int>(25);
    //uniq pointer announce and print
    cout<<unptr1<<endl;
    cout<<*unptr1<<endl;
    unique_ptr<int>unptr2=move(unptr1);
    //have to move bcz replace not possible
    cout<<*unptr2<<endl;
    
    return 0;
}

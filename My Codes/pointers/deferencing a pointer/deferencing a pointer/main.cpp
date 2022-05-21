#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int score{100};
    int*score_ptr{&score};
    cout<<*score_ptr<<endl;
    *score_ptr=20;
    cout<<*score_ptr<<endl;
    cout<<score<<endl;
    cout<<"----------------"<<endl;
    string name{"Basar"};
    string*string_ptr{&name};
    cout<<*string_ptr<<endl;
    name="Abik";
    cout<<*string_ptr<<endl;
    cout<<"----------------"<<endl;
    vector<string>stooges{"basar","abik","shitol"};
    vector<string>*vector_ptr{nullptr};
    vector_ptr = &stooges;
    cout<<"first stooge: "<< (*vector_ptr).at(0)<<endl;
    cout<<"stooges: ";
    for(auto stooge: *vector_ptr)
        cout<<stooge<<" ";
    cout<<endl;
    
    return 0;
}

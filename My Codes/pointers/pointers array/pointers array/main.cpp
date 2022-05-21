#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    cout<<*arr<<endl;
    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;
    
    int*ptr=arr;
    for(int i=0;i<5;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    int a=10;
    int*p;
    p=&a;
    cout<<*p<<endl;
    int**q=&p;
    cout<<*q<<endl;
    cout<<**q<<endl;
    
    return 0;
}

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void swap(int*a,int*b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=2;
    int b=3;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}

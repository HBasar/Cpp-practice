#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[3]={10,20,30};
    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[j]*arr1[i]<<" ";
        }
    }
    
    return 0;
}


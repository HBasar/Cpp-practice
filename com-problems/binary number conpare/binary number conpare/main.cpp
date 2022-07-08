#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,num2,com1,com2,count=0,count2=0,pls=1,pls2=1,tolo,tolo2;
    cout<<"Enter the number to check: "<<endl;
    cin>>num;
    cin>>num2;
    int temp=num;
    while (temp!= 0)
    {
        temp=temp/10;
        count+=1;
    }
    while (count!= 0)
    {
        pls=pls*10;
        count--;
    }
    
    int temp2=num2;
    while (temp2!= 0)
    {
        temp2=temp2/10;
        count2+=1;
    }
    while (count2!= 0)
    {
        pls2=pls2*10;
        count2--;
    }
    if(pls>pls2){
        com1=num+pls;
        com2=num2+pls;
    }else{
        com1=num+pls2;
        com2=num2+pls2;
    }
    if(pls>pls2){
        while(pls!=0){
            tolo=com1/pls;
            tolo2=com2/pls;
            pls=pls/10;
            if(tolo==tolo2){
                continue;
            }else if (tolo>tolo2){
                cout<<num<<" is bigger binary number"<<endl;
                break;
            }else{
                cout<<num2<<" is bigger binary number"<<endl;
                break;
            }
            
        }
        
    }else{
        while(pls2!=0){
            tolo=com1/pls2;
            tolo2=com2/pls2;
            pls2=pls2/10;
            if(tolo==tolo2){
                continue;
            }else if (tolo>tolo2){
                cout<<num<<" is bigger binary number"<<endl;
                break;
            }else{
                cout<<num2<<" is bigger binary number"<<endl;
                break;
            }
            
        }
        
    }
    return 0;
}

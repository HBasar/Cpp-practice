#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int>number{};
void display_menu(){cout<<"P-Print number"<<endl;
    cout<<"A-Add number"<<endl;
    cout<<"S-smallest number"<<endl;
    cout<<"M-mean of the numbers"<<endl;
    cout<<"L-largest number"<<endl;
    cout<<"F-find a number";
    cout<<"Q-Quit\n"<<endl;

    cout<<"Enter a chose:?"<<endl;
    
}
void Handel_print(){
    if(number.size()==0){
        cout<<"[]-number not added"<<endl;
    }else{
        cout<<"[";
    for(auto num:number)
        cout<<num<<" ";
    cout<<"]"<<endl;
}
}
void Handel_addnumber(){
    int addnum{};
cout<<"add a number:"<<endl;
cin>>addnum;
number.push_back(addnum);
    cout<<"number added"<<endl;

}
void Handel_mean(){
    if(number.size()==0)
        cout<<"No data"<<endl;
    else{
        double total{};
        for(auto num:number){
            total=total+num;
        cout<<"The mean is:"<<total/number.size()<<endl;}
    }
}
void Handel_smallest(){
    if(number.size()==0)
        cout<<"No data"<<endl;
        else{
            int smallest=number.at(0);
            for(auto num:number)
                if(smallest>num)
                smallest=num;
            cout<<"smallest number"<<smallest<<endl;
        }
}
void Handel_largest(){
    if(number.size()==0)
        cout<<"No data"<<endl;
        else{
            int largest=number.at(0);
            for (auto num:number)
            if(largest<num)
            largest=num;
            cout<<"largest number is : "<<largest<<endl;

        }
}
void Handel_find(){
    int target{};
    cout<<"Enter the number to find"<<endl;
    cin>>target;
    for (auto num:number)
        if (num == target){
            cout<<"number found"<<endl;
        }else{
            cout<<"number not found"<<endl;
        }

}
int main()
{
    
    char chose{};
    do{
        display_menu();
    cin>>chose;
     if(chose=='P'||chose=='p'){
        Handel_print();
    }if(chose=='A'||chose=='a'){
        Handel_addnumber();
    }if(chose=='M'||chose=='m'){
        Handel_mean();
    }if(chose=='S'||chose=='s'){
        Handel_smallest();
    }if(chose=='L'||chose=='l'){
        Handel_largest();
    }if(chose=='F'||chose=='f'){
        Handel_find();
    }
    }while(chose!='Q');
    cout<<"Good bye!! press any key to end"<<endl;

    return 0;
}

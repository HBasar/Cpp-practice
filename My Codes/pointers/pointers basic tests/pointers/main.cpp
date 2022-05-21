#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    int*p;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<sizeof p<<endl;
    p=nullptr;
    cout<<p<<endl;
    int*p1{nullptr};
    double*p2{nullptr};
    unsigned long long*p3{nullptr};
    vector<string>*p4{nullptr};
    cout<<sizeof p1<<endl;
    cout<<sizeof p2<<endl;
    cout<<sizeof p3<<endl;
    cout<<sizeof p4<<endl;
    
    int score(10);
    double high_temp(100.5);
    int*score_ptr{nullptr};
    double*f{nullptr};
    score_ptr=&score;
    cout<<score<<endl;
    cout<<&score<<endl;
    cout<<score_ptr<<endl;
    f=&high_temp;
    cout<<&high_temp<<endl;
    cout<<f<<endl;
    
    return 0;
}

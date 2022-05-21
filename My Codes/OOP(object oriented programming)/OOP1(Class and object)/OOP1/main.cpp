#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
class YoutubeChannel{
public:
    string youtubeName;
    string ownerName;
    int subcount;
    list<string> videolist;
};

int main()
{
    YoutubeChannel ytchannel;
    ytchannel.youtubeName="BasarYT";
    ytchannel.ownerName="Habibul Basar";
    ytchannel.subcount=97;
    ytchannel.videolist={"Sniper Montage","BoxFight Montage"};
    cout<<"Channel Name: "<<ytchannel.youtubeName<<endl;
    cout<<"Channel Name: "<<ytchannel.ownerName<<endl;
    cout<<"Channel Name: "<<ytchannel.subcount<<endl;
    cout<<"Channel videos: "<<endl;
    for(string videolist: ytchannel.videolist){
    cout<<videolist<<endl;

    }

    return 0;
}

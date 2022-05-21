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
    YoutubeChannel (string Name,string OName,int sub){
        youtubeName=Name;
        ownerName=OName;
        subcount=sub;
    };
    void outputs(){
        cout<<"Channel Name: "<<youtubeName<<endl;
        cout<<"Channel owner Name: "<<ownerName<<endl;
        cout<<"Channel subcount: "<<subcount<<endl;
        cout<<"Channel videos: "<<endl;
        for(string videolist: videolist){
            cout<<videolist<<endl;
            
        }
    }
};

int main()
{
    YoutubeChannel ytchannel("BasarYT","habibul basar",4000);
    YoutubeChannel ytchannel2("MJ","adib",2000);

    ytchannel.videolist.push_back("sniper montage");
    ytchannel.videolist.push_back("box fight montage");
    ytchannel.videolist.push_back("EZ macro");
    ytchannel2.videolist.push_back("sorty montage");
    ytchannel2.videolist.push_back("sniper montage");
    ytchannel2.videolist.push_back("bucky montage");

    
    ytchannel.outputs();
    ytchannel2.outputs();
//    YoutubeChannel ytchannel;
//    ytchannel.youtubeName="BasarYT";
//    ytchannel.ownerName="Habibul Basar";
//    ytchannel.subcount=97;
//    ytchannel.videolist={"Sniper Montage","BoxFight Montage"};
//    cout<<"Channel Name: "<<ytchannel.youtubeName<<endl;
//    cout<<"Channel Name: "<<ytchannel.ownerName<<endl;
//    cout<<"Channel Name: "<<ytchannel.subcount<<endl;
//    cout<<"Channel videos: "<<endl;
//    for(string videolist: ytchannel.videolist){
//    cout<<videolist<<endl;
//
//    }

    return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
class YoutubeChannel{
private:
    string youtubeName;
    string ownerName;
    int subcount;
    list<string> videolist;
public:
    YoutubeChannel (string Name,string OName){
        youtubeName=Name;
        ownerName=OName;
        subcount=0;
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
    void sub(){
        subcount++;
    }
    void unsub(){
        if(subcount>0)
            subcount--;
    }
    void publish(string tital){
        videolist.push_back(tital);
    }
};

int main()
{
    YoutubeChannel ytchannel("BasarYT","habibul basar");
    YoutubeChannel ytchannel2("MJ","adib");

    ytchannel.publish("sniper montage");
    ytchannel.publish("box fight montage");
    ytchannel.publish("EZ macro");
    ytchannel.sub();
    ytchannel.sub();
    ytchannel2.publish("sorty montage");
    ytchannel2.publish("sniper montage");
    ytchannel2.publish("bucky montage");
    ytchannel2.sub();
    ytchannel2.sub();
    ytchannel2.sub();
    ytchannel2.unsub();

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

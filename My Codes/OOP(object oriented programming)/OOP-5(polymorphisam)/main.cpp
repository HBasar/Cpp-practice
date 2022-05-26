#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;
class YoutubeChannel{
protected:
    string youtubeName;
    int contentquality;
private:
    int subcount;
    list<string> videolist;
public:
    string ownerName;

    YoutubeChannel (string Name,string OName){
        youtubeName=Name;
        ownerName=OName;
        subcount=0;
        contentquality=0;
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
    void checkquality(){
        if(contentquality<5)
            cout<<"This channel has bad contents"<<endl;
        else
            cout<<"This channel has great contents"<<endl;
    }
};
class cookingchannel:public YoutubeChannel{
public:
    cookingchannel(string Name,string OName):YoutubeChannel(Name,OName){
        
    }
    void practice(){
        cout<<ownerName<<": Is cooking"<<endl;
        contentquality++;
    }
};
class singingchannel:public YoutubeChannel{
public:
    singingchannel(string Name,string OName):YoutubeChannel(Name,OName){
        
    }
    void practice(){
        cout<<ownerName<<": Is singing"<<endl;
        contentquality++;
    }
};

int main()
{
//    YoutubeChannel ytchannel("BasarYT","habibul basar");
//    YoutubeChannel ytchannel2("MJ","adib");
//
//    ytchannel.publish("sniper montage");
//    ytchannel.publish("box fight montage");
//    ytchannel.publish("EZ macro");
//    ytchannel.sub();
//    ytchannel.sub();
//    ytchannel2.publish("sorty montage");
//    ytchannel2.publish("sniper montage");
//    ytchannel2.publish("bucky montage");
//    ytchannel2.sub();
//    ytchannel2.sub();
//    ytchannel2.sub();
//    ytchannel2.unsub();
//
//    ytchannel.outputs();
//    ytchannel2.outputs();
    cookingchannel Cytchannel("moms kitchen","farjana");
    Cytchannel.outputs();
    Cytchannel.sub();
    Cytchannel.publish("apple pie");
    Cytchannel.publish("Egg pie");
    Cytchannel.practice();
    singingchannel Sytchannel("Rakibs studio","Rakib");
    Sytchannel.outputs();
    Sytchannel.practice();
    Sytchannel.practice();
    Sytchannel.practice();
    Sytchannel.practice();
    Sytchannel.practice();
//Use of pointers
    YoutubeChannel* yt1 = &Cytchannel;
    YoutubeChannel* yt2 = &Sytchannel;
    yt1->checkquality();
    yt2->checkquality();

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


/*
    Developed By:SAURABH VAJRAMATTI
    USN:1SI15CS099
    Branch:COMPUTER SCIENCE AND ENGINEERING
    Semester:4
    Section:C

    Lab Program 2:
    Write a C++ program that stores the time duration in hh:mm:ss format in a class
    called Duration having the members hh, mm and ss.
    Include the following constructors
    zero parameter constructor that sets all data members to zero
    three parameter constructor that sets values of hh, mm and ss respectively if the
    values are valid
    Implement the following methods
    getDuration method that reads and validates a time duration
    showDuration method that displays the time duration
    addDuration method that adds two durations
    Illustrate the addition of two time durations
*/
#include<iostream>

using namespace std;

class Duration
{
    int hh,mm,ss;

    public:
        Duration():hh(0),mm(0),ss(0)
        {
            cout<<"\nZero parameter constructor called.";
        }
        Duration(int ,int ,int );
        void getDuration();
        void showDuration();
        Duration addDuration(const Duration&);
};


Duration::Duration(int h,int m,int s)
{
    cout<<"\nThree parameter constructor called.\n";
    if(m>=0&&m<=59&&s>=0&&s<=59)
    {
        hh=h;
        mm=m;
        ss=s;
    }
    else
    {
        cout<<"INVALID VALUES!!\n";
        cout<<"Enter time duration:\n";
        cout<<"\tEnter hours:";
        cin>>hh;
        cout<<"\tEnter minutes:";
        cin>>mm;
        cout<<"\tEnter seconds:";
        cin>>ss;
        while(mm<0||mm>59||ss<0||ss>59)
        {
            cout<<"\nINVALID ENTRY!!\n";
            cout<<"Enter time duration again:\n";
            cout<<"\tEnter hours:";
            cin>>hh;
            cout<<"\tEnter minutes:";
            cin>>mm;
            cout<<"\tEnter seconds:";
            cin>>ss;
        }
    }
}
void Duration::getDuration()
{
    cout<<"Enter time duration:\n";
    cout<<"\tEnter hours:";
    cin>>hh;
    cout<<"\tEnter minutes:";
    cin>>mm;
    cout<<"\tEnter seconds:";
    cin>>ss;
    while(mm<0||mm>59||ss<0||ss>59)
    {
        cout<<"\nINVALID ENTRY!!\n";
        cout<<"Enter time duration again:\n";
        cout<<"\tEnter hours:";
        cin>>hh;
        cout<<"\tEnter minutes:";
        cin>>mm;
        cout<<"\tEnter seconds:";
        cin>>ss;
    }
}

void Duration::showDuration()
{
    cout<<"Time Duration->"<<hh<<":"<<mm<<":"<<ss<<endl;
}
Duration Duration::addDuration(const Duration& a)
{
    Duration res;
    res.ss=ss+a.ss;
    res.mm=mm+a.mm;
    res.hh=hh+a.hh;

    res.mm+=res.ss/60;
    res.ss%=60;
    res.hh+=res.mm/60;
    res.mm%=60;

    return res;
}
int main()
{
    Duration d1(15,88,45); //giving invalid parameters deliberately
                           //to check validity checker
    Duration d2;
    d2.getDuration();
    cout<<"\nDURATION 1:\n";
    d1.showDuration();
    cout<<"\nDURATION 2:\n";
    d2.showDuration();
    Duration res;
    res=d1.addDuration(d2);
    cout<<"\nADDITION OF THE DURATIONS:\n";
    res.showDuration();
    return 0;
}

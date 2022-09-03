#include<iostream>
using namespace std;
#include<conio.h>

class Time
{
private:
    int hr;
    int min;
    int sec;
public:
    void setTime(int h,int m,int s)
    {
        hr=h;
        min=m;
        sec=s;
    }
    void displayTime()
    {
        cout<<hr<<":"<<min<<":"<<sec;
    }
};

int main()
{
    Time t1;
    int h,m,s;
    cout<<"Enter the hours, minutes and  seconds";
    cin>>h>>m>>s;
    t1.setTime(h,m,s);
    cout<<"The time is ";
    t1.displayTime();
    getch();
    return 0;
}

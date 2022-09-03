#include<iostream>
#include<conio.h>
using namespace std;

class Rectangle
{
public:
    int area(int l,int b)
    {
        return l*b;
    }
};

int main()
{
    int l,b;
    Rectangle r1;
    cout<<"Enter length and breadth of rectangle";
    cin>>l>>b;
    cout<<"The area of rectangle is "<<r1.area(l,b);
    getch();
    return 0;
}

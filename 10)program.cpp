#include<iostream>
#include<conio.h>
using namespace std;

class Area
{
public:
    float areaOfCircle(int r)
    {
        return 3.14*r*r;
    }
    int areaOfRectangle(int l,int b)
    {
        return l*b;
    }
    float areaOfTriangle(int b,int h)
    {
        return (b*h)/2;
    }

    int areaOfCubiod(int l,int h,int b)
    {
        return l*b*h;
    }
};

int main()
{
    int l,b,h,r;
    Area a1;
    cout<<"Enter the radius of circle";
    cin>>r;
    cout<<"The area of circle is "<<a1.areaOfCircle(r)<<endl<<endl;
    cout<<"Enter the length and breadth";
    cin>>l>>b;
    cout<<"The area of rectangle is "<<a1.areaOfRectangle(l,b)<<endl<<endl;
    cout<<"Enter the base and height ";
    cin>>b>>h;
    cout<<"The area of triangle is "<<a1.areaOfTriangle(b,h)<<endl<<endl;
    cout<<"Enter the base, height and breadth of cuboid";
    cin>>l>>b>>h;
    cout<<"The area of cuboid is "<<a1.areaOfCubiod(l,h,b);
    getch();
    return 0;
}

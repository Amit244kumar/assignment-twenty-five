#include<iostream>
#include<conio.h>
using namespace std;

class Circle
{
public:
    float area(int r)
    {
        return 3.14*r*r;
    }
};

int main()
{
    int r;
    Circle c1;
    cout<<"Enter the radius of circle";
    cin>>r;
    cout<<"The area of circle is "<<c1.area(r);
    getch();
    return 0;
}

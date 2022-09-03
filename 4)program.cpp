#include<iostream>
#include<conio.h>
using namespace std;

class LargestNumber
{
    public:
    int largeNumber(int n1,int n2,int n3)
    {
        return n1>n2?n1>n3?n1:n3:n3>n2?n3:n2;
    }
};

int main()
{
    int n1,n2,n3;
    LargestNumber l1;
    cout<<"Enter three numbers";
    cin>>n1>>n2>>n3;
    cout<<"The larger number is "<<l1.largeNumber(n1,n2,n3);
    getch();
    return 0;
}

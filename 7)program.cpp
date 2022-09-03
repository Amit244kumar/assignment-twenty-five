#include<iostream>
#include<conio.h>
using namespace std;

class Greatest
{
public:
    int Greater(int n1,int n2,int n3)
    {
        return n1>n2?n1>n3?n1:n3:n2>n3?n2:n3;
    }
};

int main()
{
    int n1,n2,n3;
    Greatest g1;
    cout<<"Enter three numbers";
    cin>>n1>>n2>>n3;
    cout<<"The greater number is "<<g1.Greater(n1,n2,n3);
    getch();
    return 0;
}

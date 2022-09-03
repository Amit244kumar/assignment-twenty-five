#include<iostream>
#include<conio.h>
using namespace std;
class ReverseNumber
{

public:
    int reverseNumber(int n)
    {
        int i=0;
        while(n>9)
        {
            i=10*(i+(n%10));
            n/=10;
        }
        i+=n;
        return i;
    }
};

int main()
{
    int n;
    ReverseNumber r1;
    cout<<"Enter the number";
    cin>>n;
    cout<<"The reverse number is "<<r1.reverseNumber(n);
    getch();
    return 0;
}

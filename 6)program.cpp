#include<iostream>
#include<conio.h>
using namespace std;

class Square
{
   public:
       int square(int n){return n*n;}
};
int main()
{
    Square s1;
    int n;
    cout<<"Enter the number";
    cin>>n;
    cout<<"The square of number is "<<s1.square(n)<<endl;
    getch();
    return 0;
}

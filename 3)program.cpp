#include<iostream>
using namespace std;
#include<conio.h>

class Factorial
{
    private:
    int i=1;
    public:
    int fact(int n)
    {
        while(n!=0)
        {
            i*=n;
            n--;
        }
        return i;
    }
};

int main()
{
    int n;
    Factorial f1;
    cout<<"Enter the number";
    cin>>n;
    cout<<"The factorial of number is "<<f1.fact(n);
    getch();
    return 0;
}

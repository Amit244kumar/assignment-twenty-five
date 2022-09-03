#include<iostream>
using namespace std;
#include<conio.h>

class Complex
{
private:
    int real;
    int imaginary;
public:
    void set(int r,int i)
    {
        real=r;
        imaginary=i;
    }
    void print()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
};

int main()
{
    int i,r;
    Complex c1,c2;
    c1.set(3,4);
    cout<<"The complex number is ";
    c1.print();
    cout<<"Enter the real and imaginary number:";
    cin>>r>>i;
    c2.set(r,i);
    cout<<"The second complex number is ";
    c2.print();
    getch();
    return 0;
}

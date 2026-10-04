#include <iostream>
using namespace std;
int main()
{
    cout<<"To solve a right angled triangle questions \n";
    int x,y,z,s,p;
    cout<<"Enter the value of x (base)\n";
    cin>>x;
    cout<<"Enter the value of y (height)\n";
    cin>>y;
    cout<<"Enter the value of z ( hypotenuse )\n";
    cin>>z;
    s=(x*y)/2;
    p=x+y+z;
    cout<<"(Area) s="<<s<<"\n";
    cout<<"(perimeter) p="<<p<<"\n";
    return 0;
}

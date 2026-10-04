#include <iostream>
#include<cmath>
using namespace std;
int main()
{ int x;

    cout<<"Enter a number to solve the function \n";
cin>>x;
 if(x<0) 
 cout<<abs(x)+3;
 else if (x>=0 && x<3 )
 cout<<sqrt(x+2);
 else 
 cout<<exp(x)+5;
    return 0;
}

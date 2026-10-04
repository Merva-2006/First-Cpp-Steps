#include <iostream>
using namespace std;
int main()
{
    int myAge , friendAge , total,ageGap;
    string myName ,friendName;
    cout<< "Welcome! \n";
    cout<<" Write your age and your name \n";
    cin>>myAge>>myName;
    cout<<" Write your best friend's age and his / her name \n";
    cin>>friendAge>>friendName;
    total=myAge+friendAge;
   ageGap =  myAge% friendAge;
    cout<<" ______Results______";
    cout<<"Total ages: "<<total<<"\n";
    cout<<"Difference:"<<ageGap<<"\n";
    return 0;
}

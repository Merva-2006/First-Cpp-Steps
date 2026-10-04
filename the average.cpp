#include <iostream>
using namespace std;
int main()
{
    int i,n,s;
    float avg;
    s=0;
 cin>>n;
 int a[n];
    for(i=0 ; i<n;i++)
    {cin>>a[i];
    s+=a[i];
    }
    avg=s/n;
    cout<<"s= "<<s <<"avg= "<<avg;
    
      
    return 0;
}

// AND OR and XOR operator in C++.

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=a&b;
    cout<<"AND of "<<a<<" and "<<b<<" is "<<c<<endl;
    int d=a|b;
    cout<<"OR of "<<a<<" and "<<b<<" is "<<d<<endl;
    int e=a^b;
    cout<<"XOR of "<<a<<" and "<<b<<" is "<<e<<endl;
    return 0;
}

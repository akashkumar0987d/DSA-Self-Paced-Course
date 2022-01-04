#include <iostream>
using namespace std;
int count(long n){
    if(n==0)
    return 0;
    return 1+count(n/10);
}
int main()
{
    long n;
    cin>>n;
    cout<<count(n);
    return 0;
}

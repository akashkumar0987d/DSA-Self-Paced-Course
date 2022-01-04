#include<bits/stdc++.h>
using namespace std;
int count(long n){
    return floor(log10(n)+1);
}
int main()
{
    long n;
    cin>>n;
    cout<<count(n);
    return 0;
}

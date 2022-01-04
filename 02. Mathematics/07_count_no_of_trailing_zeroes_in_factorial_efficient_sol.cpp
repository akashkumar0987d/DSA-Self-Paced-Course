// Efficient solution to find the no of trailing zeroes in a factorial

#include<bits/stdc++.h>
using namespace std;
int count_zero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5)
    res+=n/i;
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_zero(n);
    return 0;
}

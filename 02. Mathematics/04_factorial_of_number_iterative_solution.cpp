#include<bits/stdc++.h>
using namespace std;
long long int fact(int n){
    long long int res=1;
    for(int i=2;i<=n;i++)
    res*=i;
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}

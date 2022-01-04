// Naive solution to find the power

#include<bits/stdc++.h>
using namespace std;
int power(int x,int n){
    int res=1;
    for(int i=0;i<n;i++){
        res=res*x;
    }
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
    return 0;
}

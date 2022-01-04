//Naive solution to find the number of trailing zeroes in factorial

#include<bits/stdc++.h>
using namespace std;
int count_zero(int n){
    long long int fact=1;
    for(int i=2;i<=n;i++)
    fact*=i;
    int res=0;
    while(fact%10==0){
        res++;
        fact/=10;
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<count_zero(n);
    return 0;
}

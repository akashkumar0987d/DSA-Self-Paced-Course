// Efficient solution to find the prime factors of a number

#include<bits/stdc++.h>
using namespace std;
void primefactor(int n){
    if(n<=1)
    return;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1)
    cout<<n;
}
int main()
{
    int n;
    cin>>n;
    primefactor(n);
    return 0;
}

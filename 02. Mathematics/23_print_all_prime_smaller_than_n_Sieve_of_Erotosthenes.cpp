// Efficient Sieve of Erotosthenes method to print all prime number smaller than or equal to a given number

#include<bits/stdc++.h>
using namespace std;
void Sieve(int n){
    vector<bool>isprime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=2*i;j<=n;j=j+i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    Sieve(n);
    return 0;
}

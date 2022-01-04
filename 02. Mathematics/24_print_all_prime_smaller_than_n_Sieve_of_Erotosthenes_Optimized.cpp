// Optimized Sieve of Erotosthenes to print all prime smaller than n

#include<bits/stdc++.h>
using namespace std;
void Sieve(int n){
    vector<bool>isprime(n+1,true);
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j=j+i){
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



// SAME COMPLEXITY but shorter code is as follows:- 
/*void Sieve(int n){
    vector<bool>isprime(n+1,true);
    for(int i=2;i<=n;i++){
        if(isprime[i]){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i){
                isprime[j]=false;
            }
        }
    }
    
}*/

// Efficient solution to print all the divisor of a given number in unsorted manner

#include<bits/stdc++.h>
using namespace std;
void printdivisor(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
            if(i!=n/i)
            cout<<n/i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    printdivisor(n);
    return 0;
}

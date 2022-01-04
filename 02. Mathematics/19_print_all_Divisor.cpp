// Naive Solution to print all the divisor of a number

#include<bits/stdc++.h>
using namespace std;
void printdivisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
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

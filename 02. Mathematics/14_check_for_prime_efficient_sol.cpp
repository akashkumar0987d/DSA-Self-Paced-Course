// Efficient solution to check if the number is prime or not

#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n==1)
    return false;
    for(int i=2;i*i<n;i++)
    if(n%i==0)
    return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(isprime(n)){
        cout<<n<<" is a prime number.";
    }
    else
    cout<<n<<" is not a prime number.";
    return 0;
}

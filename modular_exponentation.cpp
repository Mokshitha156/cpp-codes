#include<iostream>
using namespace std;
long long modExp(long long base,long long exp,long long mod){
    if(exp==0){
        return 1;
    }
    if(exp==1){
        return base % mod;
    }
    long long half=modExp(base,exp/2,mod);
    long long result=(half * half)%mod;
    if(exp%2==1){
        return (result*base)% mod;
    }
}
int main(){
    long long base,exp,mod;
    cin>>base>>exp>>mod;
    cout<<modExp(base,exp,mod);
}
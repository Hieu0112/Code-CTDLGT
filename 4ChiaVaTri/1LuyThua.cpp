#include<bits/stdc++.h>
using namespace std;
#define test() int t;cin>>t;while(t--)
#define ll long long
int mod=1e9+7;
ll N_mu_k(ll n,ll k){
	if(k==0) return 1;
	else {
		ll x=N_mu_k(n,k/2)%mod;
		if(k%2==0)	return (x*x)%mod;
		else return (n*((x*x)%mod))%mod;
	}
}
main(){
	test(){
		int n,k;
		cin>>n>>k;
		cout<<N_mu_k(n,k)<<endl;
	}
}
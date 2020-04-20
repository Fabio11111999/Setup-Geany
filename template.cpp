#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;

// Begin Template

//I/O
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
void dbg_out(){
	cerr<<endl;
}
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T){
	cerr<<' '<< H; 
	dbg_out(T...);
}
template<typename T> ostream& operator<<(ostream &os, const vector<T> &V){
	os<<'[';
	for(int i=0;i<(int)V.size();i++)
		os<<V[i]<<",]"[i==(int)V.size()-1];
	return os;
}
template<typename T> istream& operator>>(istream &is, vector<T> &V){
	for(T &x:V)
		is>>x;
	return is;
}
template<typename T, typename U> ostream& operator<<(ostream &os, const pair<T,U> &p){
	os<<'{'<<p.first<<','<<p.second<<'}';
	return os;
}
template<typename T, typename U> istream& operator>>(istream &is, pair<T,U> &p){
	is>>p.first>>p.second;
	return is;
}

//Utility 
template<typename T> void minself(T &a, T &b){
	a=min(a,b);
}
template<typename T> void maxself(T &a, T &b){
	a=max(a,b);
}

// Exp/Mod
int fastexp(long long base, long long esp, int mod){
	long long res=1LL;
	base%=mod;
	while(esp){
		if(esp%2)
			res=(res*base)%mod;
		esp/=2;
		base=(base*base)%mod;
	}
	return res;
}
int inv(int n, int mod){
	return fastexp(n,mod-2,mod);
}
vector<long long> __fact;
void fill_fact(int up_to, int mod){
	__fact.resize(up_to+1);
	__fact[0]=1LL;
	for(int i=1;i<=up_to;i++)
		__fact[i]=(__fact[i-1]*i)%mod;
}
int bin(int n, int k, int mod){
	if(n>(int)__fact.size() || k>(int)__fact.size())
		fill_fact(max(n,k),mod);
	long long den=(__fact[k]*__fact[n-k])%mod;
	return (__fact[n]*inv(den,mod))%mod;
}

//Prime Factorization
bool not_prime[MAX_PRIME];
int least[MAX_PRIME];
void crivello(int N){
	for(int i=2;i<=N;i++){
		if(not_prime[i])
			continue;
		for(int times=2;i*times<=N;times++){
			if(!not_prime[i*times]){
				not_prime[i*times]=true;
				least[i*times]=i;
			}
		}
	}
}
vector<int> factors(int X, bool diff){
	vector<int> res;
	if(least[X]!=0){
		res.push_back(least[X]);
		X/=least[X];
	}
	while(least[X]!=0){
		if(!diff  || least[X]!=res.back())
			res.push_back(least[X]);
		X/=least[X];
	}
	res.push_back(X);
	return res;
}

// End Template 




int main(){
	cin.tie(0),cin.sync_with_stdio(0),cout.tie(0),cout.sync_with_stdio(0);

}

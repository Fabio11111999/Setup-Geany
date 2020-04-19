#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;

// Begin Template IO/Utility
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
template<typename T> void minself(T &a, T &b){
	a=min(a,b);
}
template<typename T> void maxself(T &a, T &b){
	a=max(a,b);
}
// End Template IO/Utility
int main(){
	cin.tie(0),cin.sync_with_stdio(0),cout.tie(0),cout.sync_with_stdio(0);
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	long long k,l,ct=-1;
	cin>>k>>l;
	while(l%k==0){
		l=l/k;
		ct++;
	}
	if(k>=0 and l==1){
		cout<<"YES"<<"\n"<<ct;
	}
	else cout<<"NO";

	return 0;
}
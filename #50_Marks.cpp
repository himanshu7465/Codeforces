#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<string>v;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		v.push_back(x);
	}
	vector<bool> successful(n,false);
	for(int i=0;i<m;i++){
		char best='0';
		for(int j=0;j<n;j++){
			best=max(v[j][i],best);
		}
		for(int j=0;j<n;j++){
			if(v[j][i]==best) successful[j]=true;
		}
	}
	cout<<count(successful.begin(),successful.end(),true);

	return 0;
}
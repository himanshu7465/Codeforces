#include<bits/stdc++.h>
using namespace std;

int main(){
	int s,n;
	cin>>s>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(s-v[i].first>0){
			s+=v[i].second;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";

	return 0;
}
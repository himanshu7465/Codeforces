#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	int up=0,down=0;
	for(int i=0;i<n;i++){
		up+=v[i].first; 
		down+=v[i].second;
	}
	if(up&1 || down&1){
		int ct=0;
		for(int i=0;i<n;i++){
			if((v[i].first&1) || (v[i].second&1) ){
				swap(v[i].first,v[i].second);
				up-=v[i].second;
				up+=v[i].first;
				down-=v[i].first;
				down+=v[i].second;
				if(up%2==0 && down%2==0){
					cout<<1;
					return 0;
				}
			}
		}
		cout<<-1;
	}
	else cout<<0;

	return 0;
}
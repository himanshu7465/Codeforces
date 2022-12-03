#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>pos,eql,neg;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		if(x<0) neg.push_back(x);
		else if(x>0) pos.push_back(x);
		else eql.push_back(x);
	}
	if(pos.size()==0){
		for(int i=0;i<2;i++){
			pos.push_back(neg.back());
			neg.pop_back();
		}
	}
	if(neg.size()%2==0){
		eql.push_back(neg.back());
		neg.pop_back();
	}
	cout<<neg.size()<<" ";
	for(auto x : neg){
		cout<<x<<" ";
	}
	cout<<"\n";
	cout<<pos.size()<<" ";
	for(auto x : pos){
		cout<<x<<" ";
	}
	cout<<"\n";
	cout<<eql.size()<<" ";
	for(auto x : eql){
		cout<<x<<" ";
	}

	return 0;
}
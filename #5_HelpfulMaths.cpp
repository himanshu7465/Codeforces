#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.size();
	if(n==1){
		cout<<s;
		return 0;
	}
	int l=0,mid=0,r=n-1;
	while(mid<=r){
		if(s[mid]=='1'){
			swap(s[l],s[mid]);
			l+=2;
			mid+=2;
		} 
		else if(s[mid]=='2'){
			mid+=2;
		}
		else{
			swap(s[mid],s[r]);
			r-=2;
		}
	}
	cout<<s;
	return 0;
}
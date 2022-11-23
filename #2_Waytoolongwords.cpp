#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	while(n--){
		cin>>s;
		int size=s.length();
		if(size>10){
			cout<<s[0]<<size-2<<s[size-1];
		}
		else cout<<s;
		cout<<"\n";
	}
	return 0;
}
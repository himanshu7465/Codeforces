#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.length();
	int flag=1, lastwub=0;
	for(int i=0;i<n-2;i++){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
			i=i+2;
			lastwub=i+1;
			if(!flag) cout<<" ";
			continue;
		}
		else{
			flag=0;
			cout<<s[i];
		}
	}
	while(lastwub<n){
		cout<<s[lastwub++];
	}
}
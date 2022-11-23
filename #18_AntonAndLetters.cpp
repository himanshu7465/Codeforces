#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int n=s.length();
	unordered_map<char,int>mpp;
	set<int>sett;
	for(int i=1;i<n-1;i++){
		if(s[i]=='{' || s[i]=='}' || s[i]==',' || s[i]==' '){
			continue;
		}
		sett.insert(s[i]);
	}
	cout<<sett.size();

	return 0;
}
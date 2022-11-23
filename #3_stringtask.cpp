#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.length();
	for(int i=0;i<n;i++){
		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y'){
			continue;
		}
		else{
			if(s[i]>=65 && s[i]<=90) {
				cout<<"."<<(char)(s[i]+32);
			}
			else if(s[i]>=97 && s[i]<=122){
				cout<<"."<<s[i];
			}
			else continue;
		}
	}
	return 0;
}
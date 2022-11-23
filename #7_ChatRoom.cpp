#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int n=s.size();
	string temp="hello";
	int i=0, j=0;
	while(n--){
		if(s[i]==temp[j]){
			i++;
			j++;
		}
		else i++;
	}
	if(j==5) cout<<"YES";
	else cout<<"NO";
	return 0;
}
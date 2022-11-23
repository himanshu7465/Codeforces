#include<bits/stdc++.h>
using namespace std;

int main(){
	string S1;
	string S2;
	cin>>S1>>S2;
	int n = S1.length(), equal=1,grt=1,smal=1;
	char tempS1, tempS2;
	for(int i=0;i<n;i++){
		if(S1[i]<=90) S1[i]+=32;
		if(S2[i]<=90) S2[i]+=32;
		if(S1[i]==S2[i]){
			continue;
		}
		else if(S1[i]>S2[i]){
			cout<<"1";
			return 0;
		}
		else{
			cout<<"-1";
			return 0;
		}
	}
	cout<<"0";
	return 0;
}
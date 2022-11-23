#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, digit=0;
	cin>>n;
	int luckyNum[11]={4,7,47,74,444,447,474,477,744,747,777};
	for(int i=0;i<11;i++){
		if(n%luckyNum[i]==0){
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, firstCount=0, secCount=0;
	cin>>n;
	string arr[n],firstT,secT;
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		if(i==0) firstT=x;
		if(x==firstT) firstCount++;
		else {
			secT=x;
			secCount++;
		}
	}
	if(firstCount>secCount){
		cout<<firstT;
	}
	else cout<<secT;
		
	return 0;
}
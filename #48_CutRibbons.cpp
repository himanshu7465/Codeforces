#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int>mpp;
int cutRibbons(int n, int a, int b, int c){
	if(n==0) return 0;
	if(n<0) return INT_MIN;
	if(mpp.count(n)) return mpp[n];

	return mpp[n]=1+max(cutRibbons(n-a,a,b,c),max(cutRibbons(n-b,a,b,c),cutRibbons(n-c,a,b,c)));	
}

int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	cout<<cutRibbons(n,a,b,c);


	return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,A=0,B=0,Draw=0;
	cin>>a>>b;
	for(int i=1;i<=6;i++){
		if(abs(a-i)<abs(b-i)) A++;
		else if(abs(a-i)>abs(b-i)) B++;
		else Draw++;
	}

	cout<<A<<" "<<Draw<<" "<<B;

	return 0;
}
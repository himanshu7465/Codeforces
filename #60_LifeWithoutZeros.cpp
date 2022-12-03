#include<bits/stdc++.h>
using namespace std;
int newVal(int a){
int ret=0;
int ten=1;	
	while(a){
		int digit=a%10;
		a/=10;
		if(digit){
			ret+=digit*ten;	
			ten*=10;
		}
	}
	return ret;
}

int main(){
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	a=newVal(a);
	b=newVal(b);
	c=newVal(c);
	if(a+b==c) cout<<"YES";
	else cout<<"NO";
		
	return 0;
}
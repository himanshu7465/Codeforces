#include<bits/stdc++.h>
using namespace std;

int check(int n, int m){
	if(n==1 || m==1) return 1;
	return check(n-1,m-1)+1;
}
int main(){
	int n,m;
	cin>>n>>m;
	int res=check(n,m);
	(res & 1)?cout<<"Akshat":cout<<"Malvika";
	return 0;
}
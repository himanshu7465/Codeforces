#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	
	int drinkML=(k*l)/nl;
	int slices=c*d;
	int salt=p/np;
	
	cout<<min(drinkML,min(slices,salt))/n;

	return 0;
}
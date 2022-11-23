#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	if(m>n){
		cout<<"-1";
		return 0;
	}
	int rem=0, div=0;
	div=n/2;
	rem=n-(div*2);
	while((div+rem) % m != 0){
		div--;
		rem++;
		rem++;
	}
	cout<<div+rem;

	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	if(n>=0){
		cout<<n;
		return 0;
	}
	else{
		long long temp=n;
		int lastDigitRemove=temp/10;
		int secLastDigitRemove=temp/100*10 + n % 10;
		cout<<max(lastDigitRemove,secLastDigitRemove);
	}

	return 0;
}

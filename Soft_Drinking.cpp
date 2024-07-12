#include<bits/stdc++.h>
using namespace std;


int main(){
	

	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	
	int mili_of_drink = (k*l)/nl;
	
	int lime_for_toast = c*d;
	
	int salt_for_toast = p/np;
	
	int ans = min(min(mili_of_drink,lime_for_toast),salt_for_toast)/n;
	cout<<ans<<endl;

}

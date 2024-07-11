#include<bits/stdc++.h>
using namespace std;

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int n;
	cin>>n;
	string str;
	int ans =0;
	
	while(n--){
		cin>>str;
		if(str == "X--" || str=="--X"){
			ans = ans-1;
		}
		else if(str=="X++" || str=="++X"){
			ans = ans+1;
		}
	}
	cout<<ans<<endl;
	
}

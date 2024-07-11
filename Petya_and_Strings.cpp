#include<bits/stdc++.h>
using namespace std;

void capital(char str[100]){
	
	for(int i=0;str[i]!='\0';i++){
		
		if(str[i]>=97){
			str[i]-=32;
		}
	}
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
#endif
	
	char str1[100];
	char str2[100];
	
	cin>>str1;
	cin>>str2;
	
	capital(str1);
	capital(str2);
	
	int i=0;
	
	int ans = strcmp(str1, str2);
	if(ans ==0){
		cout<<"0"<<endl;
	}
	else if(ans<0){
		cout<<"-1"<<endl;
	}
	else{
		cout<<"1"<<endl;
	}
	

}

#include<bits/stdc++.h>
using namespace std;

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
#endif
	
	char str[100];
	cin>>str;
	
	vector<int> ans;
	
	for(int i=0;str[i]!='\0';i++){
		
		if(str[i]!='+'){
			int val = str[i];
			ans.push_back(val);
		}
	}
	
	sort(ans.begin(), ans.end());
	string answer_str;
	
	for(int i=0;i<ans.size();i++){
		
		answer_str+='+';
		answer_str+=(char)ans[i];
	}
	
	for(int i=1;answer_str[i]!='\0';i++){
		cout<<answer_str[i];
	}
	

}

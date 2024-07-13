#include<bits/stdc++.h>
using namespace std;


int main(){
	
	int row,col;
	cin>>row>>col;
	
	int flag=0;
	for(int i=0;i<row;i++){
		if(i%2==0){
			for(int j=0;j<col;j++){
				cout<<"#";
			}
		}else{
			if(flag==0){
			for(int k=0;k<col-1;k++){
				cout<<".";
			}
			cout<<"#";
			flag=1;
			}
			else{
				cout<<"#";
				for(int k=0;k<col-1;k++){
				cout<<".";
			}
			flag=0;
			}
			
		}
		cout<<endl;
		
	}

}

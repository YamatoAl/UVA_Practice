//UVA11351 Last Man Standing

#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	long long int survivor,kill,CASE;
	
	cin>>CASE;
	
	for(int T=1;T<=CASE;T++){
		cin>>survivor>>kill;
		
		long long int count=0;
		for(int i=2;i<=survivor;i++){
			
			count=(count+kill)%i;
			
//			cout<<count<<endl;
		}
		
		cout<<"Case "<<T<<": "<<count+1<<endl;
	}
}
//UVA11351 Last Man Standing

#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<long long int> people;
	long long int survivor,kill,CASE;
	
	cin>>CASE;
	
	for(int T=1;T<=CASE;T++){
		cin>>survivor>>kill;
		
		people.clear();
		for(long long int i=0;i<survivor;i++){
			people.push_back(i+1);
		}
		
		long long int count;
		for(count=(kill-1)%survivor; people.size()>1; count=(count+kill-1)%people.size()){
			
			people.erase(people.begin()+count);
			
		}
		
		cout<<"Case "<<T<<": "<<people[0]<<endl;
	}
}
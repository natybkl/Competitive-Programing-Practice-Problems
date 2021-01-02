#include<iostream>
#include<vector>
#include <string>

using namespace std;

void draw(int n){
	
	
	for(int i=0; i<n; i++){
		
		for(int j=0; j<n; j++){
			
			if(i>=j){cout<<"*";
			}
			else {  cout<<" "; }
			
		}
		
		cout<<endl;
	}	
	
}




int main()
{
	int n;
	cout<<"Insert a value: "<<endl;
	cin>>n;
	
	draw(n);
	
	return 0;
	
}

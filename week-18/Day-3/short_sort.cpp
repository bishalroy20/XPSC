#include<bits/stdc++.h>
using namespace std;

int main(){
	string s,a = "abc";
	int n;
	cin >> n;
	for(int i=0 ;i<n ;i++){
		cin >> s;
		if(s == "abc" || s == "acb" || s== "bac" || s == "cba"){
			cout << "YES" << endl;
		}
		else{
			cout << "No" << endl;
		}
	}

			}
			
		
	

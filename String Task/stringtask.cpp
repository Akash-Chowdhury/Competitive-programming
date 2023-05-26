#include <bits/stdc++.h>
using namespace std;

string stringtask(string str){
	int n=str.length();
	string ans="";
	for(int i=0; i<n; i++){
		if(str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y' || str[i]=='a' || str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'){
			continue;
		}
		else{
			ans+=".";
			ans+=tolower(str[i]);
		}
	}
	return ans;
}

int main() {
	string str;
	cin>>str;
	cout<<stringtask(str);
    
    return 0;
}

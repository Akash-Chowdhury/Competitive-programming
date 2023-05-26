#include <bits/stdc++.h>
using namespace std;

string chatroom(string str, string ans){
	int j=0,temp=0;
	for(int i=0; i<ans.length(); i++){
		if(str[j]==ans[i]){
			j++;
			temp++;
		}
	}
	if(temp==5) return "YES";
	else return "NO";
}

int main(){
	string str="hello", ans;
	cin>>ans;
	cout<<chatroom(str,ans);
	return 0;
}

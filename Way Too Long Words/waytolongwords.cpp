#include <iostream>
#include <string>
using namespace std;

string WayTooLongWords(string str) {
    int n = str.length();
    string ans = "";
    if (n > 10) {
        ans = str[0] + to_string(n - 2) + str[n - 1];
        return ans;
    } else {
        return str;
    }
}

int main() {
    string str;
    int n;
    cin>>n;
    while(n>0){
    cin >> str;
    n--;
	}
	while(n>0){
		cout << WayTooLongWords(str);
		n--;
	}
    return 0;
}

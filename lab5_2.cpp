#include<bits/stdc++.h>
using namespace std;
string mixText(string a,string b){
	string c="";
	int i=0;
	if(a.size()==b.size()){
	for(int i=0;i<a.size();i++){
			c+=a[i];
			c+=b[i];	
	}
	return c;
	}else{
		return "E";
	}
	
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}

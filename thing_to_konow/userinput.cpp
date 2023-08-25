#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char x;
	cout<<"Enter a character :"<<endl;
	cin>>x;
	if(isupper(x)){
		cout<<"0";
	}
	else if(islower(x)){
		cout<<"1";
	}
	else{
		cout<<"-1";
	}
}

#include<bits/stdc++.h>

using namespace std;

void dataTypes(string type) {
	// Write your code here
    if ( type == "Long"){
        cout<<"8";
    }
    else if(type=="Integer"){
        cout<<"4";
    }
    else if(type=="Float"){
        cout<<4;
    }
    else if(type=="Double"){
        cout<<8;
    }
    else{
        cout<<1;
    }

};

int main(){
    string input;
    cout <<"Enter data type : "<<endl;
    cin>>input;
    dataTypes(input);
    return 0;
}

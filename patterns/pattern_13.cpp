#include<bits/stdc++.h>

using namespace std;
 
void pat(int n){
    int i,j,k,l;
    int space=2*(n-1);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(k=1;k<=space;k++){
            cout<<" ";
        }
        for(l=i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
        space-=2;
    }
}
int main(){
    int n;
    cin>>n;
    pat(n);
}
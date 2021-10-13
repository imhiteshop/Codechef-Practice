#include<iostream>
using namespace std;

int main(){
    int l,r;
    cin>>l>>r;
    if(l%2==0)
       l=l+1;
    for(l;l<=r;l+=2){
        cout<<l<<" ";
    }
    return 0;
}
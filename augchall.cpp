#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int h, p;
        cin>>h>>p;
        for(int i=0; i<1000000; i++){
            h-=p;
            p/=2;
            if(h<=0  || p<=0){
                break;
            }
        }
        if(h>0)
        cout<<"0\n";
        else{
            cout<<"1\n";
        }
    }
}
#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    vector<int> num(p,0);
    for(int i=0,x,key;i<n;i++){
        cin>>x;
        int j=0;

        do{
            key=(x+j)%p;
            j++;
        }while(num[key]&&num[key]!=x);
        num[key]=x;

        if(i!=n-1)cout<<key<<" ";
        else cout<<key<<endl;
    }
    return 0;
}


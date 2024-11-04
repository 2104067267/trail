#include<iostream>
#include<algorithm>

using namespace std;
template<class T> T Max(T x, T y){
    return x>y?x:y;
}

int main(){
    double a=1.0,b=1.0;
    int c=1;
    a=Max(a,b);
    return 0;
}

















//#include<iostream>
//#include<vector>
//using namespace std;
//
//
//void insert_sort(vector<int>&arr,int begin ,int step){
//    for(int i=begin+step;i<arr.size();i+=step){
//        int pos=i-step;
//        int v=arr[i];
//        while(arr[pos]>arr[i]&&pos>=begin){
//            pos-=step;
//        }
//        for(int j=i;j>pos&&j>begin;j-=step){
//            arr[j]=arr[j-step];
//        }
//        arr[pos+step]=v;
//    }
//    return ;
//}
//
//
//void shell_sort(vector<int>&arr,int step){
//    if(step==0)return;
//    for(int i=0;i<arr.size()-step;i++){
//        insert_sort(arr,i,step);
//    }
//    shell_sort(arr,step-1);
//    return;
//}
//
//
//int main(){
//    int n;
//    cin>>n;
//    vector<int> arr(n);
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//    }
//    shell_sort(arr,arr.size()/2);
//    for(int num :arr){
//        cout<<num<<" ";
//    }
//    return 0;
//}
//
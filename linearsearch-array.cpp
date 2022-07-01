#include<iostream>
using namespace std;


int linear_search(int a[], int n, int k){

    for (int i=0;i<n;i++){
        if (a[i]==k){
            return i;
        }
    }
    return -1;
}
int main(){

    int a[100];
    int n;
    cin>>n;

    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    int k;
    cin>>k;

    int index = linear_search(a,n,k);

    if(index!=-1){
        cout<<"k is available at"<<" "<<index<<endl;
    }
    else{
        cout<<"k not available";
    }
}
#include<iostream>
using namespace std;
int main(){
    int a[5];
    int i;
    cout<<"Give 5 inputs : ";
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<endl;
    cout<<"The given 5 inputs are: ";
    for(i = 0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
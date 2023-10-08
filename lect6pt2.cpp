#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    i=0;
    j=0;
    k=0;
    cout<<i<<" "<<j<<" "<<k;
    cout<<endl;
    j = i++;
    cout<<i<<" "<<j<<" "<<k;
    cout<<endl;
    k = ++i;
    cout<<i<<" "<<j<<" "<<k;
    cout<<endl;

}
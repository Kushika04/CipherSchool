#include<iostream>
using namespace std;
int compare(int a){
    if(a==5){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){

    int a,b;
    a = 5;
    
    int comp = compare(a);
    cout<<comp;
}
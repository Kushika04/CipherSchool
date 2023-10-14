#include<iostream>
using namespace std;
void swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;

    cout<<"The value of a and b after swapping are: "<<a<<" "<<b<<endl;

    return;
}
int main(){
    int a, b;
    a = 4;
    b = 6;
    swap(a,b);

    cout<<"The value of a and b after swapping outside the function: "<<a<<" "<<b<<endl;

    return 0;
}

#include<iostream>
using namespace std;
void PrintHi(){
    cout<<"Hi"<<endl;
}

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}
int main(){
    PrintHi();

    int a, b;
    a = 4;
    b = 6;

    int d;
    d=sum(a,b);
    cout<<"The sum is equal to :"<<d;


    return 0;
}
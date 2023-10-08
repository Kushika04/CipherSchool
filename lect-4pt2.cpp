#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"enter marks to calculate grades: ";
    cin>>marks;
    if(marks>90){
        cout<<"A";
    }
    else if(marks<90 && marks>80){
        cout<<"B";
    }
     else if(marks<80 && marks>70){
        cout<<"C";
    }
     else if(marks<70){
        cout<<"Pass";
    }
    return 0;
}
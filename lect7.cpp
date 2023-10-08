#include<iostream>
using namespace std;
int main(){
    int password;
    cout<<"enter the password: "<<endl;
    cin>>password;

    while(password<999999){
        cout<<"password does not meet the requirements"<<endl;
        cin>>password;
    }
    cout<<"the user enter a correct password";
    return 0;
}
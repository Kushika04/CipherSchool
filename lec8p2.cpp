#include<iostream>
using namespace std;
int add_sum(int a, int b){
    int c;
    c = a+ b;
    return c;
}
int main(){
    int a,b;
    a = 5;
    b = 3;
    int sum = add_sum(a,b);
    cout<<sum;
    return 0;


}
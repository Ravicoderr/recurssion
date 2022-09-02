#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){               // 3 + fib(3).... 2+fib(2)....

        return 1;
    }
    return n-1+fib(n-2);
}
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout<<"the result is"<<fib(n);
    return 0;

}
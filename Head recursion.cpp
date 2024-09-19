#include<iostream>
using namespace std;
int factorial (int n){
    if (n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter a non-negative integer:";
    cin>>n;
    if(n<0){
        cout<<("Fact.not defined");
    }
    else{
        int result=factorial(n);
        cout<<"Factorial of"<<n<<"is"<< result<<endl;
    }
}

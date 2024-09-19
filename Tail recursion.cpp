#include<iostream>
using namespace std;
int factorial(int n,int result=1){
    if (n==0){
        return result;
    }
    else{
        return factorial(n-1,n*result);
    }
}
int main(){
    int n;
    cout<<"Enter a non-negative int.";
    cin>>n;

    if(n<0){
        cout<<"Factorial not define"<<endl;
    }
    else{
        int result=factorial(n);
        cout<<"Factorial of "<<n<<"is :"<<result;
    }
}

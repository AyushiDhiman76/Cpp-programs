#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of terms:";
    cin>>n;

    int a=0,b=1;
    cout<< "Fibonacci series";
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        int temp=a;
        a=b;
        b=temp+b;
    }
    cout<<endl;
}

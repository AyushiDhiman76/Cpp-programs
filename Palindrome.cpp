#include<iostream>
using namespace std;
int main(){
    int num,reversed=0,temp;
    cout<<"Enter a no.";
    cin>>num;

    temp=num;
    while(temp!=0){
        reversed=reversed*10+temp%10;
        temp/=10;
    }
    if(reversed==num)
    cout<< num<<"Palindrome";
    else
    cout<< num<<"Not Palindrome";
}

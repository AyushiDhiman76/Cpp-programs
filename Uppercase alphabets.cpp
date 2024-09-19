#include<iostream>
using namespace std;
int main(){
    char c;
    cout<<"ASCII Values of uppercase";

    for(c='A';c<='Z';c++){
        cout<< c<< ":"<< int(c)<<endl;
    }
}

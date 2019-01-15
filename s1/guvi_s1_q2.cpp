#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;
    if(a<0){
        cout<<"INVALID";
    }
    else if(a%2 == 0){
        cout<<"EVEN";
    }
    else {
        cout<<"ODD";
    }
    
}
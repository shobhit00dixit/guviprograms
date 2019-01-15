#include <iostream>
using namespace std;
int main() {
    char ch;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'   ){
        cout<<"Vowel";
    }
    else if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)){
        cout<<"Consonant";
    }
    else {
        cout<<"Invalid";
    }
}
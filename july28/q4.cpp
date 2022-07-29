//swapping number
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter two number :\n";
    cin>>a>>b;
    cout<<"Before swapping";
    cout<<"\nThe value of a is "<<a<<" the value of b is "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"\nAfter swapping";
    cout<<"\nThe value of a is "<<a<<"the value of b is"<<b;
}
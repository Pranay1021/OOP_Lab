//table
#include <iostream>
using namespace std;
int main(){
    int a,b,i=1;
    cout<<"enter a number form 1 to 10 ";
    cin>>a;
    cout<<"\nThe table of "<<a<<" is : \n";
    do{
        b=a*i;
        cout<<a<<" * "<<i<<" = "<<b<<"\n";
        i++;
    }
    while(i<=10);
}
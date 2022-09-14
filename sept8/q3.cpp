//inline function
#include <iostream>
using namespace std;
class test{
    int a,b,s,p;
    public:
    inline void get(){
        cout<<"Enter two numbers:\n";
        cin>>a>>b;
    }
    void add();
    void product();
};
inline void test:: product(){
    cout<<"The product is "<<a*b;
};
inline void test:: add(){
    cout<<"\nThe sum is \n"<<a+b;
};
int main(){
    test t;
    t.get();
    t.product();
    t.add();

}
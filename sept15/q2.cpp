 //swapping values between two classes using friend function
#include <iostream>
using namespace std;
class second;
class first{
    int a;
    public:
    void set_val(){
        a=4;
    }
    void display(){
    cout<<"Before swapping a="<<a;}
    friend void swap(first,second);
};
class second{
    int b;
    public:
    void set_val(){
        b=3;
    }
    void display(){
    cout<<" b="<<b<<"\n";
    }
    friend void swap(first,second);
};
void swap(first f1,second s1){
    int temp;
    temp=f1.a;
    f1.a=s1.b;
    s1.b=temp;
    cout<<"After swapping a="<<f1.a<<" b="<<s1.b;
}
int main(){
    first f;
    second s;
    f.set_val();
    s.set_val();
    f.display();
    s.display();
    swap(f,s);
}
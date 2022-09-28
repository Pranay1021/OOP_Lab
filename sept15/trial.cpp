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
    friend void display(first,second);
    friend void swap(first *f1,second *s1);
};
class second{
    int b;
    public:
    void set_val(){
        b=3;
    }
    friend void display(first,second);
    friend void swap(first *f1,second *s1) ;
};
void swap(first *f1,second *s1){
    int temp;
    temp=f1->a;
    f1->a=s1->b;
    s1->b=temp;
}
void display(first f1,second s1){
    cout<<"a="<<f1.a<<" b="<<s1.b;
    }
int main(){
    first f;
    second s;
    f.set_val();
    s.set_val();
    cout<<"Before swapping "; 
    display(f,s);
    cout<<"\n";
    swap(&f,&s);
    cout<<"After swapping ";
    display(f,s);
}

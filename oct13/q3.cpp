//q3.to demonstrate copy constructor
#include <iostream>
using namespace std;
class test2{
    int p;
    int q;
    public:
        test2(){
            cout<<"default constructor executed ";
        }
        test2(int m,int n){
            p=m;
            q=n;
            cout<<"\nparameterized const executed\nValues are: ";
            cout<<p<<" "<<q<<"\n";
        }
        test2(test2 &obj){
            p=obj.p;
            q=obj.q;
            cout<<"the values of new object are "<<p<<" "<<q;
        }
        ~test2(){
            cout<<"\ndestroyed\n";
        }
};
int main(){
    test2 obj;
    test2 obj1(5,6);
    test2 obj3(obj1);
    cout<<"\n";
    return 0;
}
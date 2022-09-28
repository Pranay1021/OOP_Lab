//Static function and member call
#include <iostream>
using namespace std;
class book{
    int code;
    float price;
    static int count;
    public:
    void get_data(int x,float y){
        code=x;
        price=y;
        count++;
    }
    void display(){
        cout<<"The code of book is "<< code;
        cout<<"\nThe price of book is Rs. "<< price<<"\n";
        cout<<"\n";
    }
    static void disp_count(){
        cout<<"The number of books are "<<count<<"\n";
    }
};
int book::count=0;
int main(){
    book bk,bk1,bk2;
    bk.get_data(212,999.99);
    bk1.get_data(232,989.99);
    bk2.get_data(332,330.4);
    bk.display();
    bk1.display();
    bk2.display();
    book::disp_count();
}
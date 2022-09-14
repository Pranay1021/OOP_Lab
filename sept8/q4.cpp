//info about book
#include <iostream>
using namespace std;
class book{
 char title[25];
 int book_no;
 int price;
 static int j; 
 public:
    void read_data();
    void display_data();
    
};
int book::j=1;
 void display_bar(){
        for(int i=0;i<40;i++)
        {
            cout<<"_ ";
        }
        cout<<"\n";
 }
void book::read_data(){
    cout<<"Enter the name of book no :"<<j<<"\n";
    cin>>title;
    cout<<"Enter the serial number of book no :"<<j<<"\n";
    cin>>book_no;
    cout<<"Enter the price of book no :"<<j<<"\n";
    cin>>price;
    j++;
    printf("\n");
}
void book::display_data(){
    
    display_bar();
    cout<<"\n";
    cout<<title<<"\t\t"<<book_no<<"\t\t"<<price;
    
}
int main(){
    book b[3];
    for(int i=0;i<3;i++){
    b[i].read_data();
    }
    printf("\n");
    cout<<"title"<<"\t\t"<<"book_no"<<"\t\t"<<"price\n";
    for(int i=0;i<3;i++){
    cout<<"\n";
    b[i].display_data();
    }
    cout<<"\n";
    display_bar();
    cout<<"\n";
    return 0;
}
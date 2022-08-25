//q3.To read roll,name and 3 mark of a student adn print grade
#include <iostream>
using namespace std;
class student{
    int roll;
    char name[25];
    int m1,m2,m3;
    int sum;
    char grade;
public:
    void read_data();
    void display_data();
    void gradecalc();
};
void student::read_data(){
    cout<<"Enter the roll of the student : ";
    cin>>roll;
    cout<<"Enter the name of the student : ";
    cin>>name;
    cout<<"Enter the 3 marks of the student : ";
    cin>>m1>>m2>>m3;
    
}
void student::gradecalc(){
    sum=m1+m2+m3;
    if(sum>=270){
        grade='O';
    }
        else if(sum>=240){
            grade='E';
        }
        else if(sum>=210){
            grade='A';
        }
}
void student::display_data(){
    sum=m1+m2+m3;

    cout<<"The name of the student is "<< name <<"\nroll no is "<< roll <<"\ntotal marks is "<< sum <<"\n"<<"The grade is : "<< grade;
}
int main(){
    student s;
    s.read_data();
    s.gradecalc();
    s.display_data();

    return 0;
}
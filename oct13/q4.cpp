//q4.to calculate grade of a student using single inheritance
#include <iostream>
using namespace std;
class person{
    int roll;
    char name[25];
    public:
        void read_data(){
            cout<<"Enter roll and name :";
            cin>>roll;
            cin>>name;
        }
        void display(){
            cout<<"The name of student is "<< name<<" roll is "<<roll<<"\n";
        }

};
class student : public person{
    int m[3];
    char grade;
    int t;
    public:
    void sread_data(){
        cout<<"Enter marks of the student in 3 subjects";
        for(int i=0;i<3;i++){
            cin>>m[i];
        }
    }
    void calc_grade(){
        int s=0;
        s=m[0]+m[1]+m[2];
        t=s;
        if(s>270){
            grade='O';
        }
        else if(s>240){
            grade='E';
        }
        else if(s>210){
            grade='A';
        }
        else{
            grade='B';
        }
    }
    void sdisplay(){
        cout<<"Total marks is "<<t;
        cout<<"\nThe grade is "<<grade;
    }
};
int main(){
    student stud;
    stud.read_data();
    stud.sread_data();
    stud.calc_grade();
    stud.display();
    stud.sdisplay();
    cout<<"\n";
    return 0;
}
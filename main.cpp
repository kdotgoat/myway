#include <iostream>

using namespace std;
class Student{

private:
    string name;
    string gender;
    int age;
    string course;
    int regno;

public:
    Student(string n,string g,int a, string c, int r){
    name=n;
    gender=g;
    age=a;
    course=c;
    regno=r;
    }
public:
    void login(){
    cout<<"Student with admission "<< regno << " has logged in."<< endl;
    }
    void submitAssignment(){
    cout<<name<< " has submitted the assignment."<< endl;
    }
    void checkFeesBalance(){
    cout<<"Student with "<<regno<< " doing "<<course<<" aged "<<age<<" is checking feebalance"<< endl;
    }
};
int main()
{
    Student student1("Wise","male",20,"BIT",11078);
    student1.login();
    student1.submitAssignment();
    student1.checkFeesBalance();


    return 0;
}

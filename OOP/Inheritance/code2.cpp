#include <iostream>
#include <string>
using namespace std;

// base class
class Person {
  char name[50];
  int age;

  public: 
    void getData() {
        cout<<"Enter name: ";
        cin.getline(name, 30);
        cout<<"Enter age: ";
        cin>>age;
    }

    void display() {
        cout<<"Name: "<<name<<", Age: "<<age<<endl;
    }
};

// child class
class Student : public Person {
   int st_id;
   float gpa;

   public: 
     void getStudent() {
        getData(); // call the getData() function from the base class
        cout<<"Enter student id: ";
        cin>>st_id;
        cout<<"Enter your GPA: ";
        cin>>gpa;
     }
     void dis_Student() {
        display();// class the display() function from the base class
        cout<<"Student Id: "<<st_id<<", GPA: "<<gpa<<endl;
     }
};


int main() {
    Student st1;
    st1.getStudent();
    st1.dis_Student();
    return 0;
}
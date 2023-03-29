#include <iostream>
using namespace std;

class Employee {
  int emp_id;
  char name[30];
  
  public:
   void getData() {
     cout<<"Enter the employee id\n: ";
     cin>>emp_id;
     cout<<"Enter the employee name\n: ";
     cin>>name;
   }
   void putData() {
     cout<<"Id: "<<emp_id;
     cout<<" Name: "<<name<<endl;
   }
};

int main() {
 // array of objects
 Employee manager[60];
 int n;
 cout<<"Enter how many employee are there?\n: ";
 cin>>n;

// take input 
 for(int i = 0; i < n; i++) {
    manager[i].getData();
 }

// display manager's details
cout<<"\nAll manager's details:- "<<endl;
for(int i = 0; i < n; i++) {
   manager[i].putData();
}

 return 0;
}
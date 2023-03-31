#include <iostream>
using namespace std;

class Employee {
  int emp_id;
  char name[30];
  
  public:
   void getData() {
     cout<<"Employee id\n: ";
     cin>>emp_id;
     cout<<" Name\n: ";
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
 cout<<"Enter no of employes?\n: ";
 cin>>n;

// take input 
 for(int i = 0; i < n; i++) {
    cout<<"Manager "<<i+1<<" Details"<<endl;
    manager[i].getData();
    cout<<endl; // new line
 }
 

// display manager's details
cout<<"\nAll manager's details:- "<<endl;
for(int i = 0; i < n; i++) {
   manager[i].putData();
}

 return 0;
}
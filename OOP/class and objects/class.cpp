#include <iostream>
using namespace std;

class Cars {
  // properties
  int no_weels;   // private properties
  int no_doors;
  public: 
   string name;
   int model;

 public:
   void getData() {
    cout<<"Enter the car name\n: ";
    cin>>name;
    cout<<"Enter model number\n: ";
    cin>>model;
    cout<<"Enter number of weels in " << name <<" \n: ";
    cin>>no_weels;
    cout<<"Enter number of doors in "<< name <<" \n:";
    cin>>no_doors;
   }

   void car_details() {
    cout<<"\nCar details\n:---";
    cout<<"Name : "<<name<<endl;
    cout<<"model: "<<model<<endl;
    cout<<"Number of weels: "<<no_weels<<endl;
    cout<<"Number of doors: "<<no_doors<<endl;
   }
   
}; // end of class

int main() {
    Cars c1; // instantiate an object 
    c1.getData();
    c1.car_details();
    return 0;
}
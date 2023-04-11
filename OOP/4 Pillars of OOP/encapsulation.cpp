#include <iostream>
using namespace std;

class Cars {
    private:
     string car_name;
     int model_no;
     int weels_count;

     public: 
      int getCar_no() {
        return this->model_no;
      }
      string getCar_name() {
        return this->car_name;
      }
};

int main() {
    Cars c1;
    c1.getCar_name();

    cout<<"Good to go!"<<endl;
    return 0;
}

// why use encapsulation?
/*
 - it is use to information/data hiding 
 - if we want, we can make class - "read only"
 - it helps in "Unit Testing"


 how to impliment encapsulation 👆🏽

*/
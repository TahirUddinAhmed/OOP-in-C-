#include <iostream>
using namespace std;
class Cars {
 int no_doors;
 int no_wheels;

 public:
 Cars(int no_doors, int no_wheels) {
//    no_doors = no_doors; 
//    no_wheels = no_wheels; // complier will get confused

      this->no_doors = no_doors;
      this->no_wheels = no_wheels;
 }
  void show() {
    cout<<"Obj address is "<<this<<endl;
    cout<<"no of doors : "<<this->no_doors<<endl;
    cout<<"no of wheels: "<<this->no_wheels<<endl;
  }

};

int main() {
 Cars bwm(6, 4);
 bwm.show();
 cout<<"end of the file"<<endl;
 return 0;
}
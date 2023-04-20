#include <iostream>
using namespace std;

class x {
    int a;
    public: 
     int b;


    void getData() {
        cout<<"Enter the value of a: ";
        cin>>this->a;
        cout<<"Enter the value of b: ";
        cin>>this->b;
    }

    void display() {
        cout<<"A: "<<this->a<<" B: "<<this->b;
    }
};

class y : private x {
    int z;

   public:
    void getz() {
        getData();
        cout<<"Enter the value of z: ";
        cin>>this->z;
    }
    void dis_z() {
        display();
        cout<<" Z : "<<this->z<<endl;
    }
};

int main() {
    y ob;

    ob.getz();
    ob.dis_z();
    return 0;
}


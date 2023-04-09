#include <iostream>
using namespace std;

class Students {
   int id, sub[6];
   char name[20];
   public: 
     void getStudent();
     void result();
};

void Students::getStudent() {
    cout<<"Enter the student ID\n: ";
    cin>>id;
    cout<<"Enter student name\n: ";
    cin>>name;
    cout<<"Enter 6 subject marks\n: ";
    for(int i = 0; i < 6; i++) {
        cin>>sub[i];
    }
}

void Students::result() {
    int total = 0;
    float avg;
    bool failed = false; 

    for(int i = 0; i < 6; i++) {
        total += sub[i]; // total = total + sub[i]

        if(sub[i] < 30) {
            failed = true;
        }
    }
    avg = total / 6.0;
    // print the result
    cout<<"Total marks = "<<total<<endl;
    cout<<"Average = "<<avg<<endl;

    if(failed == true) {
        cout<<"You are fail!"<<endl;
    } else {
        cout<<"You are Pass"<<endl;
    }
}

int main() {
    Students s1;
    s1.getStudent();
    s1.result();

    return 0;
}
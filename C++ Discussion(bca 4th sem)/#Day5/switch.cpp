#include <iostream>
using namespace std;

int main() {
    cout<<"1. add"<<endl;
    cout<<"2. multiply"<<endl;
    cout<<"3. division"<<endl;
    cout<<"4. modulo"<<endl;

    int choice;
    cout<<"Please enter your choice: ";
    cin>>choice;

    switch(choice) {
        case 1: 
           cout<<"You choose addition"<<endl;
           break;
        case 2:
           cout<<"You choose multiplication"<<endl;
           break;
        case 3:
           cout<<"You choose division"<<endl;
           break;
        case 4:
           cout<<"You choose modulas"<<endl;
           break;
        default:
           cout<<"Enter please a valid number"<<endl;
           break;
    }



   return 0;
}
//    1. add
//    2. multiply
//    3. division
//    4. modulo

//    if(num == 1) {
//     // addition
//    } else if(num == 2) {
//     // multiply
//    } else if(num == 3) {
//     // divion
//    } else if(num == 4) {
//     // modulas
//    }

// syntax: 
//     switch(expresion) {
//         case 1:
//            // addition
//            break;
//         case 2: 
//            // multiply
//            break;
//         default:
//            // false msg
//            break;

//     }


// Rules of the switch case statement in C++
// 1. The case value must be either int or char type.
// 2. There can be any number of cases.
// 3. No duplicate case values are allowed.
// 4. Each statement of the case can have a break statement. It is optional.
// 5. The default Statement is also optional.
#include <iostream>
using namespace std;

int main() {
    int N ;
    cout << "Enter Number : ";
    cin >> N;
    
    int num = N;
    int count = 1;
    while(true){
        num = num / 10;
        count += 1;
        if(num < 10){
            cout << "Cifrebis raodenoba: "<< count ;
            break;
        }
    }

    return 0;
    system("pause");
}

// #2

// #include <iostream>
// using namespace std;

// int main() {
//     int N = 10 ;
    
//     double num = N;
//     int count = 1;
//     while(true){
//         double proc = num / 10;
//         num += proc;
//         double jami;
//         jami += num;
//         count += 1;
//         if(num >= 20){
//             cout << "Dgeebis raodenoba aris: "<< count << endl;
//             break;
//         }
//         if(jami >= 100){
//             cout << "yvela dgis garbenma gadaajarba 100km :"<< count << endl;
//         }
        
//     }

//     return 0;
// }
// UPDESH ARORA
// PRN - 24070123124
// ENTC B-3
// EXPERIMENT 02
//STORAGE CLASS

#include<iostream>
using namespace std;

int a = 4;

void func(){
    int a = 0;
    a++;
    cout << "Size of variable: " << sizeof(a) << endl;
    cout << "The variable is :" << a << endl;
    cout << endl;
}

int main(){
    func();
    func();
    func();
    cout << "The variable is :" << a << endl;
    cout << "Address of global variable a: " << &a;
    return 0;
}

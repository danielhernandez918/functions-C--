#include <iostream>

using namespace std;

// can declare void function here and give values before main function, or give values later on. 
// But cant declare void function after main function otherwise program wont work
void sayHi (string name, int age);

int main () 
{
    int num = 53;
    sayHi("Daniel", 29);
    sayHi("Mike", 42);
    sayHi("Steve", num);

    return 0;
}

void sayHi (string name, int age){
    cout << "Hello " << name << " you are " << age << endl;
}
#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
    system("cls");
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    // Output the value of ptr (Pizza)
    cout<<*ptr<<endl;
    return 0;
}
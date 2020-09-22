#include <iostream>
#include <vector>
#include <string>

void calc(int, int);
void calc(double, int);
void calc(int, int, int);

void calc(int a, int b) {
    std::cout << a + b;
}

void calc(double a, int b) {
    std::cout << a + b ;
    }

void calc(int a, int b, int c) {
    std::cout << a + b + c;
}

//function overloading
void printOut(int num);
void printOut(double num);
void printOut(std::string s);
void printOut(char c);

void printOut(int num) {

    std::cout << "integer function : " << num << std::endl;
}

void printOut(std::string s) {
    std::cout << "integer function : " << s << std::endl;
}

void printOut(std::string s) {
    std::cout << "integer function : " << s << std::endl;
}


int main()
{
    printOut("1");
    calc(2, 9, 6);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

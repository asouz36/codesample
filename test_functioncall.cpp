#include <iostream>
 
// Definition of function doPrint()
void doPrint()
{
    std::cout << "In doPrint()" << std::endl;
}

int doubleNumber(int x){
    return 2*x;

}
 
int main()
{
    std::cout << "Starting main()" << std::endl;
    doPrint(); // Interrupt main() by making a function call to doPrint()
    int x;
    std::cout << "Enter a number:" << std::endl;
    std::cin >> x;
    x = doubleNumber(x);
    std::cout << "double value is:" << x << std::endl;
    std::cout << "Ending main()" << std::endl;
    return 0;
}

#include <iostream>

int main() {
    const double PI = 3.14159;
    //const makes it so PI cant be set to something else. it is effectively
    //read only. best practice is to make const variables all uppercase in 
    //name.

    //PI = 420.69;
    //literally cant change, will throw an error stating an attempt to 
    //change a const variable.

    double radius = 10;
    double circumference = 2 * PI * radius ;

    std::cout << circumference ;




    return 0;
}
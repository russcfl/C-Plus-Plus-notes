// brocode 27:44

#include <iostream>


//namespaces prevent naming conflicts. Two or more names can share the same 
// like int =x and int =x

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

//entities can use the same variable name as long as they are in different 
//namespaces

int main() {

    using namespace second;
    // if we use "using", this now assumes any un-scoped variables are
    // being invoked by the namespace in "using"

    int x = 0;

    std::cout << x;
    // even though X is defined in main, we are now using the namespace

    //              :: is known as the scope resolution operator
    std::cout << first::x;

    //          here I invoke the name first colon colon to specify what
    //          in the scope of name space "first" i would like to 
    //          reference.

    //here, if a namespace is not explicitly said, it will use the local
    //value of X, in this case x is declared to be 0 inside the main
    //function.

    return 0;
}

/*

it is generally bad practice to use:

using namespace std;

This saves a little bit of typing, but the problem is that the std library is
so vast that there will likely be a naming conflict at some point. so 
suck it up and type std::

Instead of using the entirety of the std library

*/
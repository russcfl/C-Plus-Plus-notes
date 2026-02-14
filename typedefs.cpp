#include <iostream>
#include <vector> 

typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
//instead of having to type out std::string for every string,
// can just say text_t . the name of the alias plus _t is best 
// practice

int main() {

// typedef = an alias
// type defining. instead of a super long data type, can give it a 
// shortcut name. Helps with code readability

    pairlist_t pairlist;

    text_t name = "bobby" ;
    std::cout << name;


    return 0;
    
}


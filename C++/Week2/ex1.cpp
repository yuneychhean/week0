#include <iostream>
#include "Linklist1.hpp"
using namespace std ;

int main () {
    linklist List;
    List.InsertFront(10);
    List.InsertFront(20);
    List.InsertFront(30);

    List.Display();
    return 0;
}
#include <iostream>
#include "Linklist1.hpp"
using namespace std ;

int main () {
    linklist List;
    List.InsertFront(1);
    List.InsertFront(2);
    List.InsertFront(3);
    List.InsertFront(4);
    List.InsertFront(5);    
    List.swapNodes(2,3);
   
    cout << "Size of list: " << List.size() << endl;
    List.Display();
    return 0;
}
#include <iostream>
#include "ex6.hpp"

using namespace std;

int main(){
    // testing your implementation
    int arrays[] = {3 , 5 , 6 , 2 , 9};
    int size = sizeof(arrays) / sizeof(arrays[0]);

    sorting_array(arrays, size);

    for (int i = 0; i < 5 ; i++)
    {
        cout << arrays[i] << endl;
    }
    return 0;
}


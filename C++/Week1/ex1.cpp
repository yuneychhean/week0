
#include <chrono>
#include <iostream>
#include "opt.hpp"

using namespace std;
using clk =chrono::high_resolution_clock;
volatile int sink_int = 0;


int main(){
    const int MAX_CAP = 10000;
    int arr[MAX_CAP] ;
    int n = MAX_CAP/2 ;
    int pos = n/2 ;
    auto t0 = clk::now();

    Delete( arr, n , pos ); 
    auto t1 = clk::now();
    
    cout << Delete << endl;
    cout << chrono::duration_cast<chrono::microseconds>(t1-t0).count() << "\n";
    return 0;

}
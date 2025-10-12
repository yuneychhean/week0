#include <iostream>
using namespace std;
int main(){
   int size = 5;
   int insert = 10;

   int arr[size] = {5,4,3,2,1};
   cout << "New arrays of number:" << endl;
   for (int  i = 0 ; i < size ; i++)
   {
      if ( arr[i] == arr[2]){
         for (int j = size ; j > i ; j--)
         {
            arr[j] = arr[j-1];
         }
         arr[i] = insert;
         size ++;
   }
       cout << arr[i] << endl;
   }
   return 0;
}
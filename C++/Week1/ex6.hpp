#ifndef SORTING_ARRAY
#define SORTING_ARRAY

void sorting_array(int arr[], int size){
    // your code here for sorting the array
    int swap ;
    for (int i = 0; i < size - 1; i++)
    {
        for (int  j = 0; i < size - i - 1 ; j++)
        {
            if (arr[j] < arr[j+1])
            {
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
            
        }
        
    }
    
    
}

#endif // SORTING_ARRAY
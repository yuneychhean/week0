
 void Insert(int* arr , int n, int pos, int value){
    
    for (int i = n ; i > pos ; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value ;
    n ++;
 } 
 void Delete(int *arr , int size, int pos){
    for (int i = pos ; i < size - 1  ; i++)
    {
        arr[i] = arr[i+1];
    }
    size --;
 }
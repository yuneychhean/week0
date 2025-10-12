#include <stdio.h>
int main(){
    int  age = 25;
    int * Page = &age;


    printf("Age %p", Page);

    return 0;

}
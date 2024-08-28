#include <stdio.h>
#include "a.h"
#include "b.h"

int main(){
    int retVal;
    printf("main fucntion\n");
    retVal = a(1,2);
    printf("retVal : %d\n", retVal);
    b();
}
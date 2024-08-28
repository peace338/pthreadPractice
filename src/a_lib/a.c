#include <stdio.h>
#include "a.h"
#include "add.h"
#include "multiply.h"

int a(int x, int y){
    printf("start function a()\n");
    return add(x, y) + multiply(x, y);
    
}
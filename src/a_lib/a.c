#include <stdio.h>
#include "a.h"
#include "add.h"
#include "multiply.h"

#ifdef __cplusplus
extern "C" {
#endif

int a(int x, int y){
    printf("start function a()\n");
    return add(x, y) + multiply(x, y);
    
}

#ifdef __cplusplus
} 
#endif
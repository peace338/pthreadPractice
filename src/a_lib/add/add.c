#include <stdio.h>
#include "add.h"

#ifdef __cplusplus
extern "C" {
#endif

int add(int x, int y){
    return x + y;
}

#ifdef __cplusplus
} 
#endif
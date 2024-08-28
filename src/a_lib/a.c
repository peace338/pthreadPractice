#include <stdio.h>
#include "a.h"
#include "foo.h"
#include "bar.h"

int a(){
    printf("This is function a()\n");
    foo();
    bar();
}
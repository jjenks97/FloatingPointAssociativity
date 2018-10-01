#include <stdio.h>
#include <stdlib.h>

int main() {
    float a = .000000001;
    float b = .000000004;
    float c = .000000006;


    if(c + (a + b) == (c + a) + b)
    {
        printf("Equal");
    }
    else{
        printf("Not Equal");
    }

    return 0;
}
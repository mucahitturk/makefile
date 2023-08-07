#include "stdio.h"
#include "add.h"

int main(){    
		int num1 = 5,num2 = 8;
    printf("first make\n");
		printf("the sum of %d and %d is %d",num1,num2,add(num1,num2));
    return 0;
}
#include<stdio.h>

int main(void)
{
	
    int age,test=1;
    char blood;
    float height;
    
    age = 42;
    blood = 'o';
    height = 175.5;
    
    printf("내나이는: %d, 혈액형은: %c, 키는: %f입니다.\n",age,blood,height);
    printf("내나이는: %d,%d, 혈액형은: %c, 키는: %.1f입니다.",age,test,blood,height);
    
    return 0;
		
}

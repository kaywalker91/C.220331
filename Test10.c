#include<stdio.h>

int main(void)
{
	
    int age,test=1;
    char blood;
    float height;
    
    age = 42;
    blood = 'o';
    height = 175.5;
    
    printf("�����̴�: %d, ��������: %c, Ű��: %f�Դϴ�.\n",age,blood,height);
    printf("�����̴�: %d,%d, ��������: %c, Ű��: %.1f�Դϴ�.",age,test,blood,height);
    
    return 0;
		
}

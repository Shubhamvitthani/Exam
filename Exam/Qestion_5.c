#include <stdio.h>

void name(int *s, int *v) 
{
    int number = *s; 
    *s = *v;       
    *s = number;     
}
int main()
{
    int num1, num2;

    printf("Enter first Number: ");
    scanf("%d", &num1);
    
    printf("Enter second Number: ");
    scanf("%d", &num2);
    

    printf("\n\nFirst swapping\t : %d %d\n", num1, num2);
    name(&num1, &num2);
    printf("Last swapping\t : %d %d\n", num1, num2);

}
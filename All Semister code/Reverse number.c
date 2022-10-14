//Take a two digit number from user.
//Print the reverse of the number.
#include<stdio.h>
int main()
{
    int number, reverse_number,x,y;
    printf("Enter the original number:");
    scanf("%d", &number);
    x = number /10; // tenth place digit
    y = number %10; // single place digit
    reverse_number = (x*1) + (y*10);
    printf("Reverse of %d is %d", number, reverse_number);
    return 0;
}

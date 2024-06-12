// Program for finding factorial of a given number using recursion and without recursion
#include <stdio.h>
int fact(int);
int recur_fact(int);
void main()
{
    int n, choice;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Press 1 for Factorial without using recursion\nPress 2 for Factorial using recursion\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        fact(n);
        break;
    case 2:
        printf("%d", recur_fact(n));
        break;
    default:
        printf("Invalid choice");
    }
}
int fact(int n)
{
    int f = 1;
    while (n > 0)
    {
        f *= n;
        n--;
    }
    printf("%d", f);
}

int recur_fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * recur_fact(n - 1);
}
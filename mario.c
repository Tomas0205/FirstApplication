#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);
int main(void)

{
    String answer = get_string("cual es tu nombre? \n");
    printf("hola, %s\n, answer");
    {
        int n;
        do
        {
            n = get_int("dime el alto de la piramide: \n");
        }
        while (n < 0 || n > 12);
        {
            for (int i = 0; i < n ; i++)
            {
                {
                    for (int k = n - 2; k >= i; k--)
                    {
                        printf(" ");
                    }
                }
                {
                    for (int j = 0; j <= i; j++)
                    {
                        printf("#");
                    }
                }
                printf("\n")
            }
        }
        return n;
    }
}
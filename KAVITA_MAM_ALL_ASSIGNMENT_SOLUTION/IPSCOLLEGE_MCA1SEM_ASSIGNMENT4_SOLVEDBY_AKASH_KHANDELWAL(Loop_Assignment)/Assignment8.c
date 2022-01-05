/*
8. Write C program to print following series….
 B,F,J, N ,R………..

*/

#include <stdio.h>

void main()
{

    int n;
    printf("Enter An Number:\n");
    scanf("%d", &n);

    char ch = 'B';

    for (int i = 1; i <= n; i++)
    {
        printf("%c ", ch);
        ch += 4;
    }
}

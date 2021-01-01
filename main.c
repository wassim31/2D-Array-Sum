#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    int a, b, row, column;
    int row_sum = 0, column_sum = 0;
    printf("Add the two length of the array\n");
    do
    {
        scanf("%d", &a);
        scanf("%d", &b);
    }while((a*b) > 30);
    // create the array
    int tab[a][b];
    printf("Add the %d values of your 2d array\n", a*b);
    // adding values to array
    for(row = 0 ; row < a ; row++)
    {
        for(column = 0 ; column < b ; column++)
        {
            scanf("%d", &tab[row][column]);
        }
    }
    // print the values of 2d array
    for(row = 0 ; row < a ; row++)
    {
        for(column = 0 ; column < b ; column++)
        {
            printf("%d ", tab[row][column]);
        }
        printf("\n");
    }
    // the column sum
    printf("columns sum : ");
    for(column = 0 ; column < b ; column++)
    {
        for(row = 0 ; row < a ; row++)
        {
            column_sum+=tab[row][column];
        }
        printf("%d ", column_sum);
        column_sum = 0;
    }
    // the row sum
    printf("\nrow sum : ");
    for(row = 0 ; row < a ; row++)
    {
        for(column = 0 ; column < b ; column++)
        {
            row_sum+=tab[row][column];
        }
        printf("%d ", row_sum);
        row_sum = 0;
    }



    return 0;
}

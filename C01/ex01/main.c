#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int main()
{
    int n = 0;
    int *p1 = &n;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;
    int ******p6 = &p5;
    int *******p7 = &p6;
    int ********p8 = &p7;
    printf("%d\n", n);
    ft_ultimate_ft(&p8);
    printf("%d\n", n);
    return 0;
}

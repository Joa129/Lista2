#include <stdio.h>
int main(void)
{
int i, j;
for (i = 1; i <= 9; i = i + 1)
 {
for (j = 1; j <= 10; j = j + 1)
printf("%2d x %2d = %3d\n", i, j, i * j);
 printf("\n");
 }
 return 0;
}

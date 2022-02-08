/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  int n, count = 0, total = 0;
  printf("Input number : ");
  scanf("%d", &n);

  for ( count = 0 ; count <= n ; ++count)
  {
    total = count + total;
  }

  printf("Sum = %d", total);

  return 0;
}


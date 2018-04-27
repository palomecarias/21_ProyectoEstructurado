#include <stdio.h>
int main (void)
{
  int n,res;
  char arre[9];
  arre[8]="X";
  printf("ingrese un numero\n" );
  scanf("%i",&n);

  res=n%10;
  n=n/10;
  switch (res) {
    case 1:
          arre[0]=0;
         break;
    case 3:
         arre[0]=0;
         break;
    case 4:
          arre[0]=0;
          break;
    case 5:
          arre[0]=4;
          break;
    case 6:
          arre[0]=4;
          break;
    case 7:
          arre[0]=4;
          break;
    case 8:
          arre[0]=0;
          break;
    case 9:
          printf("%c\n",arre[8]);
  }
}

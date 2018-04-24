#include <stdio.h>
int main(void)
{
int arreg[10],num,a,i,temp,j;
for(i=0;i<=9;i++)
	{
		printf("Ingresa el numero %d de 10\n",i+1);
		scanf("%d",&num);
		arreg[i]=num;
	}
for(a=0;a<=9;a++)
{
	for(j=a+1;j<=9;j++)
		{
			if (arreg[a]>arreg[j])
				{
					temp=arreg[j];
					arreg[j]=arreg[i];
					arreg[a]=temp;
				}
		}
}
printf("El numero menor es %d\n",arreg[0]);
return 0;
}


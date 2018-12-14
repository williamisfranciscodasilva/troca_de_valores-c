#include <conio.h>
#include <stdio.h>
main()
{
	int a, b, c;
	
	printf("Digite um valor para A: ");
	scanf("%d",&a);
	printf("Digite um valor para B: ");
	scanf("%d",&b);

    printf("O valor digitado para A foi: %d",a);
	printf("\nE o valor digitado para B foi:  %d",b);
	
	c = a;
	a = b;
	b = c;
	
	printf("\nAgora A vale: %d",a);
	printf("\nAgora B vale: %d",b);
	printf("\nFim");
	getch();
}

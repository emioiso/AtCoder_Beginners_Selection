#include <stdio.h>
int	main(void)
{
	int	a,b;

	scanf("%d%d",&a,&b);
	// printf("%d %d\n",a,b);

	if(a * b % 2 == 0){
		printf("Even\n");
	} else {
		printf("Odd\n");
	}
	return (0);
}

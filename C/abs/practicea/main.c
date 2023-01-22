#include <stdio.h>
int	main(void)
{
	int	a,b,c;
	char s[101];

	scanf("%d%d%d%s",&a,&b,&c,s);
	// printf("%d\n%d %d\n%s\n",a,b,c,s);

	printf("%d %s\n",a + b + c,s);

	return (0);
}

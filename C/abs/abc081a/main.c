#include <stdio.h>
int	main(void)
{
	char	n[4];

	scanf("%s",n);
	// printf("%c\n", n[0]);
	// printf("%c\n", n[1]);
	// printf("%c\n", n[2]);

	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		// printf("%c\n", n[i]);
		if(n[i] == '1'){
			count++;
			// printf("count=%d\n", count);
		}
	}
	printf("%d\n", count);

	return (0);
}

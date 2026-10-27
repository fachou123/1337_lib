#include <stdio.h>
#include "libft.h"
#include <string.h>

int main()
{
                printf("%d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
		printf("%d\n", strncmp("abcdefgh", "abcdwxyz", 4));
}

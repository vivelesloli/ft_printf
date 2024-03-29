#include "ft_printf.h"
#include <stdio.h>


int main()
{
	int ret;
	int ret2;
	int count;
	int countf;
	char	*ptr1 = "salut le monde";
	void	*ptr2 = "ok";
	void	*ptr3 = NULL;
	int	*ptr4 = {0};
	int	c;

	countf = 0;
	printf("\033[1;46m");
	printf("\n\n||-----------------------------------WITHOUT CONVERSIONS---------------------------------||\033[0m\n\n\n");
	
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 1\n");	
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("salut le monde");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("salut le monde");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	count = 0;
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 2\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 3\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("2019");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("2019");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\033[1;32m ############YOUR SCORE IS : %d/3  ####################\033[0m\n\n\n\n\n", count);
	
	
	printf("\033[1;46m");
	printf("\n\n||------------------------------------------STRING-----------------------------------------||\033[0m\n\n\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 4\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%s\n", "salut le monde");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%s\n", "salut le monde");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	count = 0;
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 5\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("on test %s **** %s %s ", "la 1ere str", "2eme str", "3eme str");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("on test %s **** %s %s ", "la 1ere str", "2eme str", "3eme str");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 6\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("test des strs vides %s et %s ", "", "");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = printf("test des strs vides %s et %s ", "", "");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	
	printf("\033[1;32m ############YOUR SCORE IS : %d/3  ####################\033[0m\n\n\n\n\n", count);
	
	
	printf("\033[1;46m");
	printf("\n\n||---------------------------------------INTEGER-------------------------------------||\033[0m\n\n\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 7\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%d", 2);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	count = 0;
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%d", 2);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	count = 0;
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

		
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 8\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("Marc a %d ans", 29);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("Marc a %d ans", 29);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
		if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 9\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("la somme de %d + %d = %d", 44, 56, 100);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("la somme de %d + %d = %d", 44, 56, 100);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 10\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("la guerre est finie le %d/%d/%d", 8, 5, 1945);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("la guerre est finie le %d/%d/%d", 8, 5, 1945);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 11\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("le min %d est le max %d", -2147483647, 2147483647);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("le min %d est le max %d", -2147483648, 2147483647);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\033[1;32m ############YOUR SCORE IS : %d/5  ####################\033[0m\n\n\n\n\n", count);

	printf("\033[1;46m");
	printf("\n\n||-----------------------------------UNSIGNED---------------------------------||\033[0m\n\n\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 12\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("Plusieurs nombres %u %u %u %u et %u", 0, -42, 42, -2147483647, 2147483647);
	count = 0;
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("Plusieurs nombres %u %u %u %u et %u", 0, -42, 42, -2147483647, 2147483647);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	count = 0;
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 13\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("pour x et X :%x %x %X %x le dernier %x ", 0, 42, -42, -2147483647, 2147483647);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("pour x et X :%x %x %X %x le dernier %x ", 0, 42, -42, -2147483647, 2147483647);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");
	
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 14\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("les 3 au meme temps : %u %x %X", 27548, 27548, 27548);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("les 3 au meme temps : %u %x %X", 27548, 27548, 27548);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");
	
	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 15\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%x %X %x %x %X", 96845997, 976455, -325342, -23333333, -845454);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%x %X %x %x %X", 96845997, 976455, -325342, -23333333, -845454);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");



	printf("\033[1;32m ############YOUR SCORE IS : %d/4  ####################\033[0m\n\n\n\n\n", count);



	ptr3 = NULL;
	printf("\033[1;46m");
	printf("\n\n||---------------------------------------POINTER-------------------------------------||\033[0m\n\n\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 16\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("Pointeur nul : %p", ptr3);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("Pointeur nul : %p", ptr3);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	count = 0;
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 17\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("on essaie avec le 1er ptr %p et le 2eme %p !", ptr1, ptr2);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("on essaie avec le 1er ptr %p et le 2eme %p !", ptr1, ptr2);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 18\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("le dernier :%p ** ", ptr4);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("le dernier :%p ** ", ptr4);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\033[1;32m ############YOUR SCORE IS : %d/3  ####################\033[0m\n", count);



	printf("\033[1;46m");
	printf("\n\n||---------------------------------------CHARACTER-------------------------------------||\033[0m\n\n\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 19\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	c = 32;
	while (c <= 126)
	{
		ret = printf(" -%c               -%c               -%c               -%c               -%c\n", c, c + 1, c + 2, c + 3, c + 4);
		c = c + 5;
	}
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	c = 32;
	while (c <= 126)
	{
		ret2 = ft_printf(" -%c               -%c               -%c               -%c               -%c\n", c, c + 1, c + 2, c + 3, c + 4);
		c = c + 5;
	}
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	count = 0;
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

		

	printf("\033[1;32m ############YOUR SCORE IS : %d/72  ####################\033[0m\n\n\n\n", ret);


	printf("\033[1;46m");
	printf("\n\n||---------------------------------------FLAGS-------------------------------------||\033[0m\n\n\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 20\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%05.2d", 16);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%05.2d", 16);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	count = 0;
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 21\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%.10s", "abcdefghijklmnopqrstuvwxyz");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%.10s", "abcdefghijklmnopqrstuvwxyz");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 22\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%.6s", "12345");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%.6s", "12345");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 23\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%.1s\n", ptr3);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%.1s\n", ptr3);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 24\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%20.30s", "0123456789abcdefghijklmnopqrstuv");
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%20.30s", "0123456789abcdefghijklmnopqrstuv");
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 25\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%*.*dp%%", -20, 15, -12345);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%*.*dp%%", -20, 15, -12345);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 26\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%05X", -42);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%05X", -42);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 27\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%s%d%p%%%i%u%x%X%c","bonjour", 42, &c, 42, 42, 42, 42, 'c');
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%s%d%p%%%i%u%x%X%c","bonjour", 42, &c, 42, 42, 42, 42, 'c');
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 28\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%40.50d\n", 50);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%40.50d\n", 50);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");



	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 29\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("%%p::[%.5d]\n", 8473); 
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("%%p::[%.5d]\n", 8473); 
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");


	printf("\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^TEST 18\n");
	printf("\033[0;32m           ||*******************************PC*************************************||   \033[0m\n");
	ret = printf("Le dernier %*.*x %*.*X\n", 1, 50, 500, 1, 0, 10);
	printf("\n\033[0;36m Valeur Pc = %d ! \033[0m\n", ret);
	printf("\033[0;32m           ||*******************************ME*************************************||   \033[0m\n");
	ret2 = ft_printf("Le dernier %*.*x %*.*X\n", 1, 50, 500, 1, 0, 10);
	printf("\n\033[0;36m Valeur Me = %d ! \033[0m\n", ret2);
	if (ret == ret2)
	{
		printf("\033[0;42m               OK :) \033[0m\n");
		count++;
		countf++;
	}
	else
		printf("\033[0;41m               KO :( \033[0m\n");

	printf("\033[1;32m ############YOUR SCORE IS : %d/10  ####################\033[0m\n", count);

	if (countf != 30)
		printf("\n\n\033[1;31m                    ############YOUR FINAL SCORE IS : %d/30  (MUST RETRY ...)##################\033[0m\n", countf);
	else
		printf("\n\n\033[1;42m                    ############YOUR FINAL SCORE IS : %d/30  (AMAZING :o) #########################\033[0m\n", countf);

		printf("\033[1;47m");
	printf("\n\n            ||-------------------------------------THE END-------------------------------------||\033[0m\n");
	return (0);
}

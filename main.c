/* ************************************************************************** */
/*	*/
/*	:::	  ::::::::   */
/*   main.c	 :+:	  :+:	:+:   */
/*	+:+ +:+	 +:+	 */
/*   By: fgomez <fgomez@student.42.fr>	  +#+  +:+	   +#+	*/
/*	+#+#+#+#+#+   +#+	   */
/*   Created: 2021/04/01 13:22:15 by fgomez	#+#	#+#	 */
/*   Updated: 2021/04/01 13:24:15 by fgomez	   ###   ########.fr	   */
/*	*/
/* ************************************************************************** */

#include "libasm.h"

void	ft_main_strlen(void)
{
	printf("-------------------ft_strlen-------------------\n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("test12345"));
	printf("strlen : \n");
	printf("%zd\n", strlen("test12345"));
	printf("----------\n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("1"));
	printf("strlen : \n");
	printf("%zd\n", strlen("1"));
	printf("----------\n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("test"));
	printf("strlen : \n");
	printf("%zd\n", strlen("test"));
	printf("----------\n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen(""));
	printf("strlen : \n");
	printf("%zd\n", strlen(""));
	printf("----------\n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("\n"));
	printf("strlen : \n");
	printf("%zd\n", strlen("\n"));
	printf("----------\n");
	printf("ft_strlen : \n");
	printf("%zd\n", ft_strlen("zzzzzzzzzzzzzzzzzzzzzzzz hey"));
	printf("strlen : \n");
	printf("%zd\n", strlen("zzzzzzzzzzzzzzzzzzzzzzzz hey"));
}

void	ft_main_strcpy(void)
{
	char	str1[] = "COUCOU";
	char	str2[] = "HEY";
	char	str3[] = "weshhhh";
	char	str4[] = " ";
	char	str5[] = "lol";
	char	str6[] = "hih";
	char	str7[] = "mdr";

	printf("-------------------ft_strcpy-------------------\n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(str1, str2));
	printf("strcpy : \n");
	printf("%s\n", strcpy(str1, str2));
	printf("----------\n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(str3, str4));
	printf("strcpy : \n");
	printf("%s\n", strcpy(str3, str4));
	printf("----------\n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(str5, str6));
	printf("strcpy : \n");
	printf("%s\n", strcpy(str5, str6));
	printf("----------\n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(str6, str7));
	printf("strcpy : \n");
	printf("%s\n", strcpy(str6, str7));
	printf("----------\n");
	printf("ft_strcpy : \n");
	printf("%s\n", ft_strcpy(str7, str4));
	printf("strcpy : \n");
	printf("%s\n", strcpy(str7, str4));
}

void	ft_main_strcmp(void)
{
	printf("-------------------ft_strcmp-------------------\n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("", "coucouu"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("", "coucouu"));
	printf("----------\n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("lol", "coucouu"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("lol", "coucouu"));
	printf("----------\n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("hohohoho", "coucouu"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("hohohoho", "coucouu"));
	printf("----------\n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("", "bonjour"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("", "bonjour"));
	printf("----------\n");
	printf("ft_strcmp : \n");
	printf("%d\n", ft_strcmp("bonjour", "bonjour"));
	printf("strcmp : \n");
	printf("%d\n", strcmp("bonjour", "bonjour"));
}

int	 main()
{
	ft_main_strlen();
	ft_main_strcpy();
	ft_main_strcmp();
}
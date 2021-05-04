/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgomez <fgomez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 09:54:22 by fgomez            #+#    #+#             */
/*   Updated: 2021/04/07 09:54:52 by fgomez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void		ft_main_strdup(void)
{
	printf("-------------------ft_strdup-------------------\n");
		printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("test12345"));
		printf("strdup : \n");
	printf("%s\n", strdup("test12345"));
	printf("----------\n");
		printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("a"));
		printf("strdup : \n");
	printf("%s\n", strdup("a"));
	printf("----------\n");
		printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("test"));
		printf("strdup : \n");
	printf("%s\n", strdup("test"));
	printf("----------\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup(""));
		printf("strdup : \n");
	printf("%s\n", strdup(""));
	printf("----------\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("\n"));
		printf("strdup : \n");
	printf("%s\n", strdup("\n"));
	printf("----------\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup(""));
		printf("strdup : \n");
	printf("%s\n", strdup(""));
	printf("----------\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("abc"));
		printf("strdup : \n");
	printf("%s\n", strdup("abc"));
	printf("----------\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("asl;fjl;asdjfjkasdl;fjadjsf"));
		printf("strdup : \n");
	printf("%s\n", strdup("asl;fjl;asdjfjkasdl;fjadjsf"));
	printf("----------\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("yope\0la"));
		printf("strdup : \n");
	printf("%s\n", strdup("yope\0la"));
	printf("----------\n");
	printf("ft_strdup : \n");
	printf("%s\n", ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet."));
		printf("strdup : \n");
	printf("%s\n", strdup("Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet."));


}

void		ft_main_read(void)
{
	printf("-------------------ft_read-------------------\n");
	char		buff[100];
	int	 fd;
	ssize_t	 ret;

	printf("ft_read : \n");   
		fd = open("test.txt", O_RDONLY);
		ret = ft_read(fd, buff, 10);
		buff[ret] = '\0';
	printf("buff = %s\nret = %zd\n", buff, ret);
	close(fd);

	printf("read : \n");
	fd = open("test.txt", O_RDONLY);
	ret = read(fd, buff, 10);
	buff[ret] = '\0';
	printf("buff = %s\nret = %zd\n", buff, ret);
		close(fd);

	printf("----------\n");
	char	buf_read[2048];
	int tmp[2];

	printf("ft_read : \n");
		ret = ft_read(-1, buf_read, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	close(fd);
	errno = 0;
	printf("read : \n");
	ret = read(-1, buf_read, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	printf("----------\n");
	printf("ft_read : \n");
		ret = ft_read(tmp[0], NULL, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	close(fd);
	errno = 0;
	printf("read : \n");
	ret = read(tmp[0], NULL, 2);
 	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	printf("----------\n");
	printf("ft_read : \n");
	ret = ft_read(OPEN_MAX + 1, buf_read, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
	close(fd);
	errno = 0;
	printf("read : \n");
	ret = read(OPEN_MAX + 1, buf_read, 2);
	printf("errno : %d\n", errno);
	printf("buf: %s, ret = %zd\n", buf_read, ret);
}

void check_write()
{
	char *hello_world = "Coucou\n";
	char *empty = "";

	printf("\n================================\n");
	printf("========== FT_WRITE ============\n");
	printf("================================\n\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	printf("%-20s: \"Libc:%zu\"\n", "libc", write(1, hello_world, 7));
	printf("\n");
	printf("%-20s: \"Libasm:%zu\"\n", "libasm", ft_write(1, hello_world, 7));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", empty);
	printf("%-20s: \"Libc:%zu\"\n", "libc", write(1, empty, 0));
	printf("\n");
	printf("%-20s: \"Libasm:%zu\"\n", "libasm", ft_write(1, empty, 0));
	printf("\n");
	printf("%-20s: \"%s\"\n", "char *", hello_world);
	printf("%-20s: \"Libc:%zu\"\n", "libc", write(-7, NULL, 7));
	printf("\n");
	printf("%-20s: \"Libasm:%zu\"\n", "libasm", ft_write(-7, NULL, 7));
	printf("\n");
	
}

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
	check_write();
	ft_main_read();
	ft_main_strdup();
	return (0);
}
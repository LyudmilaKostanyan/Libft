/*
#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int i, n, b = 1;
   int *a;

   n = 4;

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
	  a[i] = b;
	  b++;
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
	  printf("%d ",a[i]);
   }
   free( a );
   
   return (0);
}
*/


/*
#include <stdio.h>
int main()
{
	printf ("FT_ITOA TESTS!!!!!!!!!!!!\n");
	printf ("pti ylner '0', exav '%s'\n", ft_itoa(0));
	printf ("pti ylner '356', exav '%s'\n", ft_itoa(356));
	printf ("pti ylner '356', exav '%s'\n", ft_itoa(0356));
	printf ("pti ylner '1050', exav '%s'\n", ft_itoa(1050));
	printf ("pti ylner '-4804756', exav '%s'\n", ft_itoa(-4804756));
	printf ("pti ylner '0', exav '%s'\n", ft_itoa(0));
	printf ("pti ylner '-2147483648', exav '%s'\n", ft_itoa(-2147483648));
	printf ("pti ylner '2147483647', exav '%s'\n", ft_itoa(2147483647));
	printf ("pti ylner '90000005', exav '%s'\n\n", ft_itoa(+90000005));
	return 0;
}
*/


/*
#include <stdio.h>
#include <string.h>
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return (0);
}
*/



#include <stdio.h>
#include <string.h>

int main () {
   char str1[15] = "abcdef";
   char str2[15] = "ABCDEF";
   int ret1, ret2, r1, r2, i = 5;

   ret1 = ft_memcmp(str1, str2, i);
   ret2 = ft_memcmp(str2, str1, i);
   r1 = memcmp(str1, str2, i);
   r2 = memcmp(str2, str1, i);

	  printf("%d\n%d\n%d\n%d\n", ret1, ret2, r1, r2);

   return (0);
}


int	main(void)
{
	int		i;
	char	**s;

	i = -1;
	// printf ("%c\n", 'g' + 1024);
	s = ft_split(" abc			  def cdfg			k ", ' ');
	while (++i < 5)
		printf("%s\n", s[i]);
	return (0);
}
#include <stdio.h>
int main()
{
	char (*f)(unsigned int, char);
	f = &r;
	printf("%s", ft_strmapi("abc", f));
	return (0);
}

#include <stdio.h>
int main()
{
	printf ("\nFT_SUBSTR TESTS!!!!!!!!!!!!\n");
	printf ("pti ylner '789', exav '%s'\n", ft_substr("123456789", 6, 5));
	printf ("pti ylner 'er', exav '%s'\n", ft_substr("garnikner", 7, 5));
	printf ("pti ylner '6789', exav '%s'\n", ft_substr("123456789", 5, 5));
	printf ("pti ylner '', exav '%s'\n", ft_substr("123456789", 2, 0));
	printf ("pti ylner 'abcde', exav '%s'\n", ft_substr("abcdevthafsafaf", 0, 5));
	printf ("pti ylner 'y', exav '%s'\n", ft_substr("qwertynaxuy", 10, 5));
	printf ("pti ylner 'ertynaxuy', exav '%s'\n", ft_substr("qwertynaxuy", 2, 100));
	return (0);
}
#include <stdio.h>
#include <string.h>
int main () {
   const char str[] = ".http://www,tutorialspoint,com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return (0);
}

#include <stdio.h>
int main()
{
	printf("%s", ft_strtrim("		 ", "b a"));
	return (0);
}

#include <stdio.h>
#include <string.h>
int main() {
	char s1[15] = "defasabdf";
	char s2[15] = "";
	//printf("%s\n", strnstr(s1, s2, 15));
	printf("%s", ft_strnstr(s1, s2, 15));
	return 0;
}


#include <stdio.h>
#include <string.h>
int main() {
	char s1[15] = "abde";
	char s2[15] = "abdefasdf";
	//printf("%d\n", strncmp(s1, s2, 15));
	printf("%d", ft_strncmp(s1, s2, 5));
	return 0;
}

#include <string.h>
#include <stdio.h>
int main()
{
	char s[6]="abcde", *s1 = "def";
	printf("%lu\n%s", ft_strlcpy(s, s1, 6), s);
}

#include <stdio.h>
int main()
{
	printf ("\nFT_STRJOIN TESTS!!!!!!!!!!!!\n");
   printf ("pti ylner 'abcdefg', exav '%s'\n", ft_strjoin("abc", "defg"));
   printf ("pti ylner '84512', exav '%s'\n", ft_strjoin("", "84512"));
   printf ("pti ylner '84512', exav '%s'\n", ft_strjoin("84512", ""));
   printf ("pti ylner 'gttrefbf', exav '%s'\n", ft_strjoin("gttre", "fbf"));
   printf ("pti ylner 'a bc d\t', exav '%s'\n", ft_strjoin("a\tb", "c\td\t"));
   printf ("pti ylner '000001', exav '%s'\n", ft_strjoin("00000", "1"));
   printf ("pti ylner '011111', exav '%s'\n", ft_strjoin("0", "11111"));
  printf ("pti ylner '', exav '%s'\n", ft_strjoin("", ""));
	return 0;
}

#include <stdio.h>
int main()
{
	char *s = NULL;
	void (*f)(unsigned int i, char *s);
	f = &asdf;
	ft_striteri(s, f);
	printf("%s", s);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char s[10] = "abcde", *s1;
	s1 = strdup(s);
	if (	s1 == NULL)
		printf("meh");
	printf("%s", s1);
}
*/


#include <stdio.h>
int main () {
   const char str[] = "http://www,tutorialspoint,com.";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return (0);
}


#include <stdio.h>
#include <string.h>
int main()
{
 char *s1, *s2;
 int i = 0, a = 97;
 s1 = malloc(1000);
 s2 = malloc(1000);
 while (i < 5)
 {
  s1[i] = a;
  s2[i] = a;
  a++;
  i++;
 }
 memmove(&s1[2], &s1[1], 3);
 ft_memmove(&s2[2], &s2[1], 3);
 printf("%s\n", s1);
 printf("%s\n", s2);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char s[4] = "abc";
	char s1[4] = "abc";
	memcpy(s, "def", 1);
	ft_memcpy(s1, "def", 1);
	printf("\n%s\n", s);
	printf("%s\n", s1);
	return (0);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	int i = -1;
// 	t_list *head;
// 	head = malloc(sizeof(t_list));
// 	head->content = (void *)1;
// 	head->next = malloc(sizeof(t_list));
// 	head->next->content = (void *)2;
// 	head->next->next = NULL;
// 	ft_lstiter(head, &f);
// 	while(++i < 3)
// 	{
// 		printf("%s\n", head->content);
// 		head = head->next;
// 	}
// }
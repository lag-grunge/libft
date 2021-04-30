#include "libft.h"
#include <stdio.h>

int	main()
{
	t_list	*a;
	t_list	*b;
	t_list	**lst;

	char *s = "dfhdfh";
	char *sa = malloc(sizeof(char) *(ft_strlen(s) + 1));
	ft_strlcpy(sa,  s, ft_strlen(s) + 1);
	a = ft_lstnew(sa);
	lst = &a;
	char *s1 = "rwyery";
	char *sb = malloc(sizeof(char) *(ft_strlen(s1) + 1));
	ft_strlcpy(sb,  s1, ft_strlen(s1) + 1);
	b = ft_lstnew(sb);
	ft_lstadd_front(lst, b);
	char *s2 = "xczbvncvnvn";
	char *sc = malloc(sizeof(char) *(ft_strlen(s2) + 1));
	ft_strlcpy(sc,  s2, ft_strlen(s2) + 1);
	t_list *c = ft_lstnew(sc);
	ft_lstadd_front(lst,c);
	printf("%d\n", ft_lstsize(*lst));
	printf("%s\n", ((*lst)->content));
	printf("%s\n", ((*lst)->next->content));
	printf("%s\n", (ft_lstlast(*lst))->content);
	
	char *s3 = "462357468648";
	char *sd = malloc(sizeof(char) *(ft_strlen(s3) + 1));
	ft_strlcpy(sd,  s3, ft_strlen(s3) + 1);	
	t_list *d = ft_lstnew(sd);
	ft_lstadd_back(lst,d);
	printf("%s\n", (ft_lstlast(*lst))->content);
	

	ft_lstclear(lst, free);
	sb = b->content;
/*	char (*f)(unsigned int, char) = &ft_toupper;		*/
/*	printf("%s\n", ft_strmapi(((*lst)->content), f));   */
 
 
	return (0);
}




#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*head1;

	head = malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head1 = head;
	while (lst)
	{
		head->content = f(lst->content);
		head->next = malloc(sizeof(t_list));
		if (head->next == NULL)
		{
			ft_lstclear(&head1, del);
			return (NULL);
		}
		head = head->next;
		lst = lst->next;
	}
	head = NULL;
	return (head1);
}
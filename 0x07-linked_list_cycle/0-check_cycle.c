#include "lists.h"
/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: head of the singly linked list
 * Return: 1 if there is a cycle, otherwise 0
 */
int check_cycle(listint_t *list)
{
listint_t *slow_checker, *fast_checker;
slow_checker = list;
fast_checker = list;
while (slow_checker != NULL && fast_checker != NULL && fast_checker->next)
{
fast_checker = fast_checker->next->next;
slow_checker = slow_checker->next;
if (slow_checker == fast_checker)
return (1);
}
if (list == NULL)
return (0);
return

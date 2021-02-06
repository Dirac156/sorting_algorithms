#include <stdio.h>

#include "sort.h"

/**
 *insertion_sort_list - algorithm
 * @list: the list to sort.
 */

void insertion_sort_list(listint_t **list)
{
listint_t *next, *current, *prev;
int inserted = 0;
if (!(*list) || list == NULL || (*list)->next == NULL)
return;
current = *list, next = current->next;
while (current->next)
{
inserted = 0;
if (current->n > next->n)
{
inserted = 1;
prev = current->prev;
current->next = next->next;
if (current->next)
current->next->prev = current;
current->prev = next;
next->next = current;
if (prev)
{
next->prev = prev;
prev->next = next;
}
else
{
next->prev = NULL, (*list) = next;
}
print_list(*list);
if (current->prev)
check_inner(current->prev, current->prev->prev, current, list);
}
next = current->next;
if (inserted == 1 && next)
{
current = current, next = current->next;
}
else if (next)
{
current = next, next = current->next;
}
}
}

/**
  *check_inner - cehck inner function.
  *@cu: current node.
  *@p: previous node.
  *@n: next node.
  *@h: head.
  */

void check_inner(listint_t *cu, listint_t *p, listint_t *n, listint_t **h)
{
listint_t *tmp;
int i = 1;

if (!cu || !p || !n || !(*h))
return;

while (i && (cu->n < p->n))
{
tmp = p->prev;
p->next = n;
p->prev = cu;
cu->prev = tmp;
cu->next = p;
n->prev = p;
if (tmp)
tmp->next = cu;
if (cu->prev)
{
n = p;
p = cu->prev;
}
else
{
*h = cu;
i = 0;
}
print_list(*h);
}
}

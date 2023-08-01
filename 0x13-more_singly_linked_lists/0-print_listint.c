#include "lists.h"


/**
*  * print_listint -this prints all the elements of a linked list
*
*   * @h: linked list of type listint_t to print
*
*    *
*
*     * Return: all the number of nodes
*
*/

size_t print_listint(const listint_t *h)

{

size_t val = 0;


while (h)

{

printf("%d\n", h->n);

val++;

h = h->next;

}


return (val);

}

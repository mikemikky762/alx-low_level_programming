#include "lists.h"


/**
*  * free_listint - a linked list is free
*
*   * @begin: listint_t being freed
*
*/

void free_listint(listint_t *begin)

{

listint_t *temp;


while (begin)

{

temp = begin->next;

free(begin)

begin = temp;

}

}

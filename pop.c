#include "monty.h"

/**
 *pop - remove last on  the stack
 *@head: head of the list
 *@lNum: line number
 */

void pop(stack_t **head, unsigned int lNum)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lNum);
		fclose(infos.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = (*head)->next;
	free(temp);
}

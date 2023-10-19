#include "monty.h"

/**
 *pchar - prints the char at the top of the stack
 *@head: head of the list
 *@lNum: line number
 */

void pchar(stack_t **head, unsigned int lNum)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", lNum);
		fclose(infos.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	if (temp->n < 0 || temp->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", lNum);
		fclose(infos.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", temp->n);
}

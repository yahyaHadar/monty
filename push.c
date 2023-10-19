#include "monty.h"

/**
 *is_digit - checks if its a digit
 *@c: the one to be checked
 *Return: the digit
 */

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 *is_valid_number - checks if valid
 *@str: the one to be checked
 *Return: 0 or 1
 */

int is_valid_number(char *str)
{
	if (*str == '-' || *str == '+')
	{
		str++;
	}
	while (*str)
	{
		if (!is_digit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 *push - prints all the elements of a doubly linked list.
 *@head: head of the list
 *@lNum: line number
 */

void push(stack_t **head, unsigned int lNum)
{
	int int_val, n;

	if (infos.arg == NULL || *infos.arg == '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", lNum);
		fclose(infos.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	int_val = atoi(infos.arg);
	n = is_valid_number(infos.arg);
	if ((int_val == 0 && strcmp(infos.arg, "0") != 0)  || n != 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", lNum);
		fclose(infos.file);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (infos.fifo == 0)
		add_node(head, int_val);
	else
		add_node_end(head, int_val);
}

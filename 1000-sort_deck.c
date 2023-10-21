#include "deck.h"

/**
 * _strcmp - compare 2 string
 * @s1: 1st one
 * @s2: 2ns one
 * Return: s1 - s2
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 * list_deck - function to return length of list
 * @list: head of list
 *
 * Return: length
 */
size_t list_deck(deck_node_t *list)
{
	size_t big = 0;

	while (list)
	{
		big++;
		list = list->next;
	}
	return (big);
}

/**
 * card_value - returns the card value
 * @node: card in a deck
 * Return: value between 1 and 52
 */
int card_value(deck_node_t *node)
{
	char *heavy[13] = {"Ace", "2", "3", "4", "5", "6",
		"7", "8", "9", "10", "Jack", "Queen", "King"};
	char *typ[4] = {"SPADE", "HEART", "CLUB", "DIAMOND"};
	int x, typ_heavy = 0;

	for (x = 1; x <= 13; x++)
	{
		if (!_strcmp(node->card->value, heavy[x - 1]))
			typ_heavy = x;
	}
	for (x = 1; x <= 4; x++)
	{
		if (!_strcmp(typ[node->card->kind], typ[x - 1]))
			typ_heavy = typ_heavy + (13 * x);
	}
	return (typ_heavy);

}

/**
 * swap_n - function to swap two nodes in a doubly-linked list
 * @deck:
 * @node1: 1st nodes
 * @node2: 2nd nodes
 * Return: nothing
 */
void swap_n(deck_node_t **deck, deck_node_t *node1, deck_node_t *node2)
{
	deck_node_t *temp;

	if (!deck || !node1 || !node2)
		return;
	if (node1->prev)
		node1->prev->next = node2;
	else
		*deck = node2;
	if (node2->prev)
		node2->prev->next = node1;
	else
		*deck = node1;
	if (node1->next)
		node1->next->prev = node2;
	if (node2->next)
		node2->next->prev = node1;

	temp = node1->prev;
	node1->prev = node2->prev;
	node2->prev = temp;

	temp = node1->next;
	node1->next = node2->next;
	node2->next = temp;
}

/**
 * sort_deck - sorts a deck
 * @deck: doubly linked list to sort
 */
void sort_deck(deck_node_t **deck)
{
	deck_node_t *now, *left = NULL;
	int swapp;

	if (!deck || !*deck)
		return;

	do
	{
		swapp = 0;
		now = *deck;

		while (now->next != left)
		{
			if (card_value(now) > card_value(now->next))
			{
				swap_n(deck, now, now->next);
				swapp = 1;
			}
			else
				now = now->next;
		}
		left = now;
	}
	while (swapp);
}

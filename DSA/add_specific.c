#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;
int count_nodes(void);
node *create_node(int data)
{
    node *temp = (node *)malloc(sizeof(node));

    temp->data = data;
    temp->next = NULL;

    return temp;
}
void add_first(int data)
{
    node *new = create_node(data);

    if (head == NULL)
    {
        head = new;
    }
    else
    {
        new->next = head;
        head = new;
    }
}
void add_last(int data)
{
    node *new = create_node(data);

    if (head == NULL)
    {
        head = new;
    }
    else
    {
        node *trav = head;
        while (trav->next != NULL)
        {
            trav = trav->next;
        }
        trav->next = new;
    }
}
void add_specific(int data, int pos)
{
    node *new = create_node(data);
    if (pos == 1)
    {
        add_first(data);
    }
    else if (pos == count_nodes() + 1)
    {
        add_last(data);
    }
    else
    {
        node *trav = head;
        int i = 1;
        while (i < pos - 1)
        {
            i++;
            trav = trav->next;
        }
        new->next = trav->next;
        trav->next = new;
    }
}

void display_list(void)
{
    if (head != NULL)
    {
        node *trav = head;
        printf("list is: head -> ");
        while (trav != NULL)
        {
            printf("%d -> ", trav->data);
            trav = trav->next;
        }
        printf("null\n");
    }
    else
    {
        printf("list is empty !!!\n");
    }
}

int count_nodes()
{
    node *trav = head;
    int count = 0;
    while (trav != NULL)
    {
        count++;
        trav = trav->next;
    }
    return count;
}
int main()
{
    add_specific(10, 1);
    add_specific(60, 1);
    add_specific(50, 2);
    add_specific(20, 3);
    add_specific(90, 2);
    display_list();

    return 0;
}
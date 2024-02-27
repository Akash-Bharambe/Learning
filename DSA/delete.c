#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;

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

void delete_first(void)
{
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            free(head);
            head = NULL;
        }
        else
        {
            node *temp = head;
            head = head->next;
            free(temp);
            temp = NULL;
        }
    }
}

void delete_last(void)
{
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            free(head);
            head = NULL;
        }
        else
        {
            node *trav = head;
            while (trav->next->next != NULL)
            {
                trav = trav->next;
            }
            free(trav->next);
            trav->next = NULL;
        }
    }
}
int count_nodes(void)
{
    int count = 0;

    node *trav = head;
    while (trav != NULL)
    {
        count++;
        trav = trav->next;
    }
    return count;
}
void delete_specific(int pos)
{
    if (head != NULL)
    {
        if (pos == 1)
        {
            delete_first();
        }
        else if (pos == count_nodes())
        {
            delete_last();
        }
        else
        {
            int i =1;
            node *trav = head;
            while (i < pos - 1)
            {
                trav = trav->next;
                i++;
            }
            node*temp = trav->next;
            trav ->next = trav->next->next;
            free(temp);
            temp = NULL;
        }
    }
}
void display_list(void)
{
    node *trav = head;

    while (trav != NULL)
    {
        printf("%d ", trav->data);
        trav = trav->next;
    }
}
int main()
{
    add_first(100);
    add_first(10);
    add_first(20);
    add_first(30);
    add_first(40);
    add_first(50);
    add_first(30);
    display_list();
    printf("\n");
    delete_specific(7);
    delete_specific(1);
    display_list();
    return 0;
}
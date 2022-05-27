#include <stdio.h>
#include <stdlib.h>

struct node
{
	void * data;
	node * next;
};

//get length of list
int getLength( node * head )
{
	node * temp = head;
	int result = 0;
	
	while( temp != NULL )
	{
		++result;
		temp = temp->next;
	}
	
	return result;
}

//Push the node to list
void push( struct node ** head, void * data_p )
{
	struct node * temp;
	
	temp = malloc( sizeof(struct node) );
	temp->data = data_p;
	temp->next = *head;
	*head = temp;
}

//pop the node from list
void * pop( struct node ** head )
{
	struct node * temp;
	void * result;
    temp = (*head)->next;
    result = (*head)->data;
    free(*head);
    
    *(head) = temp;
    return result;
}

int main()
{
    int a = 10;
    struct node * head = NULL;
    push( &head, &a);
    if ( NULL == head )
    {
        printf( "it did not work\n");
    }
    printf("data %d\n", *((int*)(head->data)));
    printf("data %d\n", *((int*)pop(&head)));
    printf("Hello World");

    return 0;
}

# include <stdio.h>
# include <stdlib.h>
struct node
{
int data;
struct node *link;
};
void insert(struct node **front, struct node **rear , int value)
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
if(temp==NULL)
{
printf(�No Memory available\n�);
exit(0);
}
temp->data = value;
temp->link=NULL;
if(*rear == NULL)
{
*rear = temp;
*front = *rear;
}
else
{
(*rear)->link = temp;
*rear = temp;
}
}

void deleteQ(struct node **front, struct node **rear , int *value)
{
struct node *temp;
if((*front == *rear) && (*rear == NULL))
{
printf(� The queue is empty can not delete Error\n�);
exit(0);
}
*value = (*front)->data;
temp = *front;
*front = (*front)->link;
if(*rear == temp)
*rear = (*rear)->link;
free(temp);
}

void main()
{
struct node *front=NULL,*rear = NULL;
int n,value;
do
{
do
{
printf(�Enter the element to be inserted\n�);
scanf(�%d�,&value);
insert(&front,&rear,value);
printf(�Enter 1 to continue\n�);
scanf(�%d�,&n);
} while(n == 1);
printf(�Enter 1 to delete an element\n�);
scanf(�%d�,&n);
while( n == 1)
{
deleteQ(&front,&rear,&value);
printf(�The value deleted is %d\n�,value);
printf(�Enter 1 to delete an element\n�);
scanf(�%d�,&n);
}
printf(�Enter 1 to continue\n�);
scanf(�%d�,&n);
} while(n == 1);
}

#include<stdio.h>
#include<stdlib.h>
static int l1, l2;
struct node
{
int data;
struct node* next;
};
void insert(struct node** head, int newdata)
{
struct node* newnode = (struct node*)malloc(sizeof(struct node*));
struct node* last = *head;
newnode->data = newdata;
newnode->next = NULL;
if (*head == NULL)
*head = newnode;
else
{
while (last->next != NULL)
{
last = last->next;

}
last->next = newnode;
}
}
void len(struct node* head1, struct node* head2)
{
while (head1 != NULL)
{
l1++;
head1 = head1->next;
}
while (head2 != '/0')
{
l2++;
head2 = head2->next;
}

}
struct node* traverse(struct node* head, int t)
{
while (t--)
{
head = head->next;
}
return head;
}
struct node* merge(struct node* head1, struct node* head2)
{
struct node* temp = head1;
while (temp->next != '/0')
{
temp = temp->next;
}
temp->next = head2->next;
printf("address of pointer at the merging point:%p", temp);
printf("\n merging point:%d\n", head2->data);
return head1;
}
void display(struct node* head)
{
struct node* temp = head;
while (temp != '/0')
{
printf("%d",temp->data);
temp = temp->next;
}

}

int main()
{
	printf("hello");
struct node* head1 ='/0';
struct node* head2 ='/0';
struct node* temp = '/0';
int dif = 0;
insert(&head1, 1);
insert(&head1, 2);
insert(&head1, 3);
insert(&head1, 4);
insert(&head1, 5);
insert(&head2, 5);
insert(&head2, 6);
insert(&head2, 7);
display(head1);
printf("\n");
display(head2);
printf("\n");
len(head1, head2);
dif = abs(l1 - l2);
temp = traverse(head1, dif);
merge(temp, head2);
printf("merged lists");
display(head1);
printf("\n");
getchar();
return 0;
}

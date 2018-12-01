/*
THWALIB NAZIR
S3 D 52
Circular queue using linked list 
*/
#include<stdio.h>
#include<stdlib.h>
struct queue{
int info;
struct queue *link;
};
  struct queue *front=NULL,*rear=NULL;
int count=0;
void push(int n)
{
 struct queue *newnode;
newnode=(struct queue*)malloc(sizeof(struct queue));
newnode->info=n;
newnode->link=NULL;
if(count==0)
front=newnode;
else
        rear->link=newnode;
    rear=newnode;
    rear->link=front;
count++;
}
int pop(void)
{
int n;
 struct queue *temp;
if(count==0)
return (-1);
count--;
    if(front==rear)
    {
        n=front->info;
        free(front);
        front=NULL;
        rear=NULL;
    }else
    {
            temp= front ;
            n = temp-> info ;
            front = front -> link ;
            rear -> link = front ;
            free ( temp ) ;
    }
return n;
}
void display(void)
{
 struct queue *temp;
int i;
if(count==0)
printf("Empty");
else
{
temp=front;
for(i=0;i<count;i++)
{
printf("%d ",temp->info);
temp=temp->link;
}
}
printf("\n");
}
int size(void)
{
return count;
}
int main()
{
int n,ch=10;
while(ch!=0)
{
printf("\n       enter choice\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.SizeOfQueue\n");
printf("4.Display\n");
printf("0.EXIT\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
printf("element to be pushed in queue\n");
scanf("%d",&n);
push(n);
break;
}
case 2:
{
n=pop();
if(n==-1)
printf("Queue is empty\n");
else
printf("element poped from queue is %d\n",n);
break;
}
case 3:
{
n=size();
printf("Size of queue is %d\n",n);
break;
}
case 4:
{
printf("Queue is -->> ");
display();
}
case 0:
break;
default:
printf("Wrong Choice\n");
break;
}
}
}

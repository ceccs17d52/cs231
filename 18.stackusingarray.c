#include<stdio.h>
#include<stdlib.h>

void main()
{
    int arr[15],top=0,cho,i;

    do
    {
        
        printf("\nMENU\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter Choice: ");
        scanf("%d",&cho);

        if(cho==1)
        {
            top=top+1;
            printf("enter the element: ");
            scanf("%d",&arr[top]);
            printf("element pushed!!!");
        }
        else if(cho==2)
        {
            if(top==0)
            {
                printf("stack is empty!!!");
            }
            else
            {
                printf("popped out: %d",arr[top]);
                arr[top]=0;
                top-=1;
            }
        }
        else if(cho==3)
        {
            printf("elements: ");
            for(i=top;i>0;i--)
            {
                printf("%d |->",arr[i]);
            }
            printf("NULL");

        }
        
    }while(cho==1 || cho==2 || cho==3);
    
}

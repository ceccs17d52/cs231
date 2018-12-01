#include<stdio.h>
#include<conio.h>

int arr[20];

void spliter(int size)
{
	int i,j,l1,l2,f1,f2,curr,k,ar[20];
	for(i=1;i<size;i=i*2)
	{
	   for(j=0;j<size;j=j+(i*2))
	   {
	      l1=j+i-1;
	      l2=j+(2*i)-1;
	      f1=j;
	      f2=j+i;
	      curr=f1;


	      //if(f2>=size)
		// f2=size;
	      for(k=0;k<size;k++)
			ar[k]=arr[k];

	      while(f1<=l1 && f2<=l2)
	      {

		 if(ar[f1]<ar[f2])
		 {
		    arr[curr]=ar[f1];
		    f1+=1;
		    curr+=1;
		 }
		 else
		 {
		    arr[curr]=ar[f2];
		    f2=f2+1;
		    curr+=1;
		 }
	      }

	      while(f1<=l1)
	      {
		 arr[curr]=ar[f1];
		 curr+=1;
		 f1+=1;
	      }

	      while(f2<=l2)
	      {
		 arr[curr]=ar[f2];
		 curr+=1;
		 f2+=1;
	      }
	     // for(k=0;k<size;k++)
	     //  	printf("%d ",arr[k]);
	   }
	}

}


void main()
{
	int s,i;
	clrscr();
	printf("enter the size of the array: ");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
	   scanf("%d ",&arr[i]);
	}
	//for(i=0;i<s;i++)
	//   printf("%d ",arr[i]);

	spliter(s);

	for(i=0;i<s;i++)
	   printf("%d ",arr[i]);

	getch();
}
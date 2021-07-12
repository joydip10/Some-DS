#include<stdio.h>
int main()
{

int s,i,j,t,temp,a[20];
printf("Enter the number of elements in the array\n");
scanf("%d",&s);

for(i=0;i<s;i++)
    {
      printf("Enter element %d\n",i+1);
      scanf("%d",&a[i]);
    }

printf ("Selection sort.\narray before sorting:\n");
for (i=0;i<s;i++)
    printf ("%d ",a[i]);

printf ("\n");

for(i=0;i<s;i++)
    {
      printf ("After iteration %d\n", i+1);
      for(j=i+1;j<s;j++)
        {
           if(a[i]>a[j])
               {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
               }
         }
      for (t=0;t<s;t++)
          printf ("%d ",a[t]);
      printf ("\n");
    }
    printf("Array after sorting:\n");
    for(i=0;i<s;i++)
        printf ("%d ",a[i]);

    return 0;
}

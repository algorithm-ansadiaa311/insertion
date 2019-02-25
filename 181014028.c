#include<stdio.h>
#include<stdlib.h>
#define S 10000
int main()
{


    int i,a[5];
    int a1[S],j,k,temp;
    FILE *p ,*p1;

    printf("Enter the numbers :");

    for(i=0;i<5;i++)
    {
      scanf("%d",&a[i]);
    }

    printf("Sorting numbers are:");
    for(i=1;i<5;i++)
        {
            k=a[i];
            for(j=i-1;j>=0&&a[j]>k;j--)
            {
               a[j+1]=a[j];
            }
             a[j+1]=k;
        }

    for(i=0;i<5;i++)
    {
      printf("%d ",a[i]);
    }

    p=fopen("input.txt","w");
    for(i=0;i<S;i++)
    {
      fprintf(p,"%d ",rand());
    }
    fflush(p);
    fclose(p);
    p=fopen("input.txt","r");

   for(i=0;i<S;i++)
    {
      fscanf(p,"%d",&a1[i]);
    }
    fclose(p);
   for(i=1;i<S;i++)
        {
            k=a1[i];
            for(j=i-1;j>=0&&a1[j]>k;j--)
            {
               a1[j+1]=a1[j];

            }
             a1[j+1]=k;

        }
    p1 = fopen("output.txt","w");
    for(i=0;i<S;i++)
    {
      fprintf(p1,"%d ",a[i]);
    }
    fclose(p1);
  return 0;
}

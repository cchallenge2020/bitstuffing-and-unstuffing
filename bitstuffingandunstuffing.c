#include<stdio.h>
#include<conio.h>
int main()
{
    int data[100],bit_s[100],n,i;
    int count=0,j=0;
    printf("Enter the number of bits\n" );
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&data[i]);
    }
    printf("Data before bit stuffing\n");
   for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }

    for(i=0;i<n;i++)
    {
if (data[i]==1)
{
    bit_s[j]=data[i];
    j++;
  count++;
  if(count==5)
  {
      bit_s[j]=0;
      count=0;
      j++;
  }

}
else
{
   bit_s[j]=data[i];
   count=0;
   j++;
}
    }
    printf("\n");
    printf("Data after Bit stuffing\n");
   for(i=0;i<j;i++)
    {
        printf("%d ",bit_s[i]);
    }
    int bit_us[100],k=0;
    count=0;
    for(i=0;i<j;i++)
    {
        if(bit_s[i]==1)
        {
            bit_us[k]=bit_s[i];
            count++;
            k++;
            if(count==5)
                {
                    i++;
                    count =0;
                }

        }
        else
        {
            bit_us[k]=bit_s[i];
            k++;

        }
    }
    printf("\n");
    printf(" Data after Bit unstuffing\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",bit_us[i]);
    }

    return 0;
}



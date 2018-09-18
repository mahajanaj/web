include<stdio.h>

int main()
{
   int i,j;

   int arr[2][2] = {10,20,30,40};

      arr[0][0] = 10;
      arr[0][1] = 20;
      arr[1][0] = 30;
      arr[1][1] = 40;
   for (i=0;i<2;i++)
   {
      for (j=0;j<2;j++)
      {
         printf("value of arr[%d] [%d] : %d\n",i,j,arr[i][j]);
      }
   }
}

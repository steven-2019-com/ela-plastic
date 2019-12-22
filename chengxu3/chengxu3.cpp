#include <stdio.h>
int main()
{ 
    double avg,sum=0;
    int num=0,i,j;
    int  a[5][5]={{0,1,2,7,9},{1,9,7,4,5},{2,3,8,3,1},{4,5,6,8,2},{5,9,1,4,1}};
    for(i=0;i<5;i++)
      for(j=0;j<5;j++)
       if(i==0 || i==4 || j==0 || j==4)
       {
        sum+=a[i][j];
        num++;
       }
   avg=sum/num;
   printf("%.3lf\n",avg);
    return 0;
}

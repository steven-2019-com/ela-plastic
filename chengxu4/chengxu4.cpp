#include <stdio.h>
int main()
{ 
    double avg,sum=0;
    int num=0,i,j;
    int  a[5][5]={{0,1,2,7,9},{1,9,7,4,5},{2,3,8,3,1},{4,5,6,8,2},{5,9,1,4,1}};
    for(i=0;i<5;i++)
      for(j=0;j<5;j++)
       
       {
        sum+=(a[i+1][j+1]-a[i][j+1])*(a[i+1][j+1]-a[i][j+1])+(a[i+1][j]-a[i][j])*(a[i+1][j]-a[i][j]);
       }
	  for(i=0;i<5;i++)
      for(j=0;j<5;j++)
	  {
	  asd+=(a[i+1][j+1]-a[i+1][j])*(a[i+1][j+1]-a[i+1][j])+(a[i][j+1]-a[i][j])*(a[i][j+1]-a[i][j]);
	  }
   avg=((sum/2/3600)+(asd/2/3600));
   printf("%.3lf\n",avg);
    return 0;
}

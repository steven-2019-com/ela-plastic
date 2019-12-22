#include  <stdio.h>
#include  <math.h>
double fun(double x[9])
{
int i;
double s=0.0,ave;

for(i=0;i<8;i=i+2)

{ave=(x[i]+x[i+1])/2.0;
s+=sqrt(ave);}

return s;
}

main()
{double s,a[9]={12.0,34.0,4.0,23.0,34.0,45.0,18.0,3.0,11.0};
 int i;
 FILE *out;
 printf("\nThe original data is : ");
 for(i=0;i<9;i++)
 printf("%6.1f",a[i]);
 printf("\n\n"); 
 s=fun(a);
 printf("s=%f\n\n",s);
 /******************************/
 out=fopen("out.dat","w");
 fprintf(out,"%f",s);
 fclose(out);
 /******************************/
}

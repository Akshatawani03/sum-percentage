#include <stdio.h>
int main()
{
    float a,b,c,d,e,sum,per;
    printf("\n Enter  marks of 5 students:\n");
    scanf("\n%f\n %f\n%f \n%f \n%f",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    per=(sum/500.0)*100;
    printf("\n sum=%.2f",sum);
    printf("\n percentage=%.2f",per);
     return 0;
}
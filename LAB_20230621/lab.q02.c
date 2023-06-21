#include<stdio.h>
int main()
{
    int no,counter=1,total=0;
    float avg;
    while(counter<=10)
    {
        printf("Enter the %d number",counter);
        scanf("%d",&no);
        total=total+no;
        counter++;
    }
    avg=(float)total/10.0;
    printf("the average is %.2f\n",avg);
    if (avg<=50)
        printf("fail");
    else
        printf("pass");
}

#include<stdio.h>
int main()
{
    char name[100];
    double math,eng,sst,urdu;
    printf("enter the name of the student = ");
    scanf("%s",&name);
    printf("enter obtained marks in MATH = ");
    scanf("%lf", &math);
    printf("enter obtained marks in ENGLISH = ");
     scanf("%lf", &eng);
     printf("enter obtained marks in SST = ");
     scanf("%lf", &sst);
     printf("enter obtained marks in URDU = ");
     scanf("%lf", &urdu);
    double tmarks=math+eng+sst+urdu;
    double percentage=tmarks/400*100;

    if (percentage>=90 && percentage<=100)
    {
        printf("%s has obtained %lf precent and is passing with Grade O ",name, percentage);

    }
    else if (percentage>=50 && percentage<60)
    {
        printf("%s has obtained %lf precent and is passing with Grade D ",name, percentage);

    }
    else if (percentage>=60 && percentage<70)
    {
        printf("%s has obtained %lf precent and is passing with Grade C ",name, percentage);

    }
    else if (percentage>=70 && percentage<80)
    {
        printf("%s has obtained %lf precent and is passing with Grade B ",name, percentage);

    }
    else if (percentage>=80 && percentage<90)
    {
        printf("%s has obtained %lf precent and is passing with Grade A ",name, percentage);

    }
    else 
    {
        printf("%s has obtained %lf  percent and has failed ",name , percentage);

    }
    return 0;

}
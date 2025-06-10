#include<stdio.h>
int main()
{
    int amount,amount1;
    int note500,note200,note100,note50,note20,note10,note5,note2,note1;
    note500=note200=note100=note50=note20=note10=note5=note2=note1=0;
    printf("Enter the Amount: ");
    scanf("%d",&amount);
    amount1=amount;
    if (amount>=500)
    {
        note500=amount/500;
        amount-=note500*500;
    }
    if (amount>=200)
    {
        note200=amount/200;
        amount-=note200*200;
    }
    if (amount>=100)
    {
        note100=amount/100;
        amount-=note100*100;
    }
    if (amount>=50)
    {
        note50=amount/50;
        amount-=note50*50;
    }
    if (amount>=20)
    {
        note20=amount/20;
        amount-=note20*20;
    }
    if (amount>=10)
    {
        note10=amount/10;
        amount-=note10*10;
    }
    if (amount>=5)
    {
        note5=amount/5;
        amount-=note5*5;
    }
    if (amount>=2)
    {
        note2=amount/2;
        amount-=note2*2;
    }
    if (amount>=1)
    {
        note1=amount/1;
        amount-=note1*1;
    }
    
    printf("The Currency Notes for The Amount: %d are\n",amount1);
    printf("500 notes = %d\n",note500);
    printf("200 notes = %d\n",note200);
    printf("100 notes = %d\n",note100);
    printf("50 notes = %d\n",note50);
    printf("20 notes = %d\n",note20);
    printf("10 notes = %d\n",note10);
    printf("5 notes = %d\n",note5);
    printf("2 notes = %d\n",note2);
    printf("1 notes = %d\n",note1);
    return 0;
}
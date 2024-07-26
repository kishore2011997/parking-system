#include<stdio.h>
int main()
{
    int car;
    int lorry;
    int bike;
    int truck;
    int i;
    printf("          Welcome to Kishore parking management system           \n\n");
    printf("Please enter the platform\n");
    printf("1.car parking\n");
    printf("2.lorry parking\n");
    printf("3.bike parking\n");
    printf("4.truck parking\n");
    printf("Above the vechle only \n");
    scanf("%d",&i);
     if(i==1)
        printf("car platform no:1\n");
     else if(i==2)
        printf("lorry platform no:2\n");
     else if(i==3)
        printf("bike platform no:3\n");
       else if(i==4)
        printf("truck platform no:4\n");


printf("______________________________________\n");
car=0;
lorry=0;
bike=0;
truck=0;
int n,c,l,b,t;
int Total;
printf("How many vehicle\n");
while(1)
{
    scanf("%d",&n);

if(n==1)
    {

        c=car+1;
        printf("No of cars=%d",c);
        car++;
    }
    if(n==2)
    {
        l=lorry+1;
        printf("No of lorry=%d",l);
        lorry++;
    }
    if(n==3)
    {
        b=bike+1;
        printf("No of bike=%d",b);
        bike++;

    }
    if(n==4)
    {
        t=truck+1;
        printf("No of truck=%d",t);
        truck++;
    }

}


}








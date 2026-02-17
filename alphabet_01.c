
#include<stdio.h>
int main()
{
    int h,r,num;
    float v;
    scanf("%d%d",&h,&r);
    v=3.14*r*r*h;
    num=20*1000/v+1;
    printf("%d\n",num);
    return 0;
}

#include<stdio.h>
int main()
{
    int hour1,minute1,hour2,minute2,total_time1,total_time2,total_time,hour,minute;
    scanf("%d%d%d%d",&hour1,&minute1,&hour2,&minute2);
    total_time1=60*hour1+minute1;
    total_time2=60*hour2+minute2;
    total_time=total_time2-total_time1;
    hour=total_time/60;
    minute=total_time%60;
    printf("%d %d\n",hour,minute);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,price=19,total,num;
    scanf("%d%d",&a,&b);
    total=10*a+b;
    num=total/price;
    printf("%d\n",num);
    return 0;
}

#include<stdio.h>
int main()
{
    int homeworks,tests,finals,score;
    scanf("%d%d%d",&homeworks,&tests,&finals);
    score=homeworks*0.2+tests*0.3+finals*0.5;
    printf("%d\n",score);
    return 0;
}
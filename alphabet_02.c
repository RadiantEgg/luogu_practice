
#include<stdio.h>
int exercise_01()
{
    int choice;
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("I love Luogu!\n");
        break;
    case 2:
        printf("6 4\n");
        break;
    case 3:
        printf("3 12 2\n");
        break;
    case 4:
        printf("%.6f\n",500.0/3);
        break;
    case 5:
        printf("%d\n",480/32);
        break;
    default:
        break;
    }
    return 0;
}
 //浮点数除法
#include<stdio.h>
int exercise_02()
{
    int m,t,s,num;
    scanf("%d%d%d",&m,&t,&s);
    if (t==0)
    {
        printf("0\n");
        return 0;
    }
    num=s/t;
    if(s%t!=0)
        num+=1;
    printf("%d\n",(num<=m)?m-num:0);
    return 0;
}
//判断一个数是不是整数，不是的话向上取整
/*
    int a,b,result;
    result=a/b;
    if(a%b!=0)
        result+=1;
a/b向上取整=a+b-1/b向下取整
*/
/*比大小
    #define MAX(a,b) ((a)>(b)?(a):(b))
    #define MIN(a,b) ((a)<(b)?(a):(b))
#define SWAP(a,b){int temp=a;a=b;b=temp;}
但是调用的时候有SWAP(a,b);
so->#define SWAP(a,b)
多行宏：1、每行末尾用\链接
        2、用do{}while(0)包装
        3、所有参数加括号，表达式加括号
        4、避免++这样的多次运算
good:
#define SWAP(a,b) do{\
    int temp=(a);\
    (a)=(b);\
    (b)=temp;\
}while(0)
*/
#include<stdio.h>
int exercise_03()
{
    int a,u,b,m;
    int condition_1,condition_2;
    int number;
    scanf("%d",&number);
    condition_1=(number%2==0)?1:0;
    condition_2=(number>4&&number<=12)?1:0;
    printf("%d %d %d %d\n",(condition_1&&condition_2),(condition_1||condition_2),(condition_1^condition_2),!(condition_1||condition_2));
    return 0;
}
//yihuo^,条件运算1或0只写表达式就行

#include<stdio.h>
int exercise_04()
{
    int year,result;
    scanf("%d",&year);
    result=(year%4==0&&year%100!=0)||(year%400==0);
    printf("%d\n",result);
    return 0;
}
    
#include<stdio.h>
int exercise_05()
{
    int x;
    scanf("%d",&x);
    if(x==0)
        printf("Today, I ate 0 apple.\n");
    else if(x==1)
        printf("Today, I ate 1 apple.\n");
    else
        printf("Today, I ate %d apples.\n",x);
    return 0;
}

#include<stdio.h>
int exercise_06()
{
    int time_local,time_luogu,n;
    scanf("%d",&n);
    time_local=5*n;
    time_luogu=3*n+11;
    printf("%s\n",(time_local<time_luogu)?"Local":"Luogu");
    return 0;
}
//三元运算符返回字符串"  "

#include<stdio.h>
int exercise_07()
{
    float m,h,bmi;
    scanf("%f%f",&m,&h);
    bmi=m/h/h;
    if(bmi<18.5){
        printf("Underweight\n");
    }
    else if(bmi<24){
        printf("Normal\n");
    }
    else{
        printf("%.6g\nOverweight\n",bmi);
    }
    return 0;
}
//格式字符控制

#include<stdio.h>
#define SWAP(a,b) do{\
    int temp=a;\
    a=b;\
    b=temp;\
}while(0)
int exercise_08()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        SWAP(a,b);
    if(b>c)
        SWAP(b,c);
    if(a>b)
        SWAP(a,b);
    printf("%d %d %d\n",a,b,c);
    return 0;
}
//去学排序

#include<stdio.h>
int exercise_09()
{
    int year,m,result;
    scanf("%d%d",&year,&m);
    result=(year%4==0&&year%100!=0)||(year%400==0);
    switch(m){
        case 1:
            printf("31\n");
            break;
        case 2:
            printf("%d\n",result?29:28);
            break;
        case 3:
            printf("31\n");
            break;
        case 4:
            printf("30\n");
            break;
        case 5:
            printf("31\n");
            break;
        case 6:
            printf("30\n");
            break;
        case 7:
            printf("31\n");
            break;
        case 8:
            printf("31\n");
            break;
        case 9:
            printf("30\n");
            break;
        case 10:
            printf("31\n");
            break;
        case 11:
            printf("30\n");
            break;
        case 12:
            printf("31\n");
            break;
        default:
            break;
    }
    return 0;
}
//用数组最快

#include<stdio.h>
int exercise_10()
{
    int time[7]={0};
    int i=0,max=0,index=0;
    for(i=0;i<7;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        time[i]=a+b; 
    }
    for(i=0;i<7;i++){
        if(time[i]>max){
            max=time[i];
            index=i;
        }
    }
    if(max<=8){
        printf("0\n");
    }
    else{
        printf("%d\n",index+1);
    }
    return 0;
}
//数据的输入与储存

#include<stdio.h>
int calculate(int x,int num)
{
    int result=num/x;
    if(num%x!=0)
        result+=1;
    return result;
}
int min(int a,int b,int c)
{
    int result=a;
    if(b<result)
        result=b;
    if(c<result)
        result=c;
    return result;
}
int exercise_11()
{
    int num,a,a1,b,b1,c,c1,price_1,price_2,price_3;
    scanf("%d%d%d%d%d%d%d",&num,&a,&a1,&b,&b1,&c,&c1);
    price_1=calculate(a,num)*a1;
    price_2=calculate(b,num)*b1;
    price_3=calculate(c,num)*c1;
    printf("%d\n",min(price_1,price_2,price_3));
    return 0;
}
//min(a,b,c)函数里result初始化

#include<stdio.h>
void judge(int a,int b,int c)
{
    if(a*a+b*b==c*c)
        printf("Right triangle\n");
    if(a*a+b*b>c*c)
        printf("Acute triangle\n");
    if(a*a+b*b<c*c)
        printf("Obtuse triangle\n");
    if(a==b||b==c)
        printf("Isosceles triangle\n");
    if(a==c)
        printf("Equilateral triangle\n");
}

#include<stdio.h>
int exercise_12()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int temp;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(a+b<=c){
        printf("Not triangle\n");
        return 0;
    }
    judge(a,b,c);
    return 0;
}

#include<stdio.h>
int exercise_13()
{
    int used;
    float costs;
    scanf("%d",&used);
    if(used<=150){
        costs=used*0.4463;
    }
    else if(used<=400){
        costs=150*0.4463+(used-150)*0.4663;
    }
    else{
        costs=150*0.4463+250*0.4663+(used-400)*0.5663;
    }
    printf("%.1f\n",costs);
    return 0;
}

#include<stdio.h>
int exercise_14()
{
    int x,n,i,rest;
    scanf("%d%d",&x,&n);
    for(i=0,rest=0;i<n;i++){
        if((x+i)%7==6||((x+i)%7==0))
            rest++;
    }
    printf("%d\n",(n-rest)*250);
    return 0;
}

#include<stdio.h>
void reduce(int a,int b)
{
    int r,member,denominator;
    int x=a,y=b;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    member=x/a;
    denominator=y/a;
    printf("%d/%d\n",member,denominator);
}
int exercise_15()
{
    int a,b,c,x,y;
    scanf("%d%d%d",&a,&b,&c);
    int temp;
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c){
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    reduce(a,c);
    return 0;
}
//辗转相除法以及多个数的最大公约数

#include<stdio.h>
int exercise_16()
{
    int height;
    int apples[10]={0};
    for(int i=0;i<10;i++){
        scanf("%d",&apples[i]);
    }
    scanf("%d",&height);
    int count=0;
    for(int i=0;i<10;i++){
        if(height+30>=apples[i])
            count++;
    }
    printf("%d\n",count);
    return 0;
}

#include<stdio.h>
int exercise_17()
{
    int number[3]={0};
    char ch[3]={0};
    scanf("%d%d%d",&number[0],&number[1],&number[2]);
    scanf(" %c %c %c",&ch[0],&ch[1],&ch[2]);
    int temp;
    if(number[0]>number[1]){
        temp=number[0];
        number[0]=number[1];
        number[1]=temp;
    }
    if(number[1]>number[2]){
        temp=number[1];
        number[1]=number[2];
        number[2]=temp;
    }
    if(number[0]>number[1]){
        temp=number[0];
        number[0]=number[1];
        number[1]=temp;
    }
    int new[3]={0};
    for(int i=0;i<3;i++){
        new[i]=number[(ch[i]-'A')];
    }
    for(int i=0;i<3;i++){
        printf("%d ",new[i]);
    }
    return 0;
}
//三个数排序

#include<stdio.h>
int exercise_18()
{
    char isbn[10],input[14],correct;
    int i,index,result=0,final;
    for(i=0,index=0;i<14;i++){
        scanf("%c",&input[i]);
        if(input[i]!='-')
            isbn[index++]=input[i];
    }
    for(i=0;i<9;i++){
        result+=(isbn[i]-'0')*(i+1);
    }
    final=result%11;
    if(final==10)
        correct='X';
    else
        correct=final+'0';
    if(isbn[9]==correct)
        printf("Right\n");
    else{
        for(i=0;i<12;i++){
            printf("%c",input[i]);
        }
        printf("%c\n",correct);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    exercise_01();
    return 0;
}
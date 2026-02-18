# C语言学习笔记

## 目录
-[学习日志](#-学习日志)

-[代码技巧库](#-代码技巧库)

-[待办计划](#-待办计划)

---

## 学习日志

### 2026.2.17
**今日学习**
- 今天学习了markdown的基本语法
- 学会了怎么在GitHub上上传文件，并把我的alphabet_01上传到自己创建的repository里
- 把alphabet_02和LearningNotes一起上传到GitHub

**今日心得**

```c
//1.浮点数除法一定要记得加.0   
    result=500.0/3;
//2.两数相除，向上取整
    result=a/b;
    if(a%b!=0)
        result+=1;
    //a/b上取整=a+b-1/b下取整
    result=(a+b-1)/b;
//3.多行宏定义 
/*          1、每行末尾用\换行
            2、因为宏在写的时候会习惯性加分号，所以宏在定义时用do{}while{0}封装
            3、所有**参数**加括号，**表达式**加括号
            4、避免++这样的重复运算
*/
    //比大小
    #define MAX(a,b) ((a)>(b))?(a):(b)
    #define MIN(a,b) ((a)<(b))?(a):(b)
    //交换
    #define SWAP(a,b) do{\
        int temp=a;\
        a=b;\
        b=temp;\
    }while(0)
//4.三元运算符返回字符串加“ ”
    char name=(a>b)?"Eric":"Egg";
//5.格式字符控制

//6.读取%c注意空白字符(空格跳过)
    scanf(" %c",&ch);
//7.日期与数组结合使用
    int months[13]={0,1,2,3,4,5,6,7,8,9,10,11,12}
//8.读入字符串的特定部分一般用两个数组，再用index处理
    char input[100];
    char want[100];
    int index;
    want[index++]=input[i];
//9.辗转相除法求a和b的最大公约数
    //欧几里得
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
    //递归
    int gcd(int a,int b)
    {
        return(b==0)?a:gcd(b,a%b);
    }
    //最小公倍数lcm*gcd=a*b
    int lcm=a*b/gcd(a,b);
```


---

## 代码技巧库

### 输入输出技巧

### 循环技巧

### 数组技巧

### 字符串技巧

## 待办计划

- [ ] 位运算
- [ ] 排序
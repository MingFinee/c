#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>


//if else 语句
//int main()
//{
//	int point = 90;        
//	if (60<point&&point<=80)        //不能加分号；//不能使用（0 <= point < 60），
//	printf("合格\n");              //会先执行 60 <= point -> 判断真假 得到1或0 ->再判断 0（或1）<90的真假    
//	else if (80 < point&&point <= 100) // ->若为真则执行printf 输出结果为 合格，而不是优秀  
//	printf("优秀\n");  
//    else printf("不合格\n");
//	return 0;                                     
//}
//
//int main()
//{
//	int point = 90;
//	if (60 < point && point <= 80)        
//		printf("合格\n");                
//	else if (80 < point && point <= 100) 
//	{
//		printf("优秀\n");
//		printf("奖励1000元\n");
//	}                                //当if或else控制多条语句时要用{}
//	else 
//		printf("不合格\n");
//	return 0;
//}
//
//int main()
//{
//	int a = 55;
//	int b = 89;
//	if (60 <=a )
//	  if (60<=b )               //else与最近的未匹配的if配对
//			printf("合格\n");   //书写时要层次分明，可以用{}配对
//	  else 
//		    printf("不合格\n");
//	return 0;
//}                             //无输出结果
//
//int main()
//{
//	int a = 55;
//	if (a = 60);     // = 是赋值，要用 == 进行判断（可以打 60==a 当自己打的是60=a时会报错提醒自己）
//	{printf("刚好合格\n");
//	}
//	return 0;
//}                      //结果为 刚好合格      
//
//
// switch case 语句
//int main()
//{
//	int DAY;
//	printf("请输入数字:");
//	scanf_s("%d", &DAY);  
//	switch (DAY)           //switch 允许嵌套使用
//	{
//	case 1:                //case后只能加整形或结果为整形表达式（语句）
//		printf("星期一");
//		break;             //break为终止跳出，若在全都没加的情况下输入4 结果为 星期四星期五星期六星期天
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//	case 7:
//		printf("星期天");
//		break;
//	default:                      //default为在没有case符合的其它情况下执行其它语句
//		printf("请输入1~7的数字");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int DAY;
//	printf("请输入数字:");
//	scanf_s("%d", &DAY);
//	switch (DAY)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//		printf("星期六");
//	case 7:
//		printf("星期天");
//		break;
//	}
//
//	return 0;
//}
//
//
//while语句
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 4)
//			break;        //当运行到i=4时break终止并跳出代码块，结果为1 2 3
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 4)
//			continue;;        //当运行到i=4时continue终止并跳到代码块最上面一直运行if进入死循环
//		printf("%d\n", i); 
//		i++;
//	}
//	return 0;
//
//
//
//getchar与putchar
//int main()
//{
//	int ab = getchar(); //从键盘获取数据
//	printf("%d\n",ab);
//	printf("%c\n",ab);
//	putchar(ab);       //输出数据，与printf作用类似
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	char b[20];
//	printf("请输入密码");
//	scanf("%s", &b[20]);          //scanf只会读取空格/\n前的数据
//	printf("请确认密码（y/n）");   
//	getchar();                     //当输入”12345 （空格）“ 后会直接输出 未确认
//	a = getchar();                 //12345 空格会存入输入缓冲区，当被scanf读取后还剩个空格，
//	if (a == 'y')                   //此时getchar会直接读取缓冲区的空格后运行 而不需要再次从键盘输入
//		printf("已确认");           //如果输入12345 y则getchar会读y，直接得到 已确认
//	else
//		printf("未确认");
//	return 0;
//}
//
//
//for语句
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++) //(初始化；判断部分；调整部分) 先执行初始化，然后判断是否为真，
//		{
//       printf("%d ", i);
//        }     //为真则执行{}内语句，执行完后进行调整部分，再进行判断部分，直到判断为假，跳出循环
//	return 0;
//}        
//int main()
//{
//	int i;
//	for (i = 0; i <= 10; i++)
//	   {
//		   if (i == 7)
//			  break;         //如果i=7则进行break跳出代码块 当i=0 1 2 3 4 5 6时printf
//	       printf("%d ", i);     //结果为0 1 2 3 4 5 6
//	   }    
//		return 0;
//} 
//          
//int main()
//{
//	int i;
//	for (i = 0; i <= 10; i++)
//	   {
//		if (i == 7)
//			continue;        //如果i=7则进行continue跳到代码块初始地方执行for语句 当i=0 1 2 3 4 5 6时printf
//	       printf("%d ", i);     //当i=7时没有执行printf，结果为0 1 2 3 4 5 6 8 9 10
//	   }    
//		return 0;
//}           
//
//int main()
//{for(;;)                     //for循环的判断部分如果被省略，那判断条件为 恒为真
//   {
//    printf("hello\n");         
//   }
//    return 0;               //结果为hello的死循环
//}
//
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 0; a < 10; a++)
//    {for(b=0;b<10;b++)
//       {
//        printf("hello\n");
//       }
//    }
//    return 0;
//}                     //结果为100个hello
//
//int main()
//{
//    int a = 0, b = 0;
//    for (; a < 10; a++)    //如果把a=0 b=0从for中去掉
//    {for(;b<10;b++)        //a=0 b=0会被作用于两个for内，a=0时b执行10次--a执行第二次循环a=1，但此时
//       {                   //int a，b=0并不会作用于两个for内，所以b仍然等于10，所以不会进行循环
//        printf("hello\n"); 
//       }
//    }
//    return 0;          
//}                     //结果为10个hello  1*10+9*0个
//
//int main()
//{
//    int a, b;
//    for (a = 0, b = 0; a < 3 && b < 67; ++a, b++)  //a++与++b都是自增1的意思
//        printf("hello\n");
//    return 0;
//}      //输出三个hello
//
//int main()
//{
//    int a, b;
//    for (a = 0, b = 0; b = 0; a++, b++)   
//        printf("hello\n");   //循环0次，因为b=0不是判断，相当于直接判断为假，因此不循环
//    return 0;                //同理如果判断部分是b=非零数，则会无限循环，无限个hello
//}
//
//
//do while语句
//int main()
//{
//    int i = 0;
//    do
//    {  if(i==6)
//          continue;        //当i=6时跳出循环并再次循环，此时i还是等于6又跳过后面的语句又循环，死循环
//        printf("%d ", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}  
//
//int main()
//{
//    int i = 0;
//    do
//    {
//        if (i == 6)
//            break;       //当i=6时跳出循环，输出结果 0 1 2 3 4 5 
//        printf("%d ", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}
//
//循环练习
//
// 计算n的阶乘
//int main()
//{
//    int n,i,c=1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        c *= i;
//    }
//    printf("n的阶乘为：%d",c);
//    return 0;
//}
// 计算1!+2!+...+10!
//int main()
//{
//    int n, i, c=1,sum=0;
//    for (n = 1; n <= 10; n++)
//    {
//        c = 1;   //注意 要把c的值初始化                 
//        for (i = 1; i <= n; i++)
//        {  
//            c *= i;   //（c=c*i；）
//        }                 //若这里没有把c的值初始化1，则n=2，3，4...时会将上一次的c的值代入大的for循环
//        sum += c;         //
//    }
//    printf("1!+2!+...+10!=%d", sum);
//    return 0;
//}
//用两个for容易出错
//int main()
//{
//    int n, c = 1,sum=0;
//    for(n=1;n<=10;n++)
//    {
//        c *= n;
//        sum+= c;
//    }
//    printf("1!+2!+...+10!=%d", sum);
//    return 0;
//}
//
//有序（按大小排列）数组查找
//int main()
//{
//    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int b = 7;
//    int c = sizeof(a) / sizeof(a[0]);  //计算元素个数
//    int i;
//    for(i=0;i<c;i++)
//    {
//        if (a[i] == b)
//        {
//            printf("下标为：%d", i);
//            break;
//        }
//    }
//    if (i == c)
//        printf("没找到");
//    return 0;
//}
//
//int main()
//{
//    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int b = 6;
//    int c = sizeof(a) / sizeof(a[0]);
//    int i;
//    int l = 0;      //左下标
//    int r = c - 1;  //右下标
//    while (l <= r)
//    {
//        int m = (l + r) / 2;
//        if (a[m] > b)
//        {
//            r = m - 1;
//        }
//        else if (a[m] < b)
//        {
//            l = m + 1;
//        }
//        else
//        {
//            printf("下标为：%d", m);
//            break;   //若不用break则会一直循环，结果为“下标为;6”的死循环
//        }
//    }
//    if (l > r)       //当l>r时说明已经找完整个数组仍没有找到
//        printf("找不到\n");
//   return 0;
// }
//
//
//
//演示多个字符从两边向中间汇聚
//int main()
//{
//    char a[] = "welcome";
//    char b[] = ".......";
//    int left = 0;
//    int right = sizeof(a) / sizeof(a[0]) - 2;  //char类型的定义会自动在后面加上’\0‘，也算一个长度
//    int right=strlen(a)-1;   strlen用来计算指定字符串长度，不会加上“\0”，要引入外部函数库string
//    while (left <= right)
//    {
//        b[left] = a[left];
//        b[right] = a[right];
//        printf("%s\n", b);
//        Sleep(1000);  //Sleep--休息 1000 ms 要引入windows.h
//        system("cls");   //执行系统命令的函数--"cls"-清空屏幕 ， 引入stdlib.h
//        left++;
//        right--;
//    }
//    printf("%s\n", b);
//    return 0;
//}
//
//模拟用户登录，且只允许登错三次
//int main()
//{
//    int i;
//    char b[] = ""; //({0})
//    for (i = 1; i <= 3; i++)
//    {
//        printf("请输入密码:\n");
//        scanf("%s", &b);
//        if (strcmp(b ,"12345")==0)   // ==不能用来比较两串字符是否相等，应使用一个库函数strcmp
//        {
//            printf("登录成功\n");  
//            break;               //break跳出循环，
//        }
//    }
//      if(i==4)
//        printf("登陆三次失败\n");
//    return 0;
//}
//
//求最大公约数（辗转相除法）
//int main()
//{
//    int m = 24;
//    int n = 18;
//    int q;
//    while(m % n != 0)      // 24/18=1...6 -- 18/6=3...0则可得6为最大公约数（辗转相除法）
//    {                      //把m n的值倒过来也可以得出结果
//        q = m % n;
//        m = n;
//        n = q;
//    }
//    printf("最大公约数为：%d\n",n);
//    return 0;
//}
//int main()
//{
//    int m ;
//    int n;
//    scanf("%d%d", &m, &n);
//    int q;
//    while (q=m % n != 0)       //也可以在判断体中给q赋值m%n，更为简便效率
//    {                      
//        m = n;
//        n = q;
//    }
//    printf("最大公约数为：%d\n", n);
//    return 0;
//}
//
//素数判断
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    int b;             
//    for (b = 2; b < a; b++)       //试除法;素数只能被1和它本身整除
//    {
//        if (a % b == 0)
//        {
//            printf("不是素数\n");
//            break;
//        }
//    }
//    if (b == a)
//        printf("是素数\n");
//    return 0;
//}
//int main()
//{
//    int a;
//    int b;
//    int c=0;
//    for (a = 101; a <= 200; a+=2)         //质数不可能是偶数
//    {
//        for (b = 2; b <= sqrt(a); b++)       //aqrt开根号，数学库函数，加math.h
//        {                          //如果一个数不是素数，则必存在一个约数小于其开根号
//            if (a % b == 0)       //可以优化计算速度
//            {
//                break;
//            }
//        }
//        if (b > sqrt(a))
//        {
//            printf("%d\n", a);
//            c++;
//        }
//    }
//    printf("count=%d",c);
//    return 0;
//}
//
//计算1/1-1/2+1/3-1/4+...-1/100
//int main()
//{
//    int i;
//   float b = 0;  
//    int c = 1;
//    for(i=1;i<=100;i++)
//    {
//        b += c * 1.0/ i;  //浮点型 加 .0
//        c = -c;
//    }
//    printf("%lf\n", b);
//    return 0;
//}
//
//打印乘法口诀表
//int main()
//{
//    int a;
//    for (a = 1; a <= 9; a++)     //循环的行
//    {
//        int b; 
//        for (b=1;b<=a;b++)     //循环的行里套循环 
//        {
//            printf("%d*%d=%-2d ",a,b,a*b);  //%2d默认两位数右对齐，%-2d默认两位数左对齐
//        }
//        printf("\n");  //执行完一行再换行更美观 
//    }
//    return 0;
//}
//
//猜数字游戏 1.生成一个随机数 2.猜数字
//int meau()
//{
//    printf("*********************\n");
//    printf("^^1.play^^^^0.exit^^^\n");
//    printf("*********************\n");
//    return 0;
//}
//int game()
//{
//    
//    int b = rand();   //rand() 生成随机数---是stdlib.h
//    printf("%d\n",b);
//
//    return 0;
//}
//int main()
//{
//    int a;
//    do
//    {   
//        meau();
//        printf("请选择：（1/0）\n\n");
//        scanf("%d",&a);
//        switch (a)
//        {
//        case 1:
//            printf("开始游戏\n");
//            game();
//            break;        
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:          //defaut要加冒号
//            printf("选择错误，请重新输入\n");
//            break;
//        }
//    }
//    while (a);  //当输入a的值为0后break，此时while（0）判断为假 不再循环
//    return 0;   //这样可以实现想再玩一把游戏
//}
//
//goto 语句
//关机程序
//int main()
//{
//    char input[20]="";
//    system("shutdowm -s -t 60");   
//    aaa:
//    printf("请注意你的电脑将在一分钟后关机\n输入“我是猪”取消关机\n");
//    scanf("%s",&input);
//    if(strcmp(input,"我是猪") == 0)
//    {
//        system("shutdowm -a ");
//    }
//    else
//    {
//        goto aaa;        //goto会直接切到aaa后的语句，可以保证多次输入
//    }
//
//    return 0;
//}   //为啥我的关机不了[汗]



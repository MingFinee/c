
#include <stdio.h>
#include <string.h>

//int main()
//{
//	printf("hello world");
////	return 0;
////}
//
//char //字符数据型 1字节（申请一个字节空间）
//short //短整型 2字节
//int //整型 4字节
//long //长整型 4/8字节
//long long //更长的整型 8字节
//float //单精度浮点型 4字节
//double //双精度浮点型 8字节

//% d 十进制有符号整数
//% c 单个字符
//% s 输出字符串
//% p 指针的值
//% f 输出十进制浮点数, 不带域宽时, 保留6位小数
//% e 以“科学记数法”的形式输出十进制的浮点数 如2.451e+02
//% g 选用e或f格式中较短的一个输出十进制浮点数, 不输出无效零
//% 0 无输出无符号八进制整数


//% u 输出无符号十进制整数
//% x, % X 输出无符号十六进制整数(不输出前缀Ox)
//
//{
//	int sum1, sum2;
//	int  sum;
//	scanf_s("%d%d", &sum1,&sum2);//(scanf,strcpy,strlen...不安全,加_s才可以运行 
////	,已在project1项目属性-C/C++-预处理器-加上_CRT_SECURE_NO_WARNINGS
////		，作用相当于源文件1列加#define _CRT_SECURE_NO_WARNINGS)
//	sum = sum1 + sum2;
//	printf("sum=%d\n",sum)
//	return 0;
//}

//int num = 10;
//int main()
//{
//	int num = 1;
//	printf("%d\n", num);
//	return 0;
//}//输出结果为1，局部变量优先
// 
// 
//const修饰的常变量之不会再改变
//int a = 3;（a本质上是变量，被赋予了常量属性，是常变量，在需要常量时不能用a
//   如不能arr[a]={0},可以arr[3]）
//print a
//int a=4
//printf 4 最后得出的是  3  4
//如果在第一个int前面加上const则会直接运行不了,已经固定a的值为3
// 
// 
//#define 可以定义标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
// printf("%d\n",MAX);
//	return 0;
//}
  
//enum sex {male,female,secret};//enum-枚举，当需要定义一堆常量时可用
////(要定义量时别乱换行。male, female, secret为枚举常量，此时默认为0，1，2
// //不能改，如male=6是错的运行不了，但可以x=male）
//int main()
//{
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//
//	return 0;
//}
//
//用strlen时要在文件最前面加上 #include <string.h>，因为stdio中没有这个函数
// 
//int main()
//{ char arr='x';  定义单个字符用''
//	char arr1[] = "abc";//数组//字符串类型用""," "为空字符串，[]里面只能加常量，不能加n这种
                                                                       //本质上是变量的字符
//						//“abc”-'a','b','c','\0'--'\0'字符串的结束标志，被隐藏,也算一个字符
//	char arr2[] = { 'a','b','c',0};
//	//单个字符用''//不加0会产生乱码,0相当于'\0' 注意''里不能有空格，空格算一个字符，有一个长度
//  printf("%s\n", arr);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//strlen--string length 计算字符长度
//	printf("%d\n", strlen(arr2));//如果不加0使用strlen会出现一个随机长度
//	return 0;
//}
//数据在计算机上存储时，存储的时二进制
//如‘a’--97 ‘A’--65 ‘\0‘--0 这种编码方式叫ASCII编码  97 65叫ASCII码值，可查ASCII表
//  \ 用来转义其他字符
// 
//int main()
//{
//
//	printf("%c\n", '\'');//结果得到  ' 如果没有\则会出错
//	printf("%c\n", '\132');
//	printf("%c\n", '\x61');
//	// \ddd其中ddd代表1到3个八进制数字 \xdd其中dd为两个16进制数字如\x30	
//	//132作为八进制字符--化为十进制1*8^2+3*8^1+2*8^0=90--ASCII表中代表 Z
// // \132算一个字符，长度为一
//	return 0;
//}
// 
//ASCII表常用十进制对应字符
//65-90分别对应A到Z 加32后对应其小写字符a到z


//int main()
//{
//	int a = 1;
//	int ARR[10] = { 0 };//十个整形元素的数组
//	int aww;
//	printf("%d\n", sizeof(a));//sizeof计算的是变量所占空间的大小，单位是字节（type）
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);//三个结果都是4
//	printf("%d\n", sizeof ARR);//结果为40，sizeof不是函数，是个操作符，可以去括号
//	aww = sizeof(ARR)/sizeof(ARR[0]);
//	printf("%d\n", aww);//计算数组元素个数=数组总字节大小/每个元素大小,结果为10=40/4
//	return 0;
//}
// 
// 自定义函数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a=1, b=2,c=0;
//	c = Max(a, b);
//
//	printf("%d", c);
//	return 0;
//}

//后置++/后置--先使用再自加/减；前置++/后置--先自加/减再使用
//&&--逻辑与（相当于且），||-逻辑或

//exp1 ? exp2 : exp3;（条件操作符，也叫三目操作符）：若exp1为真则进行exp2，否则执行exp3
//int main()
//{
//	int a = 21;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);//简化了if else
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5};
//	arr[4];//[]-下标引用操作符
//	printf("%d\n", arr[0]);//结果为1
//	return 0;
//}


//int main()
//{
//	int a = 2, b;
//	b = ~a;// ~ 按（二进制）位取反
//	printf("%d\n", b);
//	return 0;//结果为-3
//}


//int test()
//{
//	int a = 1;
//	a++;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//结果为五个2，若第一个int前static修饰后a就变成了一个静态的局部变量,只会初始化一次
 //static int a=1会跳过让a变成1，而是沿用之前的值，结果会变成2 3 4 5 6  
//int test()
//{
//	static int a = 1; //static修饰局部变量使其生命周期变长了
//	a++;              //static修饰全局变量改变其作用域，使其只能在原本的源文件内被使用
//	printf("%d\n", a);//static修饰函数时改变了的其链接属性，变成了内部属性，也不能在外部使用	
//	return 0;         //正常的函数是有外部连接属性的
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//int main()
//{   extern int visual;//extern是声明外部符号的（源文件 如 外部自定义函数.cpp 的int visual=2022）
//    printf("%d\n", visual);
//	return 0;
//}


//#define定义的标识符常亮 如#define max 100 之后的max都会被认为100
//#defiune可以定义宏-带参数
//宏的定义 
//#define MAX(x,y) (x>y?x:y)//MAX(x,y)被替换为（x>y?x:y）
//int main()
//{
//    int a = 13, b = 14;
//    int c = MAX(a, b);//宏的方式
//        //int c=max(x,y);是函数的方式，在这之前要先定义
//        printf("最大值为：%d\n",c);
//    return 0;
//}

//32位的计算机---1个位可以有正电或负电--0或1--2^32种可能--访问2^32个单元空间--
//若每个空间的内存的单元为bit--最多能访问2^32bit=0.5gb运行内存，每个空间的单元为byte更合理（4gb）
//int main()
//{
//    int a = 12;//申请4个字节
//    printf("%p\n", &a);//%p为指针的值，打印地址；& 取地址 有一种变量是用来存放地址的--指针变量
//    int* S = &a;//S此时为指针变量，类型为int*
//    printf("%p\n", S);//地址结果为十六进制
//    *S = 1000;//* 为解引用符/间接访问操作符，*S表示根据S存储的地址找到地址对象，
//                                                        //此时给a=12赋值成a=1000
//    printf("%d\n", a);//结果为1000
//    char cb = 'r';
//    char* i = &cb;
//    printf("%p\n", *i);
//    *i = 'b';
//    printf("%c\n", cb);//%c单个字符
//    printf("%d\n", sizeof(i)); //结果为8 因为是64位计算机，一个地址是用64个bit存储=8字节
//    printf("%d\n", sizeof( * i));//结果为1，*i表示b，b用char定义的，申请的是1个字节
//    printf("%d\n", sizeof( short*));以下结果全部为8，计算类型大小等于计算变量大小
//    printf("%d\n", sizeof( int*));
//    printf("%d\n", sizeof( long*));
//    printf("%d\n", sizeof( char*));
//    return 0;
//}


//面对复杂对象使用结构体--自己创造出来的一种类型
//struct book//struct book 变成了一个类型
//{
//    char name[20]; 
//    short price;
//};//一定要有分号,不要return 0
//int main()
//{   //利用结构体类型创建一个结构体变量
//    struct book a1 = { "c语言程序设计",55 };//如int一样后面加需要定义的对象
//    printf("书名:%s\n",a1.name);//结构体变量.成员
//    printf("价格:%d\n", a1.price);
//    a1.price = 50;//不能a1.name="c++" 因为name是一个数组不是变量
//    strcpy(a1.name,  "c++");//strcp--string cope--字符串拷贝--string.h库函数
//    printf("特价:%d\n", a1.price);
//    struct book* xy = &a1;
//    printf(" %s\n",  (*xy).name);//利用xy打印出name
//    printf(" %d\n", (*xy).price);
//    printf("%s\n", xy->name);//利用->打出name  -> 结构体指针.成员
//    printf("%d\n", xy->price);
//    return 0;
//}

//操作符总结
// %  取余
// <<  >>  左移 右移操作符
// sizeof 计算字节长度
// & 按位与 --将数值转化为二进制后对齐，对齐的数都为1 取1，否则取0 得出结果
// | 按位或 --将数值转化为二进制后对齐，对齐的数有1个为1 取1，否则取0
// ^ 按位异或--对齐的数不同 取1，否则取0
// ! 非
// ~ 按位取反
// & 取地址
// * 解引用
// 双目操作符 逻辑与&&  逻辑或|| --相当于数学里的且与或
//三目操作符（条件操作符） exp1 ? exp2 : exp3;

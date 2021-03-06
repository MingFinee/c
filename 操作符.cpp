#include <stdio.h>

//算术操作符
// %两边必须为整数，返回的是取余之后的整数
//对于/，如果两个操作数都为整数，则执行整数除法，只要有浮点数就执行浮点数除法

//int main()
//{
//	float i,j,k;
//	i = 5.0 / 2;
//	j = 5 / 2.0;
//	k = 5.5 / 2.0;
//	printf("%f\n%f\n%lf\n",i,j,k);
//	return 0;
//}

//移位操作符
// 
//右移操作符：
//1.算数右移--=右边丢弃，左边补原符号位（根据正加0，负加1）
//2.逻辑右移--右边丢弃，左边补0
//左移操作符：左边丢弃，右边补0
//[1][][][][][][][][][]][][][][][][][][][]][][][][][][][][][][][]--首位为符号位	
//[0][][][][][][][][][]][][][][][][][][][]][][][][][][][][][][][]--（负数）
//100000000000000000000000000000001--为十进制 -1
//000000000000000000000000000000001--          1
// 
//原码->反码->补码--整数存储到内存的是补码
// **非负整数原反补码相同**
// 
// -1 - 10000000000000000000000000000001--原码
// 取反 11111111111111111111111111111110--反码
// 加1  11111111111111111111111111111111--补码
//补码右移，最前面加个1

//int main()
//{
//	int a = 19;      //--00000000000000000000000000001011
//	int b=a >> 1;    //右移操作符，移动的是二进制位
//	printf("%d\n",b); 
//	int c = -1; 
//	return 0;
//}


// & 按位与 --将数值转化为二进制后对齐，对齐的数都为1 取1，否则取0 得出结果
// | 按位或 --将数值转化为二进制后对齐，对齐的数有1个为1 取1，否则取0           
// ^ 按位异或--对齐的数不同 取1，否则取0

//不使用临时变量交换a b的值
//int main()
//{
//	int a=3;     //这种方法当超级大，接近最大值（2^32）时不适用
//	int b=4;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n",a,b);
//	return 0;
//}
//int main()
//{   
//	int a = 3;    //执行效率低，可读性低
//	int b = 4; 
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//求一个整数储存在内存中的二进制中的1的个数（补码）
//int main()
//{
//	int i ;
//	int count=0;
//	scanf("%d",&i);
//	int a;
//	for (a = 0; a < 32; a++)
//	{
//		if (((i >> a) & 1) == 1)   //该位&1后若等于1则该位必定为1
//		{                            
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int a = 13;
//	int count = 0;
//	while(a)
//	{
//		a = a & (a - 1);         //13--1101   12--1100
//		count++;                 //13&12--1100 11--1001
//	}                            //12&11--1000 10-0111
//	printf("%d",count);          //11&10--0
//	return 0; 
//}

//sizeof的坑
//int main()
//{
//	int s = 0;
//	int b = 10;
//	short a=0;
//	printf("%d\n",sizeof(s = b + 5));
//	printf("%d\n", sizeof(a= b + 5)); //b是四字节，a是两字节，但此时b只是摆设，不改变a的值
//	printf("%d", s);
//}

//按位取反 ~
//int main()
//{
//	int a = 0;              //00000000000000000000000000000000  补码/原码/反码
//	a = ~a;         //按位取反11111111111111111111111111111111  补码
//	printf("%d",a);         //11111111111111111111111111111110  反码
//	return 0;               //10000000000000000000000000000001  原码
//}

//逻辑的坑
//int main()
//{
//	int a = 0, b = 2, c = 3, d = 4;
//	int i = a++ && ++b && c++;  //当执行到a++时a先使用此时&&前为假，于是&&后面全都不执行
//	printf("a=%d b=%d c=%d d=%d",a,b,c,d);
//	return 0;   //结果为1 2 3 4 --执行完a++
//}
//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4;
//	int i = a++ && ++b && c++; 
//	printf("a=%d b=%d c=%d d=%d", a, b, c, d);
//	return 0;   //结果为2 3 4 4 --a，b c都加1
//}
//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4;
//	int i = a++ || ++b ||c++;//当执行到a++时a先使用此时||前为真，于是直接得结果||后面全都不执行
//	printf("a=%d b=%d c=%d d=%d", a, b, c, d);
//	return 0;   //结果为2 2 3 4 --执行完a++
//}

//逗号表达式--从左倒油依次执行，结果取最后一个表达式的结果 
/*int main()
{
	int a = 1;
	int b = 2;
	int c = (a > b, a = a + b, a, b = a + 1);
	printf("%d\n", c);
	return 0;
}*/   //结果为4

//结构体--struct
//struct student     //使用struct student 这个类型创建了一个对象并初始化
//{
//	char name[20];
//	int age;
//	char ID[20];
//};               //注意 ；号
//int main()
//{
//	struct student a = { "张三",20,"1234567" };
//	printf("%s\n",a.name);
//	printf("%d\n", a.age);
//	printf("%s\n", a.ID);  // 结构体变量.成员名
//	struct student* p = &a;
//	printf("%s\n",(*p).name);  
//	printf("%s\n", p->name);
//	return 0;
//}

//整型提升--cpu一般以4字节进行算数操作运算，此时要将操作数提升为4字节类型
//int main()
//{
//	char a = 1;  //int类型的整数1--00000000000000000000000000000001
//	             //char只能定义8bit，截断，a--00000001
//	char b = 199;           //199--00000000000000000000000011000111
//	                               //截断，b--11000111
//	//a，b整型提升--按照变量的数据类型的符号位来提升
//	//a--00000000000000000000000000000001
//	//b--00000000000000000000000011000111  
//   //相加00000000000000000000000011001000 
//	char c = a + b;   //截断 c--11001000  -- 符号位为1整形提升高位补1
//	                  //整型提升11111111111111111111111111001000--补码
//	                          //11111111111111111111111111000111--反码
//	printf("%d",c);           //10000000000000000000000000111000--原码-> -56
//	return  0;
//}
//int main()
//{
//	char c = 3;
//	printf("%d\n",sizeof(c));   //c申请4个字节的空间
//	printf("%d\n", sizeof(+c)); //+c中的c参与算数运算，进行整形提升
//	printf("%d\n\n", sizeof(!c));//！a为0，1个字符占1字节空间
//	int a=0;     
//	printf("%d\n", sizeof(a));  
//	printf("%d\n", sizeof(+a));
//	printf("%d\n", sizeof(!a));
//	return 0;
//}


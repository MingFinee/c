#include <stdio.h>
#include <string.h>
#include <math.h>


//C语言中分为：1.库函数：c语言本身提供的函数
//             2.自定义函数
//***  学习c语言库函数：www.cplusplus.com  ***

//int main()
//{
//	char a1[] = "hello\0world";
//	char a2[] = "********";
//	strcpy(a2, a1);      //string copy     字符串拷贝
//	int b=strlen(a2);    //string length   字符串长度
//	printf("%s\n",a2);   //\0及之后不能拷贝过来，到\0即为结束 
//	printf("%d\n",b); 
//	return 0;
//}

//memset ---memory set 内存设置
//int main()
//{
//	char a[] = "hello world";
//	memset(a, 'h', 5);   //把hello world前5个字符改为h
//	printf("%s\n",a);
//	return 0;
//}

//自定义函数
//实参：真实传给函数的参数，可以是常量，变量，表达式，函数但必须要确定的值如上面的&q,&w
//形参：指函数名后括号中的变量，在函数调用后会自动销毁 如下面的x，y
//函数的调用:传值调用（如第一个例子）；传址调用：（如指针例子）
//int swap(int x,int y)    
//{
//	int a = x;
//	x = y;
//	y = a;
//	return 0;
//}   
//int main()
//{
//	int q = 12;
//	int w = 13;                   
//	swap(q,w);                   //int x=q在一轮后q还是q，只是x y变来变去
//	printf("q=%d w=%d\n",q,w);   //结果并没有交换，这种方式有错误
//	return 0;       //这种交换并不同加法函数一样返回了x y的值，q w的值并没有改变
//}    
  
//**用指针解决**（指针yyds）
//int main()
//{
//	int a=9;
//	int b = 10;
//	int* p = &a;
//	*p=b;
//	printf("%d\n",a);
//	return 0;
//}//结果为10

//int swap(int* x,int* y)    
//{                         
//	int a = *x;
//	*x = *y;
//	*y = a;
//	return 0;
//}   
//int main()
//{
//	int q = 12;          
//	int w = 13; 
//	swap(&q,&w);            //相当于int* x=&q int* y=&w； *x=q *y=w这样使两方有了联系
//	printf("q=%d w=%d\n",q,w);  
//	return 0;                 
//}


//练习(一般先想函数作用，再构造函数)
//用自定义函数打印100到200的素数
//int s(int a)
//{
//    int b;
//    for (b = 2; b <= sqrt(a); b++) //b=2时判断a%b是否等于0，如果不等于则继续for循环直到
//    {                                                             //循环完后return 1； 
//        if (a % b == 0)     //如果判断出a% b == 0则跳出循环，此时b肯定小于sqrt，不执行
//        {
//            break;
//        }
//    }
//    if (b > sqrt(a))
//    {
//        return  1;
//    }
//}
//int main()
//{   int i;
//     int count=0;
//    for(i=100;i<=200;i++)
//    {
//        if (s(i) == 1)
//        {
//            printf("%d ",i);
//            count++;
//        }
//    }
//    printf("\n%d", count);
//	return 0;
//}

//二分查找法（有序数组）
//int q(int arr[], int k)  //接收的是arr的首字母的地址，此时arr[]本质是一个指针
//{
//	int b=sizeof(arr) / sizeof(arr[0]);  //此时b=1
//	int i;
//	for (i = 0; i < b; i++)
//	{
//		if (arr[i] == k)
//		{
//			return 1;
//		}
//	}
//	if(i>=b)
//		return ( - 1);
//}                      //此时总是返回-1
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 8;
//	int a=q(arr, k);   //数组在传递到函数时只会传递首元素地址-数组内存太大系统默认取首字母地址
//	if (a !=-1)                     //数组本身也是指针     
//	printf("下标为：%d\n",a);
//	else
//		printf("找不到\n");
// return 0;
//}
//解决方法--先确定好b的值再传递去函数中
//int q(int brr[],int k,int b)
//{
//	int left = 0;
//	int right = b - 1;
//	while(left<=right)
//	{
//		int i = (left + right) / 2;
//		if (brr[i] < k)
//			left = i + 1;
//		else if (brr[i] > k)
//			right = i - 1;
//		else
//			return i;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 5;
//	int b = sizeof(arr) / sizeof(arr[0]);
//	int a = q(arr,k,b);
//	if (a ==-1)
//		printf("找不到\n"); 
//	else
//		printf("下标为：%d\n", a);
//	return 0;
//}

//制作strlen函数
//int s(char* a)             //a此时为arr中q的地址
//{
//	int count = 0;  
//	while (*a != '\0')     //当地址对应的元素是终止符时跳出循环
//	{
//		count++;
//		a++;           //指针加1指向的地址往后移一个
//	}
//	return count;      //count数组中\0之前的元素记录数量
//}
//int main()
//{
//	char arr[] = "qwert";
//		int b=s(arr);         //传递到函数里的是第一个元素地址
//		printf("%d\n",b);
//	return 0;
//}

//写一个函数，每调用一次便使a加1
//int s(int* i)   //注意要用指针，不然i和a无法联系
//{
//	(*i)++;    //使用*i++会是*（i++）
//	return *i;
//}
//int main()
//{
//	int a=0;
//	s(&a);
//	printf("%d\n",a);
//	s(&a);
//	printf("%d\n", a); 
//	s(&a);
//	printf("%d\n", a);
//	return 0;
//}


//函数的嵌套调用和链式访问
//嵌套调用，举个栗子
//void a()   //void不需要返回
//{
//	printf("lalala\n");
//}
//void b()
//{
//	int i;
//	for (i = 1; i <= 3; i++)
//		 a();
//}
//int main()
//{
//	b();
//	return 0;
//}
//链式访问--把一个函数的返回值作为另一个函数的参数
//int main()
//{
//	int a;
//	a = strlen("qwer");
//	printf("%d\n",a);
//	printf("%d\n",strlen("asdf"));       //链式访问--strlen的返回值作为printf的参数
//	printf("%d\n", printf("%d\n", printf("46\n")));
//	                 //查C语言函数库可知printf的返回值为打印字符个数(\n算一个字符)
//	return 0;       //结果先打印最后的46\n，然后在打印其返回值3，再打印返回值的返回值2
//}

//调用外部自定义函数--具有函数声明和定义
//#include "标头.h"      //自定义的函数用 " "--从 标头.h 中引入声明--声明可以引入定义
//int main()
//{   int a = 23;        //函数的声明放在头文件 标头.h 中( int add(int x, int y); )
//    int b = 34;        //函数的定义放在源文件 外部.cpp 中(也可以放在同一文件中)
//	int c=add(a, b);   //满足以上两个条件可以使用函数
//	printf("%d",c);
//	return 0;
//}

//函数递归--程序调用自身的编程技巧称为递归
//int main()
//{
//	printf("hh\n");
//	main();     //执行完第一个printf后调用main，而main定义里又有print-main（），死循环hh
//	return 0;
//}

//输入一个数用递归依次打印其位数
//void p(int b)
//{
//	if (b > 9)
//	{
//		p(b/10);
//	}                    //最先打印最前面的位数，往后推 p(123)-p(12) 3-p(1) 2 3-1 2 3
//    printf("%d ",b%10);  //%10可以打印每一份的最后一位
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	p(a);         //先打印最后一位；再打印倒数第二位
//	return 0;
//}

//用递归制作strlen函数(不考虑溢出)
//int s(char* a)
//{
//	if (*a != '\0')
//	{
//		a++;
//		return (1 + s(a));  //return(1+return(return（1+.....+return (1+return 0)))
//	}
//	else return 0;
//}
//int main()
//{
//	char arr[] = "qwert";
//	int b = s(arr);         //传递到函数里的是第一个元素地址
//	printf("%d\n", b);
//	return 0;
//}
//用递归求n的阶乘(不考虑溢出)
//int s(int a)
//{
//	if (a > 1)
//		return (a * s(a - 1));
//	else if (a == 1)
//		return 1;
//	else if (a == 0)
//		return 0;
//}
//int main()
//{
//	int x = 5;
//	int y=s(x);
//	printf("阶乘为：%d",y);
//	return 0;
//}

//青蛙跳n阶台阶，一次只能跳1或2阶，共有多少种跳法
//int s(int a)
//{
//	if (a > 2)
//		return s(a - 1) + s(a - 2);//因为一次可以跳1或2阶，那么跳n阶方法数=跳n-1阶+跳n-2阶
//	else if (a == 2)         //n=1--1  
//		return 2;            //n=2--2  
//	else if (a == 1)         //n=3--3  
//		return 1;            //n=4--5
//}                   //有n=1和n=2不符合关系，单独拿出。如果还可以一次跳3阶则也拿出n=3的情况
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int b = s(n);
//	printf("%d\n",b);
//	return 0;
//}
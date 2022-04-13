#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int* p = (int *)(&a + 1);     //将数组往后1一个地址，把数组的地址强制转化为int*类型，
//	printf("%d %d",*(a+1),*(p-1));//2 5 p-1是p往前跳一个int*类型的地址，也就是5的地址
//	return 0;
//}

//#include <stdio.h>
//struct test
//{
//	int num; 
//	char * name;
//	short date;
//	char a[2];
//	short b[4]; 
//}*p;
////已知struct test 类型变量的大小是32个字节
//int main()
//{
//	p=(struct test *) 0x100000;      //令0x1000000强制转化为(struct test *)
//	printf("%p\n", p + 0x1);         //struct test类型变量的大小是32个字节 ，地址+1是加一个类型大小
//	printf("%p\n", (unsigned long )p + 0x1);//强制转换为整形，p变成了整形 0x100000+1=0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };  //在内存中的存储为 01000000 02000000 03000000 04000000
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1); //强制转化首元素地址为整形，设a[1]地址为0x00000007
//	                              //（int*）（（int）a+1）--0x00000008
//	                              //地址加了1个字节，而a[0]是以4字节存储的，于是
//	                              //*p2--00000002--是小端存储，输出是02000000
//	printf("%x %x",p1[-1],*p2);  //p1[-1]=*(p1-1)
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(1,2),(2,3) };//注意是逗号表达式{1，2，3}
//	int* p = a[0]; //第一行有1，2，p是1的地址
//	printf("%d",p[0]);//p[0]相当于*（p+0）
//	return 0;
//}//结果为1

//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p =(int(*)[4]) a;
//	printf("%d\n", &p[4][2]- &a[4][2]);//-4 p[4][2]=*((p+4)+2).解引用p往后移4个地址的第三个元素
// 	printf("%p\n", &p[4][2]- &a[4][2]);//-4的地址0xFFFFFFFFFFFFFFFC，数字的地址的是补码的16进制形式
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&a + 1);  //&a代表整个数组，+1向后跳过这个二维数组，p1指向10后面
//	int* p2 = *(a + 1);//*（a+1）=第二行数组数组名解引用--得到数组，数组是int*类型的
//	                   //p指向6
//	printf("%d\n", **(a + 1));
//	printf("%d %d", *(p1 - 1), *(p2 - 1));
//	//int类型指针-1，指向内存向前移4字节的元素
//	return 0; //10  5
//}


//#include <stdio.h>
//int main()
//{
//    char b[] = "abc"; //abc是字符串,是数组形式
//	const char* a[] = {"abc", "bcd", "cde"};
//	const char** pa = a; //pa是char*类型的abc的地址，所以p是char**类型
//	pa++;                //pa是第二个元素bcd地址
//	printf("%s",*(pa));  //*pa通过bcd的地址找到bcd
//}
// 
//#include <stdio.h>
//int main()
//{
//	const char* c[] = { "hello","forever","succedd","world" };
//	const char** cp[] = { c + 3,c + 2,c + 1,c };
//	const char*** cpp = cp;
//
//	printf("%s\n", **++cpp);      
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}

//求范围内的水仙花数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a;
//	for (a=1;a<=100000;a++) 
//	{
//		int count = 0;
//		int n = a;
//		while (n)
//		{
//			count++;
//			n = n / 10;
//		}
//		int m = a;
//		int sum = 0;
//		while (m)
//		{
//			sum += pow(m % 10, count);
//			m = m / 10;
//		}
//		if (a==sum)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int line, i;
//	scanf("%d", &line);
//	for (i=0;i<line;i++)
//	{
//		int j;
//		for (j=0;j<line-i-1;j++)
//		{
//			printf(" ");
//		}
//		for (j=0;j<2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j=0;j<2*(line-i-1)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//汽水1元一瓶，两个空瓶换一瓶，有money，问最多喝多少瓶
//#include <stdio.h>
//int main()
//{
//
//	int money;
//	scanf("%d",&money);
//	int drink= money;
//	int empty = drink;
//	while (empty > 1)
//	{
//		drink += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d",drink);
//	return 0;
//}


//数组奇偶排列
//#include <stdio.h>
//void print(int* a, int x)
//{
//	int i;
//	for (i =0; i < x; i++)
//	{
//		printf("%d ",*(a+i));
//	}
//}
//void move(int a[], int x)
//{
//	int* left = a;
//	int* right = &a[x - 1];
//	while (left < right)
//	{
//		while (left < right && (*left) % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && (*right) % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int x =* left;
//			*left = *right;
//			*right = x;
//		}
//		left++;
//		right --;
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",sz);
//	move(arr,sz);
//	print(arr, sz);
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a[10][10] = {};
//	int i, j;
//	for(i=0;i<10;i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				a[i][j] = 1;
//			if (j == i)
//				a[i][j] = 1;
//			if (i > 1 && j > 0)
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i+1; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//猜凶手（1人）：
//嫌疑人证词：A：不是我
//            B:是C
//            C:是D
//            D：C在胡说
//已知其中只有一人说的是假话
//#include <stdio.h>
//int main()
//{
//	char x;     //嫌疑人x
//	for (x = 'A'; x <= 'D'; x++)            //依次假设凶手
//	{
//		if ((x != 'A') + (x == 'C') + (x == 'D') + (x != 'D') == 3)  //当只有三人证词为真时确定凶手
//			printf("凶手为:%c",x);
//	}
//	return 0;
//}

//5个人跳水比赛，确认名次
//a：b是第二，我第三
//b:我是第二，e第四
//c:我是第一，d第二
//d:c最后，我第三
//e:我第四，a第一
//已知每位选手说对一半
//#include <stdio.h>
//int main() 
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++) 
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <=5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <=5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) +
//							((b == 2) + (e == 4) == 1) +
//							((c == 1) + (d == 2) == 1) +
//							((e == 4) + (a == 1) == 1) +
//							((c == 5) + (d == 3) == 1) == 5)
//						{
//							if (a*b*c*d*e==120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[] = "hello";
//	char brr[] = "hello";
//	const char*p1= "hello";
//	const char*p2= "hello";
//	if (arr == brr)
//		printf("a\n");
//	else
//		printf("b\n");   //内容虽然一样但数组各自的空间不一样
//	if (p1 == p2)
//		printf("c\n");   //常量字符串不能更改，计算机只会使用一个地址
//	else
//		printf("d\n");
//
//	return 0;
//}  //b c

//左旋字符k个--旋2个 abcd--cdab
//暴力求解法
//#include <stdio.h>
//void left_move1(char arr[], int x, int y)
//{
//	int i;
//	for (i = 0; i < x; i++)
//	{
//		int a = arr[0];
//		int j;
//		for (j = 0; j < y - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[y-1] = a;
//	}
//	printf("%s",arr);
//}
//int main()
//{
//	int k;
//	scanf("%d",&k);    //左旋几个
//	char arr[]="abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	left_move1(arr,k,sz);
//	return 0;
//}
//三步旋转法
//#include <assert.h>
//#include <stdio.h>
//void reverse(char* a, char* b)
//{
//	while (a<b)
//	{
//		char c = *a;
//		*a = *b;
//		*b = c;
//		a++;
//		b--;
//	}
//}
//void left_move2(char arr[], int x, int y)
//{
//	assert(x<=y);
//	reverse(arr,arr+x-1);
//	reverse(arr+x,arr+y-1);
//	reverse(arr,arr+y-1);
//	printf("%s", arr);
//}
//int main()
//{
//	int k;
//	scanf("%d",&k);
//	char arr[]="abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	left_move2(arr, k, sz);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char a[] = "abcdef";
//	char b[] = "abcdef";
//	strcat(a, b);
//	printf("%s",a);
//	return 0;
//}
 

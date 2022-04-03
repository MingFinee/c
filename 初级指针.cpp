#include <stdio.h>

//32位的计算机---1个位可以有正电或负电--0或1--2^32种可能--访问2^32个单元空间--
//若每个空间的内存的单元为bit--最多能访问2^32bit=0.5gb运行内存，每个空间的单元为byte更合理（4gb）
//int main()
//{
//    int a = 12;        //申请4个字节
//    printf("%p\n", &a);//%p为指针的值，打印地址；& 取地址 有一种变量是用来存放地址的--指针变量
//    int* S = &a;       //S此时为指针变量，类型为int*
//    printf("%p\n", S); //地址结果为十六进制
//    *S = 1000;         //* 为解引用符/间接访问操作符，*S表示根据S存储的地址找到地址对象，
//                                                         //此时给a=12赋值成a=1000
//    printf("%d\n", a);//结果为1000
//    char cb = 'r';
//    char* i = &cb;        
//    printf("%p\n", *i);
//    *i = 'b';
//    printf("%c\n", cb);       //%c单个字符
//    printf("%d\n", sizeof(i));      //结果为8 因为是64位计算机，一个地址是用64个bit存储=8字节
//    printf("%d\n", sizeof( * i));   //结果为1，*i表示b，b用char定义的，申请的是1个字节
//    printf("%d\n", sizeof( short*));//以下结果全部为8，计算类型大小等于计算变量大小
//    printf("%d\n", sizeof( int*));  //地址大小都是8字节
//    printf("%d\n", sizeof( long*));
//    printf("%d\n", sizeof( char*));
//    return 0;
//}
//指针类型决定了指针进行解引用时能够访问空间的大小
// int a=0x11223344;
// char *p=(char*)&a;-->强制访问a的第一个字节的地址对应的内容
// a的内容在空间中的排列为44332211，*p=44
//int*p      *p能够访问4个字节
//char*p     *p能够访问1个字节
//double*p   *p能够访问8个字节
//int main()
//{
//    int a = 0x11223344;
//    char* p = &a;    //报错
//    *p = 0;
//    printf("%d",a);
//    return 0;
//}

//野指针--指向位置不可知（随机的，越界的，被释放的）
//int main()  //随机的
//{
//	int a;      //局部变量不初始化，默认随机值
//	int* p = &a;//局部变量的指针变量，就被初始化为随机值
//	return 0;
//}

//int* test()  //被释放的
//{
//	int a = 1;
//	return &a;    //形参a的空间地址会还给系统，相当玉这个空间已经不属于a了
//}
//int main()
//{
//	int* p = test();
//	printf("%d",*p);
//	return 0;  //这个代码虽然结果能输出正确结果，但其实是错的，千万不要这么写
//}            //报警告： 返回局部变量或临时变量的地址: a

//int main()   //越界的
//{
//	int a[10];
//	int i = 0;
//	int* p = a;  //数组也是指针(首元素地址)
//	for (i = 0; i < 13; i++)
//	{
//		*p = i;
//		   p++;
//	}
//	printf("%d",*p);
//	return 0; 
//}

//int main()
//{
//	int a = 10;
//	int b = 0;
//	int* p = &a;
//	int* m = NULL; //NULL--将指针变量初始化，赋值为空指针，没有指向任何空间
//	return 0;    
//}

//指针+/-整数
//int main()
//{
//	int a[10] = {1,2,3,4,5,6,7,8,9,0};
//	int i = 0;
//	int s = sizeof(a) / sizeof(a[0]);
//	int *p = a;
//	for (i = 0;i < s; i++)
//	{
//		printf("%d ",*p);
//		p++;    //指针加/减1 向后/前跳一个整形 此时会指向后一个元素的地址
//	}
//	return 0;
//}
// 
//指针+/-指针
//int main()
//{   int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
//    int i =(&a[1]-&a[8]);
//	printf("%d\n",i);
//	int b[5] = { 1,2,3,4,5 };
//	//int j = (&a[1] - &b[2]);err--要指向同一个空间
//	//printf("%d",j);
//	return 0;
//}	

//用指针制作strlen函数(不考虑溢出)
//int s(char* a)
//{
//	char* start = a;
//	char* end = a;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;  //指针相减，最后个元素地址减最前元素的地址得数量差
//}
//int main()
//{
//	char arr[] = "qwert";
//	int b = s(arr);         //传递到函数里的是第一个元素地址
//	printf("%d\n", b);
//	return 0;
//}

//指针可以比较大小
/*int main()
{
	int a[5] = {1,2,3,4,5};
	int* p;
	for (p = &a[5]; p > &a[0]; )
	{
		*--p = 0;
		printf("%d ",*p);
	}
}*///--将所有元素变成0
//允许指向数组元素的指针与数组最后一个元素后面的那个内存位置的指针比较
//但是不允许与指向第一个元素前面的那个内存位置的指针比较

//二级指针
//int main()
//{
//	int a = 8;
//	int* pa = &a;
//	int** pb = &pa; // pb是二级指针变量，存储pa的地址
//	printf("%d %d",*pa,**pb);
//	return 0;
//}

//数组指针--数组名（首元素）的指针
//指针数组--存指针的数组
//int main()
//{
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int* a[] = { &b,&c,&d };
//	int i;
//	for(i=0;i<3;i++)
//	printf("%d ",*a[i]);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//
//求字符串长度--strlen
//长度不受限字符串--strcpy strcat strcmp    (不管目标空间硬往里塞)
//长度受限制字符串--strncpy strncat strncmp   strncmp（char*a，char*b，int n）固定n个字符
//
//
//size_t strlren (const char*str)
//函数返回‘\0’前出现的字符个数 字符串已经将'\0'作为函数结束标志
// 函数的返回值是 size_t，无符号 （unsigned int）
//
//#include <stdio.h> //模拟实现(返回值为有符号数)
//int my_strlen(char* a)
//{
//	int count=0;
//   while (*a != '\0')
//	{
//		count++;
//		a++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "qwert";
//	printf("%d\n",my_strlen(arr));
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "asdfg";
//	char brr[] = "asd";
//	if (strlen(arr) - strlen(brr) < 0) //两个无符号数相减结果还是无符号数
//		printf("haha\n");                
//	else
//		printf("hehe\n");
//
//	int a = 10;
//	int b = 20;
//	unsigned int c = 10;
//	unsigned int d = 20;
//
//	printf("%d\n",a-b);
//	if (a - b > 0)
//	{
//		printf("hello\n");
//	}
//	else
//		printf("nonono\n");
//
//	printf("%d\n",c-b);            //无符号数与有符号数参与运算结果为无符号数
//	if ( c-b > 0 && a-d>0 )        //printf（%d）是全部都当成有符号数按十进制输出
//	{                        
//		printf("hello\n");
//	}
//	else
//		printf("nonono\n");
//	return 0;
//}                                 
//
//
// char* strcpy(char* destination,const char*source); 
//将 源头source拷贝到 目标 destination
//源字符串必须以‘\0’结束
//会将源字符串中的'\0'拷贝到目标空间
//目标空间必须足够大
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "qwertyu";
//	char arr2[] = "zxcv";
//	strcpy(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}
//模拟实现strcpy
//#include <assert.h>
//char* my_strcpy(char* a,const char* b)
//{
//	assert(*a != NULL);
//	assert(*b != NULL);
//	char* c = a;
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return c;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "";
//    my_strcpy(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}
//
//strcat char*strcat(char*destination,const char*source);--字符串追加
//源字符串必须以‘\0’结束
//目标空间必须足够大能容下且有\0
//目标空间必须可修改
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[] = "abc";  //空间过小
//	char b[30] = "abc\0qeqwr";
//	char c[] = "abcd\0qweqe";
//	strcat(b,c);
//	printf("%s\n",b);
//	strcat(b, b);
//	printf("%s", b);
//}
//模拟实现
//#include <stdio.h>
//#include <assert.h>
//char* my_strcat(char*a,const char*b)
//{
//	char* c = a;
//	assert(a&&b);
//	while (*a != '\0')
//	{
//		a++;
//	}
//	while (*b != '\0')
//	{
//		*a++ = *b++;
//	}
//	return c;
//}
//int main()
//{
//	char a[100] = "abcds";
//	char b[] = "wqerqrqrq";
//	printf("%s", my_strcat(a, b));
//	return 0;
//}
//
//strcmp 
//比较字符串首字符ascii码值，相同则比较下一个
//前者小于后者返回一个小于零的数字，大于返回正数，等于返回0(vs只返回1，-1)
//
//#include <string.h>
//#include <stdio.h>
//int main()
//{
//	char a[] = "abc";
//	char b[] = "abcd";
//	int c = strcmp(a,b);
//	printf("%d",c);
//	return 0;
//}
//模拟实现
//#include <stdio.h>
//#include <assert.h>
//int my_strcmp(const char*a,const char*b)
//{
//	assert(a != NULL);
//	assert(b);
//
//	while (*a == *b)
//	{
//		if (*a == '\0') 
//			return 0;
//		a++;
//		b++;
//	}
//	if (*a > *b)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char a[] = "fhusfhuds";
//	char b[] = "fhufhafha";
//	printf("%d",my_strcmp(a, b));
//	return 0;
//}
//
//
//char* strstr(const char*,const char*);
//查找子串（后者）是否存在目标空间中，存在返回子串，不存在返回空指针
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "ef";
//	const char*ret=strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s",ret);
//	}
//}
//模拟实现
//#include <stdio.h>
//#include <assert.h>
//const char* my_strstr(const char* a, const char* b)
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	const char* c = a;
//	const char* d = b;
//	const char* e = a;
//	if (*b == '\0')   
//		return b;
//	while (*e) 
//	{
//		c = e;
//		d = b;
//		while ((*c!='\0')&&(*d!='\0')&&(*c==*d))
//		{
//			c++;
//			d++;
//		}
//		if (*d == '\0')
//			return b;
//		if (*c == '\0')
//			return NULL;
//		else
//			e++;
//	}
//	return NULL;
//}
//int main()
//{
//	char a[] = "abbbbcd abbc";
//	char b[] = "abbc";
//
//		if (my_strstr(a, b)== NULL)
//	{
//		printf("子串不存在");
//	}
//	else
//	{
//		printf("%s", my_strstr(a, b));
//	}
//}
//
//char*strtok(char*str,char*sep)
//stetok从字符串里找分隔符并改成\0再返回
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或多个由sep字符串中的一个或多个分隔符分割的标计
//strtok函数的第一个参数不为NULL，函数将找到str中第一个标记，保存它在字符串中的位置
//strtok函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始查找下一个标记
//如果字符串中不存在更多的标记，则返回NULL
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = "hello@good.hahaha";
//	const char* p = "@.";
//	char s[1024] = { 0 };
//	strcpy(s, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}
//
//char*strerror(int errnum);
//返回错误码所对应的错误信息
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	char* str = strerror(1);
//	printf("%s\n", str);
//	//错误码--错误信息
//	//0--No error
//	//1--Operation not permitted
//	//2--No such file or directory
//	//errno是一个全局的错误码的变量
//	//当c语言库函数在执行过程中发生了错误，就会把对应的错误码，复制到error中
//	FILE*pf=fopen("test.txet","r");
//	if (pf == NULL)
//		printf("%s\n", strerror(errno));
//	else
//		printf("打开失败");
//	return 0;
//}
//
//
//
//#include <stdio.h>
//#include <ctype.h>
////字符分类函数 字符转换函数
////查函数库
//int main()
//{
//	char a = 'a';
//	int b=islower(a);
//	int c = isupper(a);
//	printf("%d\n%d\n",b,c);
//
//	char arr[] = "Hello World";
//	int i = 0;
//	while (arr[i])
//	{if (isupper(arr[i]))
//	{
//		arr[i] = tolower(arr[i]);
//	}
//	i++;
//	}
//	printf("%s\n",arr);
//}




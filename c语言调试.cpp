#define _CAR_SECURE_NO_WARNINGS_1 

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//		printf("%d ",i);
//	system("pause");        // 暂停  #include <stdlib.h>   
//	return 0;
//}
//Debug--排除故障（调试版本）--包含调试信息，不做任何优化，方便程序员调试
//Release--发布 （发布版本） --进行了各种优化，不能调试，使代码在大小和运行速度上是最优的，方便用户
//可以去找到debug / release文件（应用程序），要先调试一次。  system("pause"); 这样程序不会一闪而过

//**快捷键**
//F9-设置断点--和F5配合使用的，执行到断点停放处
//F5-启动调试--和F9配合使用
//F10--逐过程，不详细，如可能会跳过库函数printf的细节
//F11--逐语句，详细
//Ctrl--F5开始执行，不调试

//多使用assert(断言)--不符合条件时报错到调试控制台，const（恒量），添加必要的注释

#include <assert.h>

//自制strcopy函数
//void my_strcpy1(char* a, char* b)    //6分
//{
//	while (*b != '\0')       
//	{
//		*a = *b;
//		a++;
//		b++;
//	}
//	if(*b=='\0')  
//		*a = *b;   //不转换‘\0’会使arr1[]="hello########"
//}                                      
//void my_strcpy2(char* a, char* b)    //7分
//{
//
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//void my_strcpy3(char* a, char* b)    //8分
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//void my_strcpy4(char* a, const char* b)//加了const后当代码写错误（如写的是*b++=*a++）更好发现问题
//{
//	assert(a != NULL);                 //9分
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//char* my_strcpy5(char* a, const char* b)    //10分
//{                             //将函数的返回值作为另一个函数的参数
//	char* c = a;      //指针a在后面改变了，应先把未变的指针a保存起来
//	assert(a != NULL);                
//	assert(b != NULL);
//	
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return c;    //返回a的地址
//}
//int main()
//{
//	char arr1[] = "############";
//	char arr2[] = "############";
//	char arr3[] = "############";
//	char arr4[] = "############";
//	char arr5[] = "############";
//	char brr[] = "hello";
//	my_strcpy1(arr1, brr);
//	my_strcpy2(arr2, brr);
//	my_strcpy3(arr3, brr);
//	my_strcpy4(arr4, brr);
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	printf("%s\n", arr3);
//	printf("%s\n", arr4);
//	printf("%s\n", my_strcpy5(arr5, brr));
//}
//const与指针
//当const放在*p左边-const int* p--修饰*p--*p所代表的值不能改变，但地址p能变
//当const放在*p右边-int* const p--修饰p--p所代表的地址不能改变，但值*p能变
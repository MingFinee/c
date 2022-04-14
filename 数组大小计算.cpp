//#define _CRT_SECURE_NO_WARNINGS 1
//
//32位计算机地址大小是4字节，64位是8字节
//
//sizeof--计算大小，单位是字节
//两种情况数组名表示表示整个数组
//1.sizeof（数组名）  2.&数组名（整个数组的地址）
//
//整形数组
//#include <stdio.h>
//int main()
//{
//	int a[] = {1,2,3,4};
//	printf("%d\n", sizeof(a));    //16=4*4 sizeof(数组名)计算整个数组大小
//	printf("%d\n", sizeof(a+0));  //4/8 数组名并非单独放在（）内,此时a代表首元素地址，+0还是首元素地址
//	printf("%d\n", sizeof(*a));   //4 首元素地址解引用是首元素，int类型大小是四字节
//	printf("%d\n", sizeof(a+1));  //4/8 首元素地址+1，是第二个元素的地址
//	printf("%d\n", sizeof(a[1])); //4  第二个元素
//	printf("%d\n", sizeof(&a));   //4/8 &a取出数组的地址，数组的地址也是4/8字节大小
//	printf("%d\n", sizeof(*&a));  //16 取出数组的地址又解引用，是数组本身
//	printf("%d\n", sizeof(&a+1)); //4/8 &数组名+1跳过整个数组地址，但还是地址
//	printf("%d\n", sizeof(&a[0]));//4/8 &首元素是一个地址
//	printf("%d\n", sizeof(&a[0]+1));//4/8
//}
//
//字符数组
//#include <stdio.h>
//int main()
//{
//	char a[] = { 'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(a));        //6 
//	printf("%d\n", sizeof(a + 0));    //4/8 
//	printf("%d\n", sizeof(*a));       //1 ，char类型大小是1字节
//	printf("%d\n", sizeof(a + 1));    //4/8 
//	printf("%d\n", sizeof(a[1]));     //1  
//	printf("%d\n", sizeof(&a));       //4/8 
//	printf("%d\n", sizeof(*&a));      //6 
//	printf("%d\n", sizeof(&a + 1));   //4/8 
//	printf("%d\n", sizeof(&a[0]));    //4/8 
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//}
//
//字符串
//#include <stdio.h>
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));        //7  字符串默认最后放\0
//	printf("%d\n", sizeof(a + 0));    //4/8 
//	printf("%d\n", sizeof(*a));       //1 ，char类型大小是1字节
//	printf("%d\n", sizeof(a + 1));    //4/8 
//	printf("%d\n", sizeof(a[1]));     //1  
//	printf("%d\n", sizeof(&a));       //4/8 
//	printf("%d\n", sizeof(*&a));      //7 
//	printf("%d\n", sizeof(&a + 1));   //4/8 
//	printf("%d\n", sizeof(&a[0]));    //4/8 
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//}
//
//指针类型
//#include <stdio.h>
//int main()
//{
//	const char *p = "abcdef";
//	printf("%d\n", sizeof(p));        //4/8  字符串默认最后放\0
//	printf("%d\n", sizeof(p + 0));    //4/8 
//	printf("%d\n", sizeof(*p));       //1 ，char类型大小是1字节
//	printf("%d\n", sizeof(p+ 1));    //4/8 
//	printf("%d\n", sizeof(p[1]));     //1  
//	printf("%d\n", sizeof(&p));       //4/8 
//	printf("%d\n", sizeof(*&p));      //4/8  
//	printf("%d\n", sizeof(&p + 1));   //4/8 
//	printf("%d\n", sizeof(&p[0]));    //4/8 
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//}
//
//
//
//
//strlen--由传递的地址计算数组大小，遇到\0停止
//
//int strlen(char* a)             //a此时为arr中q的地址
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
//		int b=strlen(arr);         //传递到函数里的是第一个元素地址
//		printf("%d\n",b);
//	return 0;
//}
//
//字符串类型
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[] = "qwertyuiop";    //字符串数组记得加const
//	printf("%d\n", strlen(a));        //10 由首地址的首元素开始计算
//	printf("%d\n", strlen(a + 0));    //10 与上面的等价 
//	//printf("%d\n", strlen(*a));     // err *a是q-ASCII码是一个数字，非法访问
//	printf("%d\n", strlen(a + 1));    //9 
//	//printf("%d\n", strlen(a[1]));   //err 
//	//printf("%d\n", strlen(&a));       //随机值或者err strlen接收的是char*类型
//	printf("%d\n", strlen((char*)&a));//10 数组地址强制转化为元素的地址
//	printf("%d\n", strlen(*&a));      //10
//    printf("%d\n", strlen((char*)&a + 1));//9
//	printf("%d\n", strlen(&a[0]));    //10 
//	printf("%d\n", strlen(&a[0] + 1));//9
//}
//
//字符数组类型
//#include <stdio.h>
//#include <string.h> 
//int main()
//{
//	char a[] = {'q','w','e','r','t','y','u','i','o','p'};
//	char b[] = { 'q','w','e','r','t','y','u','i','o','p','\0'};
//	printf("%d\n", strlen(a));        //随机值 在数组中遇不到\0
//	printf("%d\n", strlen(a + 0));    //随机值
//	//printf("%d\n", strlen(*a));     //err
//	printf("%d\n", strlen(a + 1));    //随机值
//	//printf("%d\n", strlen(a[1]));   //err  
//	//printf("%d\n", strlen(&a));     //err或随机值 
//	printf("%d\n", strlen(*&a));      //随机值 
//	printf("%d\n", strlen(&a[0]));    //随机值
//	printf("%d\n", strlen(&a[0] + 1));//随机值
//	printf("%d\n", strlen(b));        //10
//	return 0;
//}
//
//二维数组的大小
//#include <stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };                   
//	printf("%d\n", sizeof(a));             //48=12*4 12个元素
//	printf("%d\n", sizeof(a[0][0]));       //4 第一行第一个元素
//	printf("%d\n", sizeof(a[0]));          //16=4*4 第一行数组的数组名a[0]，sizeof(数组名)第一行数组大小
//	printf("%d\n", sizeof(a[0]+0));        //4/8 数组名并非单独放在（）内，相当于 sizeof（地址）
//	printf("%d\n", sizeof( * (a[0] + 1))); //4 对第二行数组的数组名解引用，是第二行数组的第一个元素
//	printf("%d\n", sizeof(a+1));           //4/8 a是二维数组数组名，没有sizef和&，a是首元素地址，
//	                                            //首元素是第一行数组的地址 a+1是第二行数组的地址
//	printf("%d\n", sizeof( * (a + 1)));    //16  第二行数组的地址解引用是第二行数组，有4个元素
//	printf("%d\n", sizeof( & a[0] + 1));   //4/8 &数组名时数组名代表整个数组，+1代是第二行数组地址
//	printf("%d\n", sizeof( * (&a[0] + 1)));//16  第二行数组的地址解引用
//	printf("%d\n", sizeof( * a));          //16  a此时是数组名--第一行地址
//	printf("%d\n", sizeof(a[3]));          //16  （）里的数组并没有参与实际的运算，只是根据其类型计算
//}
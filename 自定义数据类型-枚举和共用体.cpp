#define _CRT_SECURE_NO_WARNINGS 1




//枚举类型的定义
//#include <stdio.h>
//enum color
//{ //枚举的可能取值
//	blue,         //  ,号分隔
//	red, 
//	yellow
// };
//enum S
//{
//	a =17,	
//	b=20,
//	c=16
//};
//int main()
//{
//	printf("%zd\n", sizeof(color)); //4
//	printf("%zd\n", sizeof(blue));  //4,枚举类型的大小为整形大小
//	printf("%d %d %d\n", blue,red,yellow); //初始值按顺序排默认为blue--0 red--1 yellow--2
//    //enum S a = 12;  //error--"int" 类型的值不能用于初始化 "S" 类型的实体，不能再内部定义
//	printf("%d %d %d\n",a,b,c);            //初始值可以在前面自定义
//	return 0;
//}

//可以使用define，为什么还要用enum
//枚举的优点
//1.增强代码的可读性和可维护性
//2.和define定义标识符相比，枚举有类型检查，更加严谨、
//3.防止了命名污染（封装）
//4.便于调试
//5.使用方便，一次可以定义多个常量



//联合（联合体，共用体）
//这种类型定义的变量也包含一系列的成员，特征是这些成员公用同一块空间
//联合体的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍

//联合类型的声明
//#include <stdio.h>
//union S
//{
//    char c;
//    int a;
//};
//union M
//{
//	int a;    //a的最大对齐数是4
//	char n[5];//n[5]的最大对齐数是1，相当于定义五个char
//};                          //M的最大对齐数是4，而4字节放不下n，需要再开辟4个字节空间
//int main()
//{
//    union S m;
//	union M x;
//	printf("%p\n", &m);
//	printf("%p\n", &(m.c));
//	printf("%p\n", &(m.a)); //三个的地址相同，c和a共用了同一块空间，都从起始位置往后放
//
//    printf("%zd\n", sizeof(S)); //--4
//    printf("%zd\n", sizeof(m)); //--4
//	printf("%zd\n", sizeof(x)); //8
//	
//    return 0;
//}


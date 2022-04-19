#define _CRT_SECURE_NO_WARNINGS 1

//结构是一些值的集合，这些值称为成员变量。每个成员可以是不同类型的变量

#include <stdio.h>
//结构的声明
//struct student         //struct-结构关键字 student-结构体标签  
//{                      //struct student - 结构体类型
//	char name[20];
//	int age;
//	char ID[20];
//};                     //注意 ；号
//typedef struct student     //typedef--重新起名stu
//{                     
//	char name[20];
//	int age;
//	char ID[20];
//}stu;
//int main()
//{
//	struct student a = { "张三",20,"1234567" };  
//	stu b= { "张三",20,"1234567" };   //两个名字都可以用
//	printf("%s\n",a.name);
//	printf("%d\n", a.age);
//	printf("%s\n", a.ID);  // 结构体变量.成员名
//	printf("%s\n", b.name);
//	printf("%d\n", b.age);
//	printf("%s\n", b.ID);
//}

//结构体的成员可以是标量，数组，指针，甚至是其它结构体
//struct a
//{
//	int c;
//	int d;
//	char arr[20];
//	float f;
//};
//struct b
//{
//	char brr[10];
//	struct a e;
//	char *p;
//};
//void print1(struct b k)  //把t传递给k
//{
//	printf("%lf\n", k.e.f); 
//}
//void print2(struct b* j)  //把t传递给k
//{
//	printf("%lf\n", j->e.f);  //通过地址找内容
//	printf("%lf\n", *j.e.f);err
//}
//int main()
//{
//	char arr[] = "hello";
//	struct b t = { "hehe",{10,'m',"hello world",3.14159},arr };
//	printf("%s\n",t.brr);
//	printf("%lf\n", t.e.f);	
//	printf("%s\n", t.e.arr);
//	printf("%s\n", t.p); //%s可以通过地址打印字符串，不加*
//	print1(t); //传了全部的数据
//	print2(&t);//print2方法更好，内存和效率都更加好			
//	return 0;
//}

//匿名结构体类型,省略结构体标签
//struct
//{
//	int a;
//	char b;
//}x;
//struct
//{
//	int a;
//	int b;
//}*p;
//int main()
//{
//	p = &x;   // --违法，编译器会把上面的两个声明当成完全不同的类型
//	return 0;
//}


//结构体类型不能包含本身
//struct m
//{
//	int a;
//	struct m n;  //内存无限大
//};    error
//正确自引用方式
//struct m
//{
//	int a;
//	struct m* n;  //4/8
//};

//结构体内存对齐
//1.第一个成员在与结构体变量偏移量为0的地址处
//2.其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处
     //对齐数=编译器默认的一个对齐数与该成员大小的较小值（vs中默认为8）
//3.结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
//4.如果嵌套了结构体，嵌套的结构体对齐到自己的最大对齐数的整数倍处，
    //结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍
//struct s1
//{
//    char b;   //1.把b放在内存最前面
//    int a;    //2.int占4个字节，8与4比较4取小值，对齐数为4，且为最大对齐数
//    char c;   //存b花4个字节空间，往后再取4个字节空间放a，再取4个字节放c
//};
//struct s2
//{
//    char b;  
//    char c;
//    int a;
//};
//struct s3
//{
//    char b;
//    int a; 
//    double c;
//    struct s2 d;
//};
//struct s4
//{
//    struct s2 n;
//    struct s3 m;
//};
//struct s5
//{};
//struct s6
//{
//    struct s4; struct s4; struct s4; struct s4;
//    struct s4; struct s4; struct s4; struct s4;
//    struct s2 n;
//    struct s3 m;
//};
//#include <stdio.h>
//int main()
//{
//    printf("%zd\n", sizeof(s1));            //%zd输出无符号数
//    printf("%zd\n",sizeof(s2));
//    printf("%zd\n", sizeof(s3));    //s2的最大对齐数是4，所有的最大对齐数为8，第一个8存了b a，
//                                     //第二个8存了c，第三个8存了d
//    printf("%zd\n", sizeof(s4));
//    printf("%zd\n", sizeof(s5));  //至少开辟一字节空间
//    printf("%zd\n", sizeof(s6));  //没加标签无意义 不占空间
//    return 0;
//}  //12  8  24  32  1  32

//内存对齐：适当的浪费空间，一次读取4/8（32位/64位）个字节，减少拿取到目标需要读取的次数，节省时间

//修改默认对齐数--#pragma
//#include <stdio.h>
//#pragma pack(4) //设置默认对齐数为4
//struct S {
//    char a;
//    double b;
//};
//#pragma pack() //取消设置的默认对齐数，还原默认

//offsetof --计算结构体成员相对首地址的偏移 （是宏，不是函数）  offset偏移量
//#include <stddef.h>
//#include <stdio.h>
//struct s
//{
//    char a;
//    char d;
//    char e;
//    int b;
//    double c;
//};
//int main()
//{
//    printf("%zd\n", offsetof(struct s, a));
//    printf("%zd\n", offsetof(struct s, d));
//    printf("%zd\n", offsetof(struct s, e));
//    printf("%zd\n", offsetof(struct s, b));
//    printf("%zd\n",offsetof(struct s,c));
//    return 0;
//}


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
//	//printf("%lf\n", *j.e.f);err
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

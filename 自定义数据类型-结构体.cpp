#define _CRT_SECURE_NO_WARNINGS 1

//�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա������ÿ����Ա�����ǲ�ͬ���͵ı���

#include <stdio.h>
//�ṹ������
//struct student         //struct-�ṹ�ؼ��� student-�ṹ���ǩ  
//{                      //struct student - �ṹ������
//	char name[20];
//	int age;
//	char ID[20];
//};                     //ע�� ����
//typedef struct student     //typedef--��������stu
//{                     
//	char name[20];
//	int age;
//	char ID[20];
//}stu;
//int main()
//{
//	struct student a = { "����",20,"1234567" };  
//	stu b= { "����",20,"1234567" };   //�������ֶ�������
//	printf("%s\n",a.name);
//	printf("%d\n", a.age);
//	printf("%s\n", a.ID);  // �ṹ�����.��Ա��
//	printf("%s\n", b.name);
//	printf("%d\n", b.age);
//	printf("%s\n", b.ID);
//}

//�ṹ��ĳ�Ա�����Ǳ��������飬ָ�룬�����������ṹ��
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
//void print1(struct b k)  //��t���ݸ�k
//{
//	printf("%lf\n", k.e.f); 
//}
//void print2(struct b* j)  //��t���ݸ�k
//{
//	printf("%lf\n", j->e.f);  //ͨ����ַ������
//	printf("%lf\n", *j.e.f);err
//}
//int main()
//{
//	char arr[] = "hello";
//	struct b t = { "hehe",{10,'m',"hello world",3.14159},arr };
//	printf("%s\n",t.brr);
//	printf("%lf\n", t.e.f);	
//	printf("%s\n", t.e.arr);
//	printf("%s\n", t.p); //%s����ͨ����ַ��ӡ�ַ���������*
//	print1(t); //����ȫ��������
//	print2(&t);//print2�������ã��ڴ��Ч�ʶ����Ӻ�			
//	return 0;
//}

//�����ṹ������,ʡ�Խṹ���ǩ
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
//	p = &x;   // --Υ��������������������������������ȫ��ͬ������
//	return 0;
//}


//�ṹ�����Ͳ��ܰ�������
//struct m
//{
//	int a;
//	struct m n;  //�ڴ����޴�
//};    error
//��ȷ�����÷�ʽ
//struct m
//{
//	int a;
//	struct m* n;  //4/8
//};

//�ṹ���ڴ����
//1.��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//2.������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ��
     //������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ��vs��Ĭ��Ϊ8��
//3.�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������
//4.���Ƕ���˽ṹ�壬Ƕ�׵Ľṹ����뵽�Լ�����������������������
    //�ṹ��������С��������������������Ƕ�׽ṹ��Ķ���������������
//struct s1
//{
//    char b;   //1.��b�����ڴ���ǰ��
//    int a;    //2.intռ4���ֽڣ�8��4�Ƚ�4ȡСֵ��������Ϊ4����Ϊ��������
//    char c;   //��b��4���ֽڿռ䣬������ȡ4���ֽڿռ��a����ȡ4���ֽڷ�c
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
//    printf("%zd\n", sizeof(s1));            //%zd����޷�����
//    printf("%zd\n",sizeof(s2));
//    printf("%zd\n", sizeof(s3));    //s2������������4�����е���������Ϊ8����һ��8����b a��
//                                     //�ڶ���8����c��������8����d
//    printf("%zd\n", sizeof(s4));
//    printf("%zd\n", sizeof(s5));  //���ٿ���һ�ֽڿռ�
//    printf("%zd\n", sizeof(s6));  //û�ӱ�ǩ������ ��ռ�ռ�
//    return 0;
//}  //12  8  24  32  1  32

//�ڴ���룺�ʵ����˷ѿռ䣬һ�ζ�ȡ4/8��32λ/64λ�����ֽڣ�������ȡ��Ŀ����Ҫ��ȡ�Ĵ�������ʡʱ��

//�޸�Ĭ�϶�����--#pragma
//#include <stdio.h>
//#pragma pack(4) //����Ĭ�϶�����Ϊ4
//struct S {
//    char a;
//    double b;
//};
//#pragma pack() //ȡ�����õ�Ĭ�϶���������ԭĬ��

//offsetof --����ṹ���Ա����׵�ַ��ƫ�� ���Ǻ꣬���Ǻ�����  offsetƫ����
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


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
//	//printf("%lf\n", *j.e.f);err
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

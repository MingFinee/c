#include <stdio.h>
#include <string.h>
#include <math.h>


//C�����з�Ϊ��1.�⺯����c���Ա����ṩ�ĺ���
//             2.�Զ��庯��
//***  ѧϰc���Կ⺯����www.cplusplus.com  ***

//int main()
//{
//	char a1[] = "hello\0world";
//	char a2[] = "********";
//	strcpy(a2, a1);      //string copy     �ַ�������
//	int b=strlen(a2);    //string length   �ַ�������
//	printf("%s\n",a2);   //\0��֮���ܿ�����������\0��Ϊ���� 
//	printf("%d\n",b); 
//	return 0;
//}

//memset ---memory set �ڴ�����
//int main()
//{
//	char a[] = "hello world";
//	memset(a, 'h', 5);   //��hello worldǰ5���ַ���Ϊh
//	printf("%s\n",a);
//	return 0;
//}

//�Զ��庯��
//ʵ�Σ���ʵ���������Ĳ����������ǳ��������������ʽ������������Ҫȷ����ֵ�������&q,&w
//�βΣ�ָ�������������еı������ں������ú���Զ����� �������x��y
//�����ĵ���:��ֵ���ã����һ�����ӣ�����ַ���ã�����ָ�����ӣ�
//int swap(int x,int y)    
//{
//	int a = x;
//	x = y;
//	y = a;
//	return 0;
//}   
//int main()
//{
//	int q = 12;
//	int w = 13;                   
//	swap(q,w);                   //int x=q��һ�ֺ�q����q��ֻ��x y������ȥ
//	printf("q=%d w=%d\n",q,w);   //�����û�н��������ַ�ʽ�д���
//	return 0;       //���ֽ�������ͬ�ӷ�����һ��������x y��ֵ��q w��ֵ��û�иı�
//}    
  
//**��ָ����**��ָ��yyds��
//int main()
//{
//	int a=9;
//	int b = 10;
//	int* p = &a;
//	*p=b;
//	printf("%d\n",a);
//	return 0;
//}//���Ϊ10

//int swap(int* x,int* y)    
//{                         
//	int a = *x;
//	*x = *y;
//	*y = a;
//	return 0;
//}   
//int main()
//{
//	int q = 12;          
//	int w = 13; 
//	swap(&q,&w);            //�൱��int* x=&q int* y=&w�� *x=q *y=w����ʹ����������ϵ
//	printf("q=%d w=%d\n",q,w);  
//	return 0;                 
//}


//��ϰ(һ�����뺯�����ã��ٹ��캯��)
//���Զ��庯����ӡ100��200������
//int s(int a)
//{
//    int b;
//    for (b = 2; b <= sqrt(a); b++) //b=2ʱ�ж�a%b�Ƿ����0����������������forѭ��ֱ��
//    {                                                             //ѭ�����return 1�� 
//        if (a % b == 0)     //����жϳ�a% b == 0������ѭ������ʱb�϶�С��sqrt����ִ��
//        {
//            break;
//        }
//    }
//    if (b > sqrt(a))
//    {
//        return  1;
//    }
//}
//int main()
//{   int i;
//     int count=0;
//    for(i=100;i<=200;i++)
//    {
//        if (s(i) == 1)
//        {
//            printf("%d ",i);
//            count++;
//        }
//    }
//    printf("\n%d", count);
//	return 0;
//}

//���ֲ��ҷ����������飩
//int q(int arr[], int k)  //���յ���arr������ĸ�ĵ�ַ����ʱarr[]������һ��ָ��
//{
//	int b=sizeof(arr) / sizeof(arr[0]);  //��ʱb=1
//	int i;
//	for (i = 0; i < b; i++)
//	{
//		if (arr[i] == k)
//		{
//			return 1;
//		}
//	}
//	if(i>=b)
//		return ( - 1);
//}                      //��ʱ���Ƿ���-1
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 8;
//	int a=q(arr, k);   //�����ڴ��ݵ�����ʱֻ�ᴫ����Ԫ�ص�ַ-�����ڴ�̫��ϵͳĬ��ȡ����ĸ��ַ
//	if (a !=-1)                     //���鱾��Ҳ��ָ��     
//	printf("�±�Ϊ��%d\n",a);
//	else
//		printf("�Ҳ���\n");
// return 0;
//}
//�������--��ȷ����b��ֵ�ٴ���ȥ������
//int q(int brr[],int k,int b)
//{
//	int left = 0;
//	int right = b - 1;
//	while(left<=right)
//	{
//		int i = (left + right) / 2;
//		if (brr[i] < k)
//			left = i + 1;
//		else if (brr[i] > k)
//			right = i - 1;
//		else
//			return i;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 5;
//	int b = sizeof(arr) / sizeof(arr[0]);
//	int a = q(arr,k,b);
//	if (a ==-1)
//		printf("�Ҳ���\n"); 
//	else
//		printf("�±�Ϊ��%d\n", a);
//	return 0;
//}

//����strlen����
//int s(char* a)             //a��ʱΪarr��q�ĵ�ַ
//{
//	int count = 0;  
//	while (*a != '\0')     //����ַ��Ӧ��Ԫ������ֹ��ʱ����ѭ��
//	{
//		count++;
//		a++;           //ָ���1ָ��ĵ�ַ������һ��
//	}
//	return count;      //count������\0֮ǰ��Ԫ�ؼ�¼����
//}
//int main()
//{
//	char arr[] = "qwert";
//		int b=s(arr);         //���ݵ���������ǵ�һ��Ԫ�ص�ַ
//		printf("%d\n",b);
//	return 0;
//}

//дһ��������ÿ����һ�α�ʹa��1
//int s(int* i)   //ע��Ҫ��ָ�룬��Ȼi��a�޷���ϵ
//{
//	(*i)++;    //ʹ��*i++����*��i++��
//	return *i;
//}
//int main()
//{
//	int a=0;
//	s(&a);
//	printf("%d\n",a);
//	s(&a);
//	printf("%d\n", a); 
//	s(&a);
//	printf("%d\n", a);
//	return 0;
//}


//������Ƕ�׵��ú���ʽ����
//Ƕ�׵��ã��ٸ�����
//void a()   //void����Ҫ����
//{
//	printf("lalala\n");
//}
//void b()
//{
//	int i;
//	for (i = 1; i <= 3; i++)
//		 a();
//}
//int main()
//{
//	b();
//	return 0;
//}
//��ʽ����--��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//int main()
//{
//	int a;
//	a = strlen("qwer");
//	printf("%d\n",a);
//	printf("%d\n",strlen("asdf"));       //��ʽ����--strlen�ķ���ֵ��Ϊprintf�Ĳ���
//	printf("%d\n", printf("%d\n", printf("46\n")));
//	                 //��C���Ժ������֪printf�ķ���ֵΪ��ӡ�ַ�����(\n��һ���ַ�)
//	return 0;       //����ȴ�ӡ����46\n��Ȼ���ڴ�ӡ�䷵��ֵ3���ٴ�ӡ����ֵ�ķ���ֵ2
//}

//�����ⲿ�Զ��庯��--���к��������Ͷ���
//#include "��ͷ.h"      //�Զ���ĺ����� " "--�� ��ͷ.h ����������--�����������붨��
//int main()
//{   int a = 23;        //��������������ͷ�ļ� ��ͷ.h ��( int add(int x, int y); )
//    int b = 34;        //�����Ķ������Դ�ļ� �ⲿ.cpp ��(Ҳ���Է���ͬһ�ļ���)
//	int c=add(a, b);   //��������������������ʹ�ú���
//	printf("%d",c);
//	return 0;
//}

//�����ݹ�--�����������ı�̼��ɳ�Ϊ�ݹ�
//int main()
//{
//	printf("hh\n");
//	main();     //ִ�����һ��printf�����main����main����������print-main��������ѭ��hh
//	return 0;
//}

//����һ�����õݹ����δ�ӡ��λ��
//void p(int b)
//{
//	if (b > 9)
//	{
//		p(b/10);
//	}                    //���ȴ�ӡ��ǰ���λ���������� p(123)-p(12) 3-p(1) 2 3-1 2 3
//    printf("%d ",b%10);  //%10���Դ�ӡÿһ�ݵ����һλ
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	p(a);         //�ȴ�ӡ���һλ���ٴ�ӡ�����ڶ�λ
//	return 0;
//}

//�õݹ�����strlen����(���������)
//int s(char* a)
//{
//	if (*a != '\0')
//	{
//		a++;
//		return (1 + s(a));  //return(1+return(return��1+.....+return (1+return 0)))
//	}
//	else return 0;
//}
//int main()
//{
//	char arr[] = "qwert";
//	int b = s(arr);         //���ݵ���������ǵ�һ��Ԫ�ص�ַ
//	printf("%d\n", b);
//	return 0;
//}
//�õݹ���n�Ľ׳�(���������)
//int s(int a)
//{
//	if (a > 1)
//		return (a * s(a - 1));
//	else if (a == 1)
//		return 1;
//	else if (a == 0)
//		return 0;
//}
//int main()
//{
//	int x = 5;
//	int y=s(x);
//	printf("�׳�Ϊ��%d",y);
//	return 0;
//}

//������n��̨�ף�һ��ֻ����1��2�ף����ж���������
//int s(int a)
//{
//	if (a > 2)
//		return s(a - 1) + s(a - 2);//��Ϊһ�ο�����1��2�ף���ô��n�׷�����=��n-1��+��n-2��
//	else if (a == 2)         //n=1--1  
//		return 2;            //n=2--2  
//	else if (a == 1)         //n=3--3  
//		return 1;            //n=4--5
//}                   //��n=1��n=2�����Ϲ�ϵ�������ó������������һ����3����Ҳ�ó�n=3�����
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int b = s(n);
//	printf("%d\n",b);
//	return 0;
//}
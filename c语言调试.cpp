#define _CAR_SECURE_NO_WARNINGS_1 

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i;
//	for (i = 0; i < 10; i++)
//		printf("%d ",i);
//	system("pause");        // ��ͣ  #include <stdlib.h>   
//	return 0;
//}
//Debug--�ų����ϣ����԰汾��--����������Ϣ�������κ��Ż����������Ա����
//Release--���� �������汾�� --�����˸����Ż������ܵ��ԣ�ʹ�����ڴ�С�������ٶ��������ŵģ������û�
//����ȥ�ҵ�debug / release�ļ���Ӧ�ó��򣩣�Ҫ�ȵ���һ�Ρ�  system("pause"); �������򲻻�һ������

//**��ݼ�**
//F9-���öϵ�--��F5���ʹ�õģ�ִ�е��ϵ�ͣ�Ŵ�
//F5-��������--��F9���ʹ��
//F10--����̣�����ϸ������ܻ������⺯��printf��ϸ��
//F11--����䣬��ϸ
//Ctrl--F5��ʼִ�У�������

//��ʹ��assert(����)--����������ʱ�������Կ���̨��const������������ӱ�Ҫ��ע��

#include <assert.h>

//����strcopy����
//void my_strcpy1(char* a, char* b)    //6��
//{
//	while (*b != '\0')       
//	{
//		*a = *b;
//		a++;
//		b++;
//	}
//	if(*b=='\0')  
//		*a = *b;   //��ת����\0����ʹarr1[]="hello########"
//}                                      
//void my_strcpy2(char* a, char* b)    //7��
//{
//
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//void my_strcpy3(char* a, char* b)    //8��
//{
//	assert(a != NULL);
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//void my_strcpy4(char* a, const char* b)//����const�󵱴���д������д����*b++=*a++�����÷�������
//{
//	assert(a != NULL);                 //9��
//	assert(b != NULL);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//char* my_strcpy5(char* a, const char* b)    //10��
//{                             //�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	char* c = a;      //ָ��a�ں���ı��ˣ�Ӧ�Ȱ�δ���ָ��a��������
//	assert(a != NULL);                
//	assert(b != NULL);
//	
//	while (*a++ = *b++)
//	{
//		;
//	}
//	return c;    //����a�ĵ�ַ
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
//const��ָ��
//��const����*p���-const int* p--����*p--*p�������ֵ���ܸı䣬����ַp�ܱ�
//��const����*p�ұ�-int* const p--����p--p������ĵ�ַ���ܸı䣬��ֵ*p�ܱ�
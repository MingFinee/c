//#define _CRT_SECURE_NO_WARNINGS 1
//
//���ַ�������--strlen
//���Ȳ������ַ���--strcpy strcat strcmp    (����Ŀ��ռ�Ӳ������)
//�����������ַ���--strncpy strncat strncmp   strncmp��char*a��char*b��int n���̶�n���ַ�
//
//
//size_t strlren (const char*str)
//�������ء�\0��ǰ���ֵ��ַ����� �ַ����Ѿ���'\0'��Ϊ����������־
// �����ķ���ֵ�� size_t���޷��� ��unsigned int��
//
//#include <stdio.h> //ģ��ʵ��(����ֵΪ�з�����)
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
//	if (strlen(arr) - strlen(brr) < 0) //�����޷����������������޷�����
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
//	printf("%d\n",c-b);            //�޷��������з���������������Ϊ�޷�����
//	if ( c-b > 0 && a-d>0 )        //printf��%d����ȫ���������з�������ʮ�������
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
//�� Դͷsource������ Ŀ�� destination
//Դ�ַ��������ԡ�\0������
//�ὫԴ�ַ����е�'\0'������Ŀ��ռ�
//Ŀ��ռ�����㹻��
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
//ģ��ʵ��strcpy
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
//strcat char*strcat(char*destination,const char*source);--�ַ���׷��
//Դ�ַ��������ԡ�\0������
//Ŀ��ռ�����㹻������������\0
//Ŀ��ռ������޸�
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[] = "abc";  //�ռ��С
//	char b[30] = "abc\0qeqwr";
//	char c[] = "abcd\0qweqe";
//	strcat(b,c);
//	printf("%s\n",b);
//	strcat(b, b);
//	printf("%s", b);
//}
//ģ��ʵ��
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
//�Ƚ��ַ������ַ�ascii��ֵ����ͬ��Ƚ���һ��
//ǰ��С�ں��߷���һ��С��������֣����ڷ������������ڷ���0(vsֻ����1��-1)
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
//ģ��ʵ��
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
//�����Ӵ������ߣ��Ƿ����Ŀ��ռ��У����ڷ����Ӵ��������ڷ��ؿ�ָ��
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "ef";
//	const char*ret=strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s",ret);
//	}
//}
//ģ��ʵ��
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
//		printf("�Ӵ�������");
//	}
//	else
//	{
//		printf("%s", my_strstr(a, b));
//	}
//}
//
//char*strtok(char*str,char*sep)
//stetok���ַ������ҷָ������ĳ�\0�ٷ���
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0��������sep�ַ����е�һ�������ָ����ָ�ı��
//strtok�����ĵ�һ��������ΪNULL���������ҵ�str�е�һ����ǣ����������ַ����е�λ��
//strtok�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ������һ�����
//����ַ����в����ڸ���ı�ǣ��򷵻�NULL
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
//���ش���������Ӧ�Ĵ�����Ϣ
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	char* str = strerror(1);
//	printf("%s\n", str);
//	//������--������Ϣ
//	//0--No error
//	//1--Operation not permitted
//	//2--No such file or directory
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//��c���Կ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬���Ƶ�error��
//	FILE*pf=fopen("test.txet","r");
//	if (pf == NULL)
//		printf("%s\n", strerror(errno));
//	else
//		printf("��ʧ��");
//	return 0;
//}
//
//
//
//#include <stdio.h>
//#include <ctype.h>
////�ַ����ຯ�� �ַ�ת������
////�麯����
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




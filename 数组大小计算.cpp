//#define _CRT_SECURE_NO_WARNINGS 1
//
//32λ�������ַ��С��4�ֽڣ�64λ��8�ֽ�
//
//sizeof--�����С����λ���ֽ�
//���������������ʾ��ʾ��������
//1.sizeof����������  2.&����������������ĵ�ַ��
//
//��������
//#include <stdio.h>
//int main()
//{
//	int a[] = {1,2,3,4};
//	printf("%d\n", sizeof(a));    //16=4*4 sizeof(������)�������������С
//	printf("%d\n", sizeof(a+0));  //4/8 ���������ǵ������ڣ�����,��ʱa������Ԫ�ص�ַ��+0������Ԫ�ص�ַ
//	printf("%d\n", sizeof(*a));   //4 ��Ԫ�ص�ַ����������Ԫ�أ�int���ʹ�С�����ֽ�
//	printf("%d\n", sizeof(a+1));  //4/8 ��Ԫ�ص�ַ+1���ǵڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1])); //4  �ڶ���Ԫ��
//	printf("%d\n", sizeof(&a));   //4/8 &aȡ������ĵ�ַ������ĵ�ַҲ��4/8�ֽڴ�С
//	printf("%d\n", sizeof(*&a));  //16 ȡ������ĵ�ַ�ֽ����ã������鱾��
//	printf("%d\n", sizeof(&a+1)); //4/8 &������+1�������������ַ�������ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));//4/8 &��Ԫ����һ����ַ
//	printf("%d\n", sizeof(&a[0]+1));//4/8
//}
//
//�ַ�����
//#include <stdio.h>
//int main()
//{
//	char a[] = { 'a','b','c','d','e','f'};
//	printf("%d\n", sizeof(a));        //6 
//	printf("%d\n", sizeof(a + 0));    //4/8 
//	printf("%d\n", sizeof(*a));       //1 ��char���ʹ�С��1�ֽ�
//	printf("%d\n", sizeof(a + 1));    //4/8 
//	printf("%d\n", sizeof(a[1]));     //1  
//	printf("%d\n", sizeof(&a));       //4/8 
//	printf("%d\n", sizeof(*&a));      //6 
//	printf("%d\n", sizeof(&a + 1));   //4/8 
//	printf("%d\n", sizeof(&a[0]));    //4/8 
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//}
//
//�ַ���
//#include <stdio.h>
//int main()
//{
//	char a[] = "abcdef";
//	printf("%d\n", sizeof(a));        //7  �ַ���Ĭ������\0
//	printf("%d\n", sizeof(a + 0));    //4/8 
//	printf("%d\n", sizeof(*a));       //1 ��char���ʹ�С��1�ֽ�
//	printf("%d\n", sizeof(a + 1));    //4/8 
//	printf("%d\n", sizeof(a[1]));     //1  
//	printf("%d\n", sizeof(&a));       //4/8 
//	printf("%d\n", sizeof(*&a));      //7 
//	printf("%d\n", sizeof(&a + 1));   //4/8 
//	printf("%d\n", sizeof(&a[0]));    //4/8 
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//}
//
//ָ������
//#include <stdio.h>
//int main()
//{
//	const char *p = "abcdef";
//	printf("%d\n", sizeof(p));        //4/8  �ַ���Ĭ������\0
//	printf("%d\n", sizeof(p + 0));    //4/8 
//	printf("%d\n", sizeof(*p));       //1 ��char���ʹ�С��1�ֽ�
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
//strlen--�ɴ��ݵĵ�ַ���������С������\0ֹͣ
//
//int strlen(char* a)             //a��ʱΪarr��q�ĵ�ַ
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
//		int b=strlen(arr);         //���ݵ���������ǵ�һ��Ԫ�ص�ַ
//		printf("%d\n",b);
//	return 0;
//}
//
//�ַ�������
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char a[] = "qwertyuiop";    //�ַ�������ǵü�const
//	printf("%d\n", strlen(a));        //10 ���׵�ַ����Ԫ�ؿ�ʼ����
//	printf("%d\n", strlen(a + 0));    //10 ������ĵȼ� 
//	//printf("%d\n", strlen(*a));     // err *a��q-ASCII����һ�����֣��Ƿ�����
//	printf("%d\n", strlen(a + 1));    //9 
//	//printf("%d\n", strlen(a[1]));   //err 
//	//printf("%d\n", strlen(&a));       //���ֵ����err strlen���յ���char*����
//	printf("%d\n", strlen((char*)&a));//10 �����ַǿ��ת��ΪԪ�صĵ�ַ
//	printf("%d\n", strlen(*&a));      //10
//    printf("%d\n", strlen((char*)&a + 1));//9
//	printf("%d\n", strlen(&a[0]));    //10 
//	printf("%d\n", strlen(&a[0] + 1));//9
//}
//
//�ַ���������
//#include <stdio.h>
//#include <string.h> 
//int main()
//{
//	char a[] = {'q','w','e','r','t','y','u','i','o','p'};
//	char b[] = { 'q','w','e','r','t','y','u','i','o','p','\0'};
//	printf("%d\n", strlen(a));        //���ֵ ��������������\0
//	printf("%d\n", strlen(a + 0));    //���ֵ
//	//printf("%d\n", strlen(*a));     //err
//	printf("%d\n", strlen(a + 1));    //���ֵ
//	//printf("%d\n", strlen(a[1]));   //err  
//	//printf("%d\n", strlen(&a));     //err�����ֵ 
//	printf("%d\n", strlen(*&a));      //���ֵ 
//	printf("%d\n", strlen(&a[0]));    //���ֵ
//	printf("%d\n", strlen(&a[0] + 1));//���ֵ
//	printf("%d\n", strlen(b));        //10
//	return 0;
//}
//
//��ά����Ĵ�С
//#include <stdio.h>
//int main()
//{
//	int a[3][4] = { 0 };                   
//	printf("%d\n", sizeof(a));             //48=12*4 12��Ԫ��
//	printf("%d\n", sizeof(a[0][0]));       //4 ��һ�е�һ��Ԫ��
//	printf("%d\n", sizeof(a[0]));          //16=4*4 ��һ�������������a[0]��sizeof(������)��һ�������С
//	printf("%d\n", sizeof(a[0]+0));        //4/8 ���������ǵ������ڣ����ڣ��൱�� sizeof����ַ��
//	printf("%d\n", sizeof( * (a[0] + 1))); //4 �Եڶ�������������������ã��ǵڶ�������ĵ�һ��Ԫ��
//	printf("%d\n", sizeof(a+1));           //4/8 a�Ƕ�ά������������û��sizef��&��a����Ԫ�ص�ַ��
//	                                            //��Ԫ���ǵ�һ������ĵ�ַ a+1�ǵڶ�������ĵ�ַ
//	printf("%d\n", sizeof( * (a + 1)));    //16  �ڶ�������ĵ�ַ�������ǵڶ������飬��4��Ԫ��
//	printf("%d\n", sizeof( & a[0] + 1));   //4/8 &������ʱ�����������������飬+1���ǵڶ��������ַ
//	printf("%d\n", sizeof( * (&a[0] + 1)));//16  �ڶ�������ĵ�ַ������
//	printf("%d\n", sizeof( * a));          //16  a��ʱ��������--��һ�е�ַ
//	printf("%d\n", sizeof(a[3]));          //16  ����������鲢û�в���ʵ�ʵ����㣬ֻ�Ǹ��������ͼ���
//}
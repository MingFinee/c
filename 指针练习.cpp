#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int* p = (int *)(&a + 1);     //����������1һ����ַ��������ĵ�ַǿ��ת��Ϊint*���ͣ�
//	printf("%d %d",*(a+1),*(p-1));//2 5 p-1��p��ǰ��һ��int*���͵ĵ�ַ��Ҳ����5�ĵ�ַ
//	return 0;
//}

//#include <stdio.h>
//struct test
//{
//	int num; 
//	char * name;
//	short date;
//	char a[2];
//	short b[4]; 
//}*p;
////��֪struct test ���ͱ����Ĵ�С��32���ֽ�
//int main()
//{
//	p=(struct test *) 0x100000;      //��0x1000000ǿ��ת��Ϊ(struct test *)
//	printf("%p\n", p + 0x1);         //struct test���ͱ����Ĵ�С��32���ֽ� ����ַ+1�Ǽ�һ�����ʹ�С
//	printf("%p\n", (unsigned long )p + 0x1);//ǿ��ת��Ϊ���Σ�p��������� 0x100000+1=0x100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x100004
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[4] = { 1,2,3,4 };  //���ڴ��еĴ洢Ϊ 01000000 02000000 03000000 04000000
//	int* p1 = (int*)(&a + 1);
//	int* p2 = (int*)((int)a + 1); //ǿ��ת����Ԫ�ص�ַΪ���Σ���a[1]��ַΪ0x00000007
//	                              //��int*������int��a+1��--0x00000008
//	                              //��ַ����1���ֽڣ���a[0]����4�ֽڴ洢�ģ�����
//	                              //*p2--00000002--��С�˴洢�������02000000
//	printf("%x %x",p1[-1],*p2);  //p1[-1]=*(p1-1)
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0,1),(1,2),(2,3) };//ע���Ƕ��ű��ʽ{1��2��3}
//	int* p = a[0]; //��һ����1��2��p��1�ĵ�ַ
//	printf("%d",p[0]);//p[0]�൱��*��p+0��
//	return 0;
//}//���Ϊ1

//#include <stdio.h>
//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p =(int(*)[4]) a;
//	printf("%d\n", &p[4][2]- &a[4][2]);//-4 p[4][2]=*((p+4)+2).������p������4����ַ�ĵ�����Ԫ��
// 	printf("%p\n", &p[4][2]- &a[4][2]);//-4�ĵ�ַ0xFFFFFFFFFFFFFFFC�����ֵĵ�ַ���ǲ����16������ʽ
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = (int*)(&a + 1);  //&a�����������飬+1������������ά���飬p1ָ��10����
//	int* p2 = *(a + 1);//*��a+1��=�ڶ�������������������--�õ����飬������int*���͵�
//	                   //pָ��6
//	printf("%d\n", **(a + 1));
//	printf("%d %d", *(p1 - 1), *(p2 - 1));
//	//int����ָ��-1��ָ���ڴ���ǰ��4�ֽڵ�Ԫ��
//	return 0; //10  5
//}


//#include <stdio.h>
//int main()
//{
//    char b[] = "abc"; //abc���ַ���,��������ʽ
//	const char* a[] = {"abc", "bcd", "cde"};
//	const char** pa = a; //pa��char*���͵�abc�ĵ�ַ������p��char**����
//	pa++;                //pa�ǵڶ���Ԫ��bcd��ַ
//	printf("%s",*(pa));  //*paͨ��bcd�ĵ�ַ�ҵ�bcd
//}
// 
//#include <stdio.h>
//int main()
//{
//	const char* c[] = { "hello","forever","succedd","world" };
//	const char** cp[] = { c + 3,c + 2,c + 1,c };
//	const char*** cpp = cp;
//
//	printf("%s\n", **++cpp);      
//	printf("%s\n", *--*++cpp+3);
//	printf("%s\n", *cpp[-2]+3);
//	printf("%s\n", cpp[-1][-1]+1);
//	return 0;
//}

//��Χ�ڵ�ˮ�ɻ���
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a;
//	for (a=1;a<=100000;a++) 
//	{
//		int count = 0;
//		int n = a;
//		while (n)
//		{
//			count++;
//			n = n / 10;
//		}
//		int m = a;
//		int sum = 0;
//		while (m)
//		{
//			sum += pow(m % 10, count);
//			m = m / 10;
//		}
//		if (a==sum)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int line, i;
//	scanf("%d", &line);
//	for (i=0;i<line;i++)
//	{
//		int j;
//		for (j=0;j<line-i-1;j++)
//		{
//			printf(" ");
//		}
//		for (j=0;j<2*i+1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		int j;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j=0;j<2*(line-i-1)-1;j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ˮ1Ԫһƿ��������ƿ��һƿ����money�������ȶ���ƿ
//#include <stdio.h>
//int main()
//{
//
//	int money;
//	scanf("%d",&money);
//	int drink= money;
//	int empty = drink;
//	while (empty > 1)
//	{
//		drink += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d",drink);
//	return 0;
//}


//������ż����
//#include <stdio.h>
//void print(int* a, int x)
//{
//	int i;
//	for (i =0; i < x; i++)
//	{
//		printf("%d ",*(a+i));
//	}
//}
//void move(int a[], int x)
//{
//	int* left = a;
//	int* right = &a[x - 1];
//	while (left < right)
//	{
//		while (left < right && (*left) % 2 == 1)
//		{
//			left++;
//		}
//		while (left < right && (*right) % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int x =* left;
//			*left = *right;
//			*right = x;
//		}
//		left++;
//		right --;
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",sz);
//	move(arr,sz);
//	print(arr, sz);
//}


//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int a[10][10] = {};
//	int i, j;
//	for(i=0;i<10;i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//				a[i][j] = 1;
//			if (j == i)
//				a[i][j] = 1;
//			if (i > 1 && j > 0)
//				a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i+1; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//�����֣�1�ˣ���
//������֤�ʣ�A��������
//            B:��C
//            C:��D
//            D��C�ں�˵
//��֪����ֻ��һ��˵���Ǽٻ�
//#include <stdio.h>
//int main()
//{
//	char x;     //������x
//	for (x = 'A'; x <= 'D'; x++)            //���μ�������
//	{
//		if ((x != 'A') + (x == 'C') + (x == 'D') + (x != 'D') == 3)  //��ֻ������֤��Ϊ��ʱȷ������
//			printf("����Ϊ:%c",x);
//	}
//	return 0;
//}

//5������ˮ������ȷ������
//a��b�ǵڶ����ҵ���
//b:���ǵڶ���e����
//c:���ǵ�һ��d�ڶ�
//d:c����ҵ���
//e:�ҵ��ģ�a��һ
//��֪ÿλѡ��˵��һ��
//#include <stdio.h>
//int main() 
//{
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++) 
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <=5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <=5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) +
//							((b == 2) + (e == 4) == 1) +
//							((c == 1) + (d == 2) == 1) +
//							((e == 4) + (a == 1) == 1) +
//							((c == 5) + (d == 3) == 1) == 5)
//						{
//							if (a*b*c*d*e==120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d",a,b,c,d,e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[] = "hello";
//	char brr[] = "hello";
//	const char*p1= "hello";
//	const char*p2= "hello";
//	if (arr == brr)
//		printf("a\n");
//	else
//		printf("b\n");   //������Ȼһ����������ԵĿռ䲻һ��
//	if (p1 == p2)
//		printf("c\n");   //�����ַ������ܸ��ģ������ֻ��ʹ��һ����ַ
//	else
//		printf("d\n");
//
//	return 0;
//}  //b c

//�����ַ�k��--��2�� abcd--cdab
//������ⷨ
//#include <stdio.h>
//void left_move1(char arr[], int x, int y)
//{
//	int i;
//	for (i = 0; i < x; i++)
//	{
//		int a = arr[0];
//		int j;
//		for (j = 0; j < y - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[y-1] = a;
//	}
//	printf("%s",arr);
//}
//int main()
//{
//	int k;
//	scanf("%d",&k);    //��������
//	char arr[]="abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	left_move1(arr,k,sz);
//	return 0;
//}
//������ת��
//#include <assert.h>
//#include <stdio.h>
//void reverse(char* a, char* b)
//{
//	while (a<b)
//	{
//		char c = *a;
//		*a = *b;
//		*b = c;
//		a++;
//		b--;
//	}
//}
//void left_move2(char arr[], int x, int y)
//{
//	assert(x<=y);
//	reverse(arr,arr+x-1);
//	reverse(arr+x,arr+y-1);
//	reverse(arr,arr+y-1);
//	printf("%s", arr);
//}
//int main()
//{
//	int k;
//	scanf("%d",&k);
//	char arr[]="abcdef";
//	int sz = sizeof(arr) / sizeof(arr[0])-1;
//	left_move2(arr, k, sz);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char a[] = "abcdef";
//	char b[] = "abcdef";
//	strcat(a, b);
//	printf("%s",a);
//	return 0;
//}
 

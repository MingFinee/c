//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//void*memcpy(void*destinantion,const void*source,size_t num)
//������source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ��
//�������������\0��ʱ������ͣ����
//���source��destination���κ��ص������ƵĽ������δ�����
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//struct s
//{
//	char name[20];
//	int age;
//};
//ģ��ʵ��
//void* my_memcpy(void* a,const void* b, size_t n)
//{
//	assert(a!=0);
//	assert(b!=0);
//	char* pa = (char*)a;
//	char* pb = (char*)b;
//	void* c = pa;
//	while (n--)
//	{
//		*pa = *pb;
//		pa++;
//		pb++;
//	} 
//	return c;
//}
//void* my_memmove(void* a, const void* b, size_t n)
//{
//	assert(a);
//	assert(b);
//	char* pa = (char*)a;
//	char* pb = (char*)b;
//	void* c = pa;
//	if (pa < pb||pa>(pb+n))
//	{
//
//		while(n--)
//		{
//			*pa = *pb;
//			pa++;
//			pb++;
//		}
//	}
//	else
//	{
//		while(n--)
//		{
//			*(pa + n) = *(pb + n);//�Ӻ���ǰ����
//		}
//	}
//	return c;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int brr[10] = { 0 };               //ע���ռ��С
//	memcpy(brr, arr, sizeof(arr));     //
//
//	struct s a[] = { {"����",20},{"����",19} };
//	struct s b[10] = { 0 };
//	memcpy(b, a,sizeof(a));
//	
//	char crr[] = "qwert";
//	char drr[10] = {0};
//	memcpy(drr, crr, 2);
//
//	char err[] = "qwert";
//	char frr[10] = { 0 };
//	my_memcpy(frr, err, sizeof(err));
//
//	�ڴ��ص�����
//	int grr[] = {1,2,3,4,5,6,7,8,9,10};//Ŀ��Ϊȡ12345�滻34567
//	my_memcpy(grr+2,grr,20);   //20���ֽ�--int���͵�5��Ԫ��
//	                           ���Ϊ1 2 1 2 1 2 1 8 9 10 ���my_memcpy�޷������ڴ��ص�����
//
//	int jrr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(jrr+2,jrr,20);  //���Խ���ڴ��ص�����
//
//	int hrr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(hrr + 2, hrr, 20);  
//	int irr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(irr + 2, irr, 20);   //�⺯��memcpy,memmove����ʤ���ڴ��ص�����
//	return 0;                   
//}
//
//
//int memcmp(const void*a,const void*b,size_t num);
//�Ƚ�a��b��ǰnum���ֽ�
//��strcmp�ķ���ֵ����(С�ڷ��ظ���)
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,4,4,3 };
//	printf("%d\n",memcmp(arr1, arr2, 8));
//	printf("%d\n", memcmp(arr1, arr2, 9));
//}
//
//memset--�ڴ�����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "";
//	memset(arr,'1',10);
//	printf("%s\n",arr);
//
//	int brr[] = {1,2,3,4,5};
//	memset(brr,1,20); //20���ֽڸĳ�1 -- 01010101 01010101 01010101 01010101 01010101
//	int i =0;         //�ڴ�Ϊ16���ƻ�Ϊ10�������  01010101--16843009
//	for(i=0;i<sizeof(brr)/sizeof(brr[0]);i++)
//	{
//		printf("%d\n",brr[i]);
//	}
//	return 0;
//}
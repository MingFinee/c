//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//void*memcpy(void*destinantion,const void*source,size_t num)
//函数从source的位置开始向后复制num个字节的数据到destination的内存位置
//这个函数遇到‘\0’时并不会停下来
//如果source与destination有任何重叠，复制的结果都是未定义的
//#include <stdio.h>
//#include <string.h>
//#include <assert.h>
//struct s
//{
//	char name[20];
//	int age;
//};
//模拟实现
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
//			*(pa + n) = *(pb + n);//从后往前复制
//		}
//	}
//	return c;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int brr[10] = { 0 };               //注明空间大小
//	memcpy(brr, arr, sizeof(arr));     //
//
//	struct s a[] = { {"张三",20},{"李四",19} };
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
//	内存重叠问题
//	int grr[] = {1,2,3,4,5,6,7,8,9,10};//目标为取12345替换34567
//	my_memcpy(grr+2,grr,20);   //20个字节--int类型的5个元素
//	                           结果为1 2 1 2 1 2 1 8 9 10 因此my_memcpy无法处理内存重叠问题
//
//	int jrr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(jrr+2,jrr,20);  //可以解决内存重叠问题
//
//	int hrr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(hrr + 2, hrr, 20);  
//	int irr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(irr + 2, irr, 20);   //库函数memcpy,memmove可以胜任内存重叠问题
//	return 0;                   
//}
//
//
//int memcmp(const void*a,const void*b,size_t num);
//比较a，b的前num个字节
//与strcmp的返回值相似(小于返回负数)
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
//memset--内存设置
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = "";
//	memset(arr,'1',10);
//	printf("%s\n",arr);
//
//	int brr[] = {1,2,3,4,5};
//	memset(brr,1,20); //20个字节改成1 -- 01010101 01010101 01010101 01010101 01010101
//	int i =0;         //内存为16进制化为10进制输出  01010101--16843009
//	for(i=0;i<sizeof(brr)/sizeof(brr[0]);i++)
//	{
//		printf("%d\n",brr[i]);
//	}
//	return 0;
//}
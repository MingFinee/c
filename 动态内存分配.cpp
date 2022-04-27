#define _CRT_SECURE_NO_WARNINGS 1
//C/C++程序内存分配的的几个区域:
//1.栈区（stack）：在执行函数时，函数内局部变量的存储单元都可以在栈上创建，函数执行结束时
    //这些内存单元自动被释放。栈内存分配运算内置处理器的指令集中，效率很高，但是分配的内存
    //容量有限。栈区主要存放运行函数而分配的局部变量，函数参数，返回数据，返回地址等

//2.堆区（heap）：一般由程序员分配释放，若程序员不释放，程序结束时可能由OS回收
     // malloc，calloc，realloc
 
//3.静态区（static）存放全局变量，静态数据/程序结束后由系统释放

//4.代码段：存放函数体（类成员函数与全局函数）的二进制码

//malloc与free
//void* malloc (size_t size);   void free (void* ptr);
//#include <stdlib.h>
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//int main()
//{
//	int* p =(int*) malloc(10*sizeof(int));//向内存申请10个整形空间，也可以输入40
//  //开辟失败会返回空指针
//	if(p==NULL)
//	{   //如果开辟失败打印错误原因
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{ //正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ",p[i]);
//		}
//	}
//	//当动态申请的空间不再使用时应该还给操作系统
//	free(p);   
//	//指针p还可以管理那个空间，应该赋值为空指针，这样才能完全断开联系
//	p = NULL;
//
//	return 0;
//}


//free使用时注意：
//free不能释放非动态内存开辟的空间
//*p++=i 之后free(p)时会报错，此时p不指向起始位置 
//不能多次释放，每次释放后赋空指针可以多次释放



//calloc  void* calloc(size_t num, size_t size); num元素个数 size元素大小
//#include <stdlib.h>
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));
//	//calloc会把空间的每个字节初始化为0，而malloc不会
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//
//	}
//	printf("\n");
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{ 
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;   
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc  void* realloc (void* ptr, size_t size); 
// size：New size for the memory block, in bytes.
//调整动态开辟内存空间的大小


//#include <stdlib.h>
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	//calloc会把空间的每个字节初始化为0，而malloc不会
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	printf("\n");
//	//假设这里40个字节空间不够用了
//	int* pr = (int*)realloc(p, 40);
//	//realloc使用注意事项
//	//1.如果pr指向的空间之后有足够的内存空间可以追加，则直接追加，返回pr
//	//2.若pr指向的空间之后没有有足够的内存空间可以追加，则函数会重新找一个新的空间开辟
//	   //并且把原来内存中的数据拷贝到新空间去，释放旧空间，返回新空间
//	//3.用一个新的变量来接受返回值，防止追加失败后把原指针改成空指针
//	
//	if (pr == NULL)
//	{
//		printf("%s\n", strerror(errno));  //注意判断是否开辟成功
//		return 0;
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < 20; i++)
//		{
//			*(pr + i) = i;
//			printf("%d ", *(pr + i));
//		}
//
//		free(pr);   //realloc会把原空间自动释放
//		pr = NULL;
//
//	}
//	return 0;
//}



//柔性数组
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//struct S
//{
//    int a;
//    int arr[]; //柔性数组成员--未知大小的-数组大小是可以调整的
//               //也可以arr[0]
//};
//int main()
//{
//    printf("%zd\n",sizeof(struct S)); //此时struct S的大小为4字节
//    struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));  //额外扩展20个字节
//    if (p != NULL)
//    {
//        p->a = 10;
//        int i;
//        for (i = 0; i < 5; i++) 
//        {
//            p->arr[i] = i;
//        }
//    }
//    struct S* ps = (struct S* )realloc(p, 40);
//    if (ps != NULL)
//    {
//        p = ps;
//        int i;
//        for (i = 5; i < 15; i++)
//        {
//            *((p->arr)+i) = i;
//        }
//        for (i = 0; i < 15; i++)
//        {
//            printf("%d ", *((p->arr) + i));
//        }
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

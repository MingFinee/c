#define _CRT_SECURE_NO_WARNINGS 1

//指针大小固定4/8个字节（32位/64位）
//指针类型决定了指针+-的步长

//#include <stdio.h>
//int main()
//{
//	const char* p = "asdf";//"asdf"是常量字符串，要加const
//	printf("%s\n", p);     //p存的是首元素地址，但%s会通过首元素打印字符串直到\0
//	printf("%c", *p);      //*p存的是首元素
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char arr[] = "abcd";
//	char brr[] = "abcd";
//	const char* pa = "abcd";
//	const char* pb = "abcd";
//	if (arr == brr)
//	{
//		printf("哈哈\n");
//	}
//	else 
//	{
//		printf("呵呵\n");//虽然两个字符串一样，但其分别存在不同的空间，地址不同
//	}
//
//	if(pa==pb)
//	{
//		printf("哈哈\n");//因为是常量字符串不能被修改而且又一样，于是为了节省空间两个指针指向同一个空间
//	}
//	else
//	{
//		printf("呵呵\n");
//	}
//	return 0;
//}//结果为呵呵 哈哈

//**指针数组**
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char brr[5] = { 0 };//字符数组
//	int* parr[5];       //存放指针整形的数组--指针数组
//	char* pbrr[6];      //存放指针整形的数组--指针数组
//
//}
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6 };
//	int arr2[] = { 2,3,4,5,6,7 };
//	int arr3[] = { 3,4,5,6,7,8 };
//	int* p[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 6; j++)
//		{
//			printf(" %d" ,* (p[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//**数组指针**
//#include <stdlib.h>
//int main()
//{
//	int* p = NULL; //p是整形指针-指向整形的指针
//	char* m = NULL;//m是字符指针-指向字符的指针
//	int arr[] = { 1,2,3,4,5 };
//	int(*n)[5] = &arr;      //n是数组指针
//	int* q[5] = { arr };    //q[5]是指针数组
//	return 0;
//}
 
//int main()
//{
//	int arr[5];
//	int(*pa)[5] = &arr;
//	int* brr[5];
//	int*(*pb)[5] =&brr;   //brr是int*类型
//	return 0;             
//}

//#include <stdio.h>
//void print(int arr[3][5], int r, int c)
//{
//	int i, j;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%-2d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (* p)[5], int r, int c)
//{
//	int i, j;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%-2d ", (*(p + i))[j]); //--*(p+i)==p[i]==arr[i]
//			printf("%-2d ", *(*(p+i)+j));   //--*(p[i]+j) -- arr[i][j] 
//		}
//		printf("\n");     
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	print(arr, 3, 5);   //数组名为首元素地址--{1，2，3，4，5}的地址
//	print2(arr, 3, 5);  //传首元素地址，int(*p)[5]==&{1,2,3,4,5}
//	return 0;           //当p加1时地址加1，于是跳到下个数组元素
//}

//**数组的传参**

//一维数组传参
//#include <stdio.h>
//void tset1(int arr)   //err
//{}
//void tset1(int arr[]) //正确
//{}
//void tset1(int arr[10])//正确
//{}
//void tset1(int* arr)   //正确
//{}
//
//void test2(int* arr[100]) //err
//{}
//void test2(int* arr[100]) //正确
//{}
//void test2(int** arr)     //正确
//{}
//int main()
//{
//	int arr1[10];
//	int *arr2[100]; 
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}

//二维数组的传参
//#include <stdio.h>
//void test(int arr[3][5]) {}//正确
//void test(int arr[][5]) {} //正确
//void test(int arr[3][]) {} //err
//void test(int arr[][]) {}  //err

//void test(int* arr) {}   //err，数组的地址不能用整形的指针存储
//void test(int** arr) {}  //err，二级指针是用来存放整形地址的指针 的地址的指针
//void test(int* arr[5]) {}//err
//void test(int(*arr) [5]) {}  //正确

//int main()
//{
//	int arr[3][5];
//	test(arr);    //传过去时第一行的数组的地址,要用存放数组地址的指针
//	return 0;
//}

//二级指针的传参
//void test(char** p)
//{}
// 
//int main()
//{
//	char a = 'a';
//	char* pa = &a;
//	char** pb = &pa;
//	char* arr[10];
// 
//	test(&a); //err
//	test(&pa);//ok 
//	test(pb);//ok
//	test(arr);//ok 首元素的地址是指针的地址
//	return 0;
//}

//函数指针
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 12;
//	int arr[5];
//
//	printf("%d\n", add(a, b));
//	printf("%p\n",add);
//	printf("%p\n", &add); //函数名 与 &函数名 都是函数的地址
//
//	int(*pa)[5] = &arr;
//	int(*pb)(int x,int y) = &add; //函数的地址类似于数组的地址
//	int(*pc)(int , int ) = add;   //下，y，&可以去掉
//
//	printf("%d\n",(*pb)(a,b));//结果为5，对函数的地址解引用
//    printf("%d\n",(**pb)(a,b));
//    printf("%d\n",(***pb)(a,b));
//    printf("%d\n",(pb)(a,b));   //都是一样的，这里的*是摆设，但有意义
//	return 0;
//}
  
//两个“有趣”的代码

//1.(*(void(*)()0)();
   //void(*)()--函数指针类型   int a; char *p=(char*)&a;
   //void(*)()0--把0强制类型转化为void(*)()函数指针类型，0是函数的地址
   //*(void(*)()0--对地址解引用
   //(*(void(*)()0)()；--调用0地址处内的 参数为无参，返回类型为void的一个函数
  
//2.void (*signal(int,void(*)(int)))(int)；
   //(int,void(*)(int))--两个函数参数，第二个参数类型为函数指针类型
   //void (*.....)(int);--定义函数指针类型
   //void (*signal(int,void(*)(int)))(int)；
     //--signal是一个函数声明，有两个参数，第一个是int，第二个是函数指针，该函数指针指向的函数
                                                      //有一个参数，是int类型，返回类型是void。
     //--signal函数返回类型也是一个函数指针，该函数指针指向的函数的参数是int 返回类型是void


//函数指针的数组
//#include <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//    return x - y;
//}
//int mul(int x, int y)
//{
//    return x * y;
//}
//int div(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    int(*pa)(int, int) = add;
//    int(*p[4])(int, int) = { add,sub,mul,div };//函数指针的数组
//    int i;
//    for (i=0;i<4;i++)
//    {
//        printf("%d\n",p[i](2,3));
//    }
//    return 0;
//}

//练习
//写一个函数指针pf指向my-strcpy  char*my_strcpy(char*a,cahr*b);
//写一个函数指针数组pfarr，能够存放4个my_strcpy函数的地址
//char* my_strcpy(char* a, char * b)
//{
//    return 0;
//}
//int main()
//{
//    char* (*pf)(char*, char*) = my_strcpy;
//    char* (*pfarr[4])(char*, char*) = {my_strcpy,my_strcpy,my_strcpy,my_strcpy};
//    return 0;
//}

//使用函数指针数组设计计算机程序
//
//#include <stdio.h>
//void menu()
//{
//    printf("1.加 2.减 3.乘 4.除以 0.exit\n");
//}
//int add(int x,int y)
//{
//    return x + y;
//}
//int sub(int x, int y)
//{
//    return x - y;
//}
//int mul(int x, int y)
//{
//    return x * y;
//}
//int div(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    menu();
//    int input;
//    do
//    {
//        printf("请选择：\n");
//        scanf("%d", &input);
//        int (*p[5])(int, int) = { 0, add,sub,mul,div };
//        if (1 <= input && input <= 4)
//        {
//            printf("请输入操作数：\n");
//            int x, y;
//            scanf("%d%d", &x, &y);
//            int a = (*p[input])(x, y); //(*p[1])(x, y)是add（第二个元素）
//            printf("结果是：%d\n", a);
//        }
//        else if (input == 0)
//        {
//            printf("已退出\n");
//        }
//        else
//            printf("输入错误，请重新输入：\n");
//    } while (input);
//}


//指向函数指针数组的指针
//#include <stdio.h>
//int add(int x,int y)
//{
//    return x + y;
//}
//int main()
//{
//    int arr[10];
//    int(*p)[10] = &arr;  //数组指针，指向数组
//
//    int (*pa)(int, int) = &add;
//    int (*pb[4])(int, int) = {&add,&add,&add,&add};//函数指针的数组
//    int(*( (*pc)[4]) )(int, int) = &pb;//pc是数组指针，指向的类型是函数指针int(*)(int,int)
//                                       //要把pb的地址存起来，要用数组指针，在pc前加*并括号
//    return 0;
//
//}

//回调函数--是一个通过函数指针调用的函数。如果把函数的指针（地址）作为参数传递给另一个函数，
    //当这个指针被用来调用其指向函数时，称其为回调函数
 //#include <stdio.h>
//void print1(char arr[])
//{
//    printf("speak:%s\n",arr);
//}
//void test1(void(*pt)(char brr[]))
//{
//    char a[] = "haha";
//    printf("hello\n");
//    pt(a);
//}
//void print2(const char *p)
//{
//    printf("speak:%s\n", p);
//}
//void test2(void(*pt)(const char*))
//{
//
//    printf("hello\n");
//    pt("haha");             //指向常量字符串的指针要加const
//}
//int main()
//{
//    test1(print1);
//    test2(print2);
//    return 0;
//}
// 
// 设计计算机程序
//#include <stdio.h>
//void menu()
//{
//    printf("1.加 2.减 3.乘 4.除以 0.exit \n");
//}
//int add(int x,int y)
//{
//    return x + y;
//}
//int sub(int x, int y)
//{
//    return x - y;
//}
//int mul(int x, int y)
//{
//    return x * y;
//}
//int div(int x, int y)
//{
//    return x / y;
//}
//void Back(int(*p)(int , int ))
//{
//    printf("请输入操作数：\n");
//    int x, y;
//    scanf("%d%d",&x,&y);
//    printf("结果为：%d\n\n",p(x,y));
//}
//int main()
//{
//    menu();
//    printf("\n");
//    int input;
//    do 
//    {
//        printf("请输入：\n");
//        scanf("%d", &input);
//        switch(input)
//        {
//           case 1:
//              Back(add);
//              break;
//           case 2:
//               Back(sub);
//               break;
//           case 3:
//               Back(mul);
//               break;
//           case 4:
//               Back(div);
//               break;
//           case 0:
//               printf("已退出\n");
//               break;
//           default:
//               printf("输入错误，请重新输入:\n");
//               break;
//        }
//    } 
//    while (input);
//    return 0;
//}

//冒泡排序
//#include <stdio.h>
//int bubble_sort(int brr[],int s)
//{
//	int i;
//	for (i = 0; i < s - 1; i++)   //给每一趟排序
//	{
//		int b;
//		int h = 1;//假设这一趟完全有序
//		for (b = 0; b < s - 1 - i; b++) //给每个元素进行交换
//		{if (brr[b] > brr[b + 1])
//			{ 
//				int c = brr[b];        
//				brr[b] = brr[b + 1]; 
//				brr[b + 1] = c; 
//				h = 0;
//			}
//		}
//		if (h == 1) 
//			break; 
//	}	
//	return 0;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int s = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,s);
//	int i;
//	for (i = 0; i < s ; i++)
//		printf("%d ",arr[i]);
//	return 0;
//}

//上述方法是int类型的适用范围小，使用回调函数优化
//qsort--库函数-快速排序quick sort
//查c函数库,属于<stdlib.h>
//void qsort(void* base, size_t num, size_t size, int (*compare)(const void*, const void*));
// 第一个参数：待排序数组首元素地址
// 第二个参数：待排序数组的元素个数
// 第三个参数：待排序数组每个元素大小，单位是字节
// 第四个参数：是函数指针
//void*（无类型指针） 可以接受任意类型的地址（int*,char*,longlong*）
//void* 类型的指针不可以进行解引用操作，可以强制类型转换后解引用
//void* 类型的指针不可以进行加减操作
 
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//int cmp_int(const void* a, const void* b)  //比较两个整形
//{
//	return *(int*)a - *(int*)b;//返回负数或0则把a放到b前，返正则a放b后，是小到大排序
//}
//int cmp_float(const void* a, const void* b)  //比较两个浮点型
//{
//	return *(float*)b - *(float*)a;  //返回负数就把b放a前，是大大到小排序
//}
//
//struct stu       
//{
//	char name[10];
//	int age;
//};
//int cmp_str_age(const void* a, const void* b)
//{
//	return ((struct stu*)a)->age - ((struct stu*)b)->age ; //比较年龄
//}
//int cmp_str_name(const void* a, const void* b)
//{
//	return strcmp(((struct stu*)a)->name , ((struct stu*)b)->name); //比较字符串用strcmp
//}                            //相同则返回0，不同则比较首个不同字符的大小，小于返回-1
//
////自定义可实现多类型的冒泡排序
//void swap(char* a, char* b, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{    //比如把int类型的(00 00 00 01)和（00 00 00 02）交换
//		 //就把转换的4个char类型的依次交换
//		char  x = *a;
//		*a = *b;
//		*b = x;
//		a++;
//		b++;
//	}
//}
//void bubble_sort(void* base, int num, int size, int (*cmp)(const void*,const void*))
//{
//	int i, j;
//	for (i = 0; i < num - 1; i++)
//	{
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size)>0)
//			   //char*类型的指针加1移动1字节地址，加上j * size就移动了本来一个元素的地址
//			{
//				swap((char*)base + j * size, (char*)base + (j + 1) * size,size);
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	float brr[] = { 11.2,3.32,3.5,2.3,21,4.32,3};
//	struct stu crr[3] = { {"Alice",20},{"Fieona",16},{"Lucy",18} };
//
//	int s1 = sizeof(arr) / sizeof(arr[0]);
//	int s2 = sizeof(brr) / sizeof(brr[0]);
//	int s3= sizeof(crr) / sizeof(crr[0]);
//
//	qsort(arr ,s1, sizeof arr[0], cmp_int );
//	qsort(brr, s2, sizeof brr[0], cmp_float);
//
//	int i;
//	for (i = 0; i < s1; i++)
//		printf("%d ",arr[i]);
//	printf("\n");
//	int j;
//	for (j = 0; j < s2; j++)
//		printf("%f ", brr[j]);
//	printf("\n");
//
//	qsort(crr, s3, sizeof crr[0], cmp_str_age);
//	int k;
//	for (k = 0; k < s3; k++)
//	{
//		printf("%s %d ", crr[k].name ,crr[k].age);//根据年龄对整个数组排序后输出
//	}                        
//	printf("\n");
//
//	qsort(crr, s3, sizeof crr[0], cmp_str_name);
//	for (k = 0; k < s3; k++)
//	{
//		printf("%s %d ", crr[k].name, crr[k].age);
//	}
//	printf("\n");
//
//	bubble_sort(crr, s3, sizeof crr[0], cmp_str_age);
//	for (k = 0; k < s3; k++)
//	{
//		printf("%s %d ", crr[k].name, crr[k].age);
//	}
//	return 0;
//}

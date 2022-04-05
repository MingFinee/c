# include <stdio.h>
# include <string.h>

//创建数组
//int main()
//{
//	int arr[5];//存放5个整形的数组
//	char brr[10]; //10个字符
//	char drr[] = { 'q','w' };    //两个元素
//	char err[] = "qwe";          //四个元素（\0）
//	int crr[10] = { 1,2,3,4,5 }; //不完全初始化，剩下的元素默认初始化为零
//	char err[5] = "qwe";         //第四位为\0,第五位为0
//	return 0;
//}     //创建数组--[]里面必须是常量

//sizeof与strlen
//int main()
//{
//	char a[] = "qwe";
//	char b[] = { 'q','w','e' };
//	printf("%d\n", sizeof(a));//sizeof是操作符-计算数组，变量，类型的大小-单位是字节（包括\0）
//	printf("%d\n", sizeof(b));//strlen只能计算\0前字符串长度-库函数(不计算\0)
//	printf("%d\n", strlen(a));  
//	printf("%d\n", strlen(b));//b没有\0，结果为一个随机值
//	return 0;
//}
//数组在内存中是连续存放的 
//int main()
//{
//	int i;
//	char a[] = "12345";
//	int b[] = { 1,2,3,4,5 };
//	for(i=0;i<strlen(a);i++)
//	printf("&a[%d]=%p &b[%d]=%p\n",i,&a[i],i,&b[i]);
//	return 0;
//}
//char申请1个字符空间，结果的地址依次加1；int申请4个字节空间，依次加4
//16进制：0，1，2，3，4，5，6，7，8，9，a，b，c，d，e

//二维数组的创建与初始化
//int main()
//{
//	int a[3][4] = { {1,2,3},4,5 };//创建4行5列的数组,1,2,3放第一行，4，5放第二行
//	//int a[][]={1,2,3,4,5}err;  //列不能省略
//	int b[][3] = {1,2,3,4,5};    //第二行及以后全为0
//	int c[][3] = { {1,2,3 },4, 5};  
//	return 0;
//}

//打印数组
//int main()
//{
//	int a[2][3] = { {1,2},3,4 };
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("a[%d][%d]=%d ", i, j, a[i][j]);
//			printf("&a[%d][%d]=%p\n", i, j, &a[i][j]);
//		}	
//	} 
//	return 0;  
//}//二维数组也是连续存放的：每行按顺序排列--把每一行当成一个一维数组

//数组传递时只会传递首元素地址(数组名），有两个例外
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	char b[] = "12345";
//	printf("%p\n", a);
//	printf("%p\n\n", a+1);
//
//	printf("%p\n", &a[0]);    
//	printf("%p\n\n", &a[0]+1); 
//
//	printf("%d\n", *a);
//	printf("%d\n\n", *a+1);
//
//	printf("%d\n", sizeof(a)); //例外1：使用sizeof/strlen
//	printf("%d\n\n",strlen(b));
//
//	printf("%p\n", &a);  //例外2：对整个数组取地址，虽然此处结果与上面相同但代表整个数组
//	printf("%p\n", &a+1);      //结果地址加了20
//	return 0;                 
//}
//void test1(int arr1[])
//{
//	printf("%d\n", sizeof(arr1));
//}
//void test2(char arr2[])
//{
//	printf("%d\n", sizeof(arr2));
//}
//int main()
//{
//	int arr1[10];
//	char arr2[10];
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	test1(arr1);
//	test2(arr2);    //32/64位计算机，地址长度4/8字节，结果为40 10 8 8
//	return 0;
//}


//冒泡排序函数 bubble_sort()--可用于乱序
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
//				h = 0;//如果这趟有一对数不符合有序则h会变成0，完全有序时一直为1
//			}
//		}
//		if (h == 1)  //当这一趟真的完全有序时跳出最外面的for循环,提高效率
//			break;   //break只能在循环语句中使用，此处虽然是在if里但也在for里，所以能用.
//	}	
//	return 0;
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//目的：从小到大排列
//	//将9与后面的每个元素比较，若9更大则与其交换位置，
//	//9876543210-8976543210-8796543210-..-8765432109 一趟冒泡排序，保证最大的数排到最后面
//	//876543210--...7654321089   10个元素一共需要9趟冒泡排序 9+4+..+1次比较
//	int s = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,s);
//	int i;
//	for (i = 0; i < s ; i++)
//		printf("%d ",arr[i]);
//	return 0;
//}


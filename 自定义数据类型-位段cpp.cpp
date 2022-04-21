
//位段--二进制位
//位断的声明和结构是类似的，有两个不同
//1.位段的成员必须是相同类型的（int，unsigned int或signed int）
//2.位段的成员名后边有一个冒号和一个数字
//3.设置可移植程序时尽量别用位段，不同编译器不一样

//#include <stdio.h>
//struct A
//{
//    int a : 2;  //a占2个比特位
//    int b : 5;  //b占5个比特位
//    int c : 10; //10个
//    int d : 30; //30个  共47bite
//};              //int类型 先开辟4个字节（32bite）空间 不够后又加4字节空间
//                //节省空间的同时允许浪费空间
//int main()
//{
//    int a = 100;
//    struct A m;
//    printf("%zd\n", sizeof(A));
//    printf("%zd\n", sizeof(m));    //8个字节
//    return 0;
//}

//位段的跨平台问题
//int 当成有符号数还是无符号数不能确定
//位段中最大位数的数目不能确定
//位段中的成员在内存中的分配从左向右还是从右向左不能确定
//......... 
//#include <stdio.h>
//struct s
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//int main()
//{
//    struct s n = {0};
//    n.a = 10;
//    n.b = 20;
//    n.c = 3;
//    n.d = 4;
//    return 0;
//}


//struct S
//{
//	char a;   //1字节
//	char b:1;
//	char c : 2;
//	char d : 3;
//}*p;//共两个字节
//
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[4];
//	memset(arr, 0, 4);//把arr的四个字节设置为0
//	//arr 00000000 00000000 00000000 00000000
//	//           a   d  c b 第一个字节给a 第二个字节最后的bit给b，依次类推
//	p=(struct S*)arr; //将数组arr强制转化为（struct S*）类型赋给p
//	//p   00000000 00000000 00000000
//	p->a = 2;
//	p->b = 3;//11 而b只花一个比特存储，于是只存1
//	p->c = 4;//100 两个比特位 放00
//	p->d = 5;//101 三个比特位 放101
//	//p   00000010 00101001 00000000
//	printf("%02x %02x %02x %02x\n",arr[0],arr[1],arr[2],arr[3]);
//	return 0;
//}
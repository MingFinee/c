#define _CRT_SECURE_NO_WARNINGS 1

//ָ���С�̶�4/8���ֽڣ�32λ/64λ��
//ָ�����;�����ָ��+-�Ĳ���

//#include <stdio.h>
//int main()
//{
//	const char* p = "asdf";//"asdf"�ǳ����ַ�����Ҫ��const
//	printf("%s\n", p);     //p�������Ԫ�ص�ַ����%s��ͨ����Ԫ�ش�ӡ�ַ���ֱ��\0
//	printf("%c", *p);      //*p�������Ԫ��
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
//		printf("����\n");
//	}
//	else 
//	{
//		printf("�Ǻ�\n");//��Ȼ�����ַ���һ��������ֱ���ڲ�ͬ�Ŀռ䣬��ַ��ͬ
//	}
//
//	if(pa==pb)
//	{
//		printf("����\n");//��Ϊ�ǳ����ַ������ܱ��޸Ķ�����һ��������Ϊ�˽�ʡ�ռ�����ָ��ָ��ͬһ���ռ�
//	}
//	else
//	{
//		printf("�Ǻ�\n");
//	}
//	return 0;
//}//���Ϊ�Ǻ� ����

//**ָ������**
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char brr[5] = { 0 };//�ַ�����
//	int* parr[5];       //���ָ�����ε�����--ָ������
//	char* pbrr[6];      //���ָ�����ε�����--ָ������
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

//**����ָ��**
//#include <stdlib.h>
//int main()
//{
//	int* p = NULL; //p������ָ��-ָ�����ε�ָ��
//	char* m = NULL;//m���ַ�ָ��-ָ���ַ���ָ��
//	int arr[] = { 1,2,3,4,5 };
//	int(*n)[5] = &arr;      //n������ָ��
//	int* q[5] = { arr };    //q[5]��ָ������
//	return 0;
//}
 
//int main()
//{
//	int arr[5];
//	int(*pa)[5] = &arr;
//	int* brr[5];
//	int*(*pb)[5] =&brr;   //brr��int*����
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
//	print(arr, 3, 5);   //������Ϊ��Ԫ�ص�ַ--{1��2��3��4��5}�ĵ�ַ
//	print2(arr, 3, 5);  //����Ԫ�ص�ַ��int(*p)[5]==&{1,2,3,4,5}
//	return 0;           //��p��1ʱ��ַ��1�����������¸�����Ԫ��
//}

//**����Ĵ���**

//һά���鴫��
//#include <stdio.h>
//void tset1(int arr)   //err
//{}
//void tset1(int arr[]) //��ȷ
//{}
//void tset1(int arr[10])//��ȷ
//{}
//void tset1(int* arr)   //��ȷ
//{}
//
//void test2(int* arr[100]) //err
//{}
//void test2(int* arr[100]) //��ȷ
//{}
//void test2(int** arr)     //��ȷ
//{}
//int main()
//{
//	int arr1[10];
//	int *arr2[100]; 
//	test1(arr1);
//	test2(arr2);
//	return 0;
//}

//��ά����Ĵ���
//#include <stdio.h>
//void test(int arr[3][5]) {}//��ȷ
//void test(int arr[][5]) {} //��ȷ
//void test(int arr[3][]) {} //err
//void test(int arr[][]) {}  //err

//void test(int* arr) {}   //err������ĵ�ַ���������ε�ָ��洢
//void test(int** arr) {}  //err������ָ��������������ε�ַ��ָ�� �ĵ�ַ��ָ��
//void test(int* arr[5]) {}//err
//void test(int(*arr) [5]) {}  //��ȷ

//int main()
//{
//	int arr[3][5];
//	test(arr);    //����ȥʱ��һ�е�����ĵ�ַ,Ҫ�ô�������ַ��ָ��
//	return 0;
//}

//����ָ��Ĵ���
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
//	test(arr);//ok ��Ԫ�صĵ�ַ��ָ��ĵ�ַ
//	return 0;
//}

//����ָ��
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
//	printf("%p\n", &add); //������ �� &������ ���Ǻ����ĵ�ַ
//
//	int(*pa)[5] = &arr;
//	int(*pb)(int x,int y) = &add; //�����ĵ�ַ����������ĵ�ַ
//	int(*pc)(int , int ) = add;   //�£�y��&����ȥ��
//
//	printf("%d\n",(*pb)(a,b));//���Ϊ5���Ժ����ĵ�ַ������
//    printf("%d\n",(**pb)(a,b));
//    printf("%d\n",(***pb)(a,b));
//    printf("%d\n",(pb)(a,b));   //����һ���ģ������*�ǰ��裬��������
//	return 0;
//}
  
//��������Ȥ���Ĵ���

//1.(*(void(*)()0)();
   //void(*)()--����ָ������   int a; char *p=(char*)&a;
   //void(*)()0--��0ǿ������ת��Ϊvoid(*)()����ָ�����ͣ�0�Ǻ����ĵ�ַ
   //*(void(*)()0--�Ե�ַ������
   //(*(void(*)()0)()��--����0��ַ���ڵ� ����Ϊ�޲Σ���������Ϊvoid��һ������
  
//2.void (*signal(int,void(*)(int)))(int)��
   //(int,void(*)(int))--���������������ڶ�����������Ϊ����ָ������
   //void (*.....)(int);--���庯��ָ������
   //void (*signal(int,void(*)(int)))(int)��
     //--signal��һ��������������������������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���
                                                      //��һ����������int���ͣ�����������void��
     //--signal������������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int ����������void


//����ָ�������
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
//    int(*p[4])(int, int) = { add,sub,mul,div };//����ָ�������
//    int i;
//    for (i=0;i<4;i++)
//    {
//        printf("%d\n",p[i](2,3));
//    }
//    return 0;
//}

//��ϰ
//дһ������ָ��pfָ��my-strcpy  char*my_strcpy(char*a,cahr*b);
//дһ������ָ������pfarr���ܹ����4��my_strcpy�����ĵ�ַ
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

//ʹ�ú���ָ��������Ƽ��������
//
//#include <stdio.h>
//void menu()
//{
//    printf("1.�� 2.�� 3.�� 4.���� 0.exit\n");
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
//        printf("��ѡ��\n");
//        scanf("%d", &input);
//        int (*p[5])(int, int) = { 0, add,sub,mul,div };
//        if (1 <= input && input <= 4)
//        {
//            printf("�������������\n");
//            int x, y;
//            scanf("%d%d", &x, &y);
//            int a = (*p[input])(x, y); //(*p[1])(x, y)��add���ڶ���Ԫ�أ�
//            printf("����ǣ�%d\n", a);
//        }
//        else if (input == 0)
//        {
//            printf("���˳�\n");
//        }
//        else
//            printf("����������������룺\n");
//    } while (input);
//}


//ָ����ָ�������ָ��
//#include <stdio.h>
//int add(int x,int y)
//{
//    return x + y;
//}
//int main()
//{
//    int arr[10];
//    int(*p)[10] = &arr;  //����ָ�룬ָ������
//
//    int (*pa)(int, int) = &add;
//    int (*pb[4])(int, int) = {&add,&add,&add,&add};//����ָ�������
//    int(*( (*pc)[4]) )(int, int) = &pb;//pc������ָ�룬ָ��������Ǻ���ָ��int(*)(int,int)
//                                       //Ҫ��pb�ĵ�ַ��������Ҫ������ָ�룬��pcǰ��*������
//    return 0;
//
//}

//�ص�����--��һ��ͨ������ָ����õĺ���������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��������
    //�����ָ�뱻����������ָ����ʱ������Ϊ�ص�����
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
//    pt("haha");             //ָ�����ַ�����ָ��Ҫ��const
//}
//int main()
//{
//    test1(print1);
//    test2(print2);
//    return 0;
//}
// 
// ��Ƽ��������
//#include <stdio.h>
//void menu()
//{
//    printf("1.�� 2.�� 3.�� 4.���� 0.exit \n");
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
//    printf("�������������\n");
//    int x, y;
//    scanf("%d%d",&x,&y);
//    printf("���Ϊ��%d\n\n",p(x,y));
//}
//int main()
//{
//    menu();
//    printf("\n");
//    int input;
//    do 
//    {
//        printf("�����룺\n");
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
//               printf("���˳�\n");
//               break;
//           default:
//               printf("�����������������:\n");
//               break;
//        }
//    } 
//    while (input);
//    return 0;
//}

//ð������
//#include <stdio.h>
//int bubble_sort(int brr[],int s)
//{
//	int i;
//	for (i = 0; i < s - 1; i++)   //��ÿһ������
//	{
//		int b;
//		int h = 1;//������һ����ȫ����
//		for (b = 0; b < s - 1 - i; b++) //��ÿ��Ԫ�ؽ��н���
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

//����������int���͵����÷�ΧС��ʹ�ûص������Ż�
//qsort--�⺯��-��������quick sort
//��c������,����<stdlib.h>
//void qsort(void* base, size_t num, size_t size, int (*compare)(const void*, const void*));
// ��һ��������������������Ԫ�ص�ַ
// �ڶ��������������������Ԫ�ظ���
// ����������������������ÿ��Ԫ�ش�С����λ���ֽ�
// ���ĸ��������Ǻ���ָ��
//void*��������ָ�룩 ���Խ����������͵ĵ�ַ��int*,char*,longlong*��
//void* ���͵�ָ�벻���Խ��н����ò���������ǿ������ת���������
//void* ���͵�ָ�벻���Խ��мӼ�����
 
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//int cmp_int(const void* a, const void* b)  //�Ƚ���������
//{
//	return *(int*)a - *(int*)b;//���ظ�����0���a�ŵ�bǰ��������a��b����С��������
//}
//int cmp_float(const void* a, const void* b)  //�Ƚ�����������
//{
//	return *(float*)b - *(float*)a;  //���ظ����Ͱ�b��aǰ���Ǵ��С����
//}
//
//struct stu       
//{
//	char name[10];
//	int age;
//};
//int cmp_str_age(const void* a, const void* b)
//{
//	return ((struct stu*)a)->age - ((struct stu*)b)->age ; //�Ƚ�����
//}
//int cmp_str_name(const void* a, const void* b)
//{
//	return strcmp(((struct stu*)a)->name , ((struct stu*)b)->name); //�Ƚ��ַ�����strcmp
//}                            //��ͬ�򷵻�0����ͬ��Ƚ��׸���ͬ�ַ��Ĵ�С��С�ڷ���-1
//
////�Զ����ʵ�ֶ����͵�ð������
//void swap(char* a, char* b, int size)
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{    //�����int���͵�(00 00 00 01)�ͣ�00 00 00 02������
//		 //�Ͱ�ת����4��char���͵����ν���
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
//			   //char*���͵�ָ���1�ƶ�1�ֽڵ�ַ������j * size���ƶ��˱���һ��Ԫ�صĵ�ַ
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
//		printf("%s %d ", crr[k].name ,crr[k].age);//�������������������������
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

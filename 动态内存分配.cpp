#define _CRT_SECURE_NO_WARNINGS 1
//C/C++�����ڴ����ĵļ�������:
//1.ջ����stack������ִ�к���ʱ�������ھֲ������Ĵ洢��Ԫ��������ջ�ϴ���������ִ�н���ʱ
    //��Щ�ڴ浥Ԫ�Զ����ͷš�ջ�ڴ�����������ô�������ָ��У�Ч�ʺܸߣ����Ƿ�����ڴ�
    //�������ޡ�ջ����Ҫ������к���������ľֲ������������������������ݣ����ص�ַ��

//2.������heap����һ���ɳ���Ա�����ͷţ�������Ա���ͷţ��������ʱ������OS����
     // malloc��calloc��realloc
 
//3.��̬����static�����ȫ�ֱ�������̬����/�����������ϵͳ�ͷ�

//4.����Σ���ź����壨���Ա������ȫ�ֺ������Ķ�������

//malloc��free
//void* malloc (size_t size);   void free (void* ptr);
//#include <stdlib.h>
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//int main()
//{
//	int* p =(int*) malloc(10*sizeof(int));//���ڴ�����10�����οռ䣬Ҳ��������40
//  //����ʧ�ܻ᷵�ؿ�ָ��
//	if(p==NULL)
//	{   //�������ʧ�ܴ�ӡ����ԭ��
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{ //����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ��ʱӦ�û�������ϵͳ
//	free(p);   
//	//ָ��p�����Թ����Ǹ��ռ䣬Ӧ�ø�ֵΪ��ָ�룬����������ȫ�Ͽ���ϵ
//	p = NULL;
//
//	return 0;
//}


//freeʹ��ʱע�⣺
//free�����ͷŷǶ�̬�ڴ濪�ٵĿռ�
//*p++=i ֮��free(p)ʱ�ᱨ����ʱp��ָ����ʼλ�� 
//���ܶ���ͷţ�ÿ���ͷź󸳿�ָ����Զ���ͷ�



//calloc  void* calloc(size_t num, size_t size); numԪ�ظ��� sizeԪ�ش�С
//#include <stdlib.h>
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	int* p = (int*)calloc(10,sizeof(int));
//	//calloc��ѿռ��ÿ���ֽڳ�ʼ��Ϊ0����malloc����
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
// size��New size for the memory block, in bytes.
//������̬�����ڴ�ռ�Ĵ�С


//#include <stdlib.h>
//#include <stdio.h>
//#include <errno.h>
//#include <string.h>
//
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	//calloc��ѿռ��ÿ���ֽڳ�ʼ��Ϊ0����malloc����
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
//	//��������40���ֽڿռ䲻������
//	int* pr = (int*)realloc(p, 40);
//	//reallocʹ��ע������
//	//1.���prָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ�����pr
//	//2.��prָ��Ŀռ�֮��û�����㹻���ڴ�ռ����׷�ӣ�������������һ���µĿռ俪��
//	   //���Ұ�ԭ���ڴ��е����ݿ������¿ռ�ȥ���ͷžɿռ䣬�����¿ռ�
//	//3.��һ���µı��������ܷ���ֵ����ֹ׷��ʧ�ܺ��ԭָ��ĳɿ�ָ��
//	
//	if (pr == NULL)
//	{
//		printf("%s\n", strerror(errno));  //ע���ж��Ƿ񿪱ٳɹ�
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
//		free(pr);   //realloc���ԭ�ռ��Զ��ͷ�
//		pr = NULL;
//
//	}
//	return 0;
//}



//��������
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//struct S
//{
//    int a;
//    int arr[]; //���������Ա--δ֪��С��-�����С�ǿ��Ե�����
//               //Ҳ����arr[0]
//};
//int main()
//{
//    printf("%zd\n",sizeof(struct S)); //��ʱstruct S�Ĵ�СΪ4�ֽ�
//    struct S* p = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));  //������չ20���ֽ�
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

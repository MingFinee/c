#define _CRT_SECURE_NO_WARNINGS 1

//��������У�һ��̸���ļ������֣������ļ��������ļ�
//1.�����ļ�������Դ�����ļ�����׺Ϊ.c .cpp��,Ŀ���ļ���windows������׺.obj��
     //��ִ�г���windows������׺Ϊ.exe��
//2.�����ļ����ļ������ݲ�һ���ǳ��򣬶��ǳ�������ʱ��д�����ݣ������������ʱ��Ҫ���ж�ȡ���ݵ��ļ�
     //����������ݵ��ļ�


//�����ļ�����--�ı��ļ� �������ļ�
// //���Ҫ�����������ASCII�����ʽ�洢������Ҫ�ڴ洢ǰת������ASCII���ַ�����ʽ�洢���ļ������ı��ļ�
//�������ڴ����Զ����ƴ洢���������ת������������洢�����Ƕ������ļ�

//�ַ�һ����ASCII����ʽ�洢����ֵ����ASCII��ֵ�洢Ҳ����ʹ�ö����ƴ洢
//����10000��ASCII����ʽ��������̣��������ռ5���ֽڣ�����������ʽ��������̣����ڴ�����ռ4���ֽڣ����δ�С��
//����10000���ڴ����Զ����ƴ洢��4�ֽڣ�--00000000 00000000 00100111 00010000
                    //�������ļ��������--00000000 00000000 00100111 00010000 
                      //�ı��ļ��������--00110001 00110000 00110000 00110000 00110000��1��ASCIIΪ49 0--48��


//�ļ��Ĵ򿪺͹ر�
//�ڱ�д�����ʱ���ڴ��ļ���ͬʱ�����᷵��һ��FILE*��ָ��ָ����ļ�����ʧ�ܺ󷵻ؿ�ָ��
//�涨fopen���ļ���fclose�ر��ļ���FILE��ͷ�ļ�stdio
//File*fopen(const char*filename,const char *mode);   int fclose(FILE*stream)  ��stream--����
// 
//�ļ�ʹ�÷�ʽ   ����                                     ���ָ���ļ�������
//r   ֻ��       Ϊ���������ݣ���һ���Ѵ��ڵ��ı��ļ�   ����
//w   ֻд       Ϊ���������ݣ���һ���ı��ļ�           ����һ�����ļ�
//a   ׷��       ���ı��ļ�β�������                     ����
//rb  ֻ��       Ϊ���������ݣ���һ���������ļ�         ����
//wb  ֻд       Ϊ���������ݣ���һ���������ļ�         ����һ�����ļ�
//ab  ׷��       ��һ���������ļ�β�������               ����
//r+  ��д       Ϊ�˶���д����һ���Ѵ��ڵ��ı��ļ�     ����
//w+  ��д       Ϊ�˶���д������һ���µĵ��ı��ļ�       ����һ�����ļ�
//a+  ��д       ��һ�ı��ļ������ļ�β����ж�д       ����һ�����ļ�
//rb+  ��д      Ϊ�˶���д����һ���������ı��ļ�       ����
//wb+  ��д      Ϊ�˶���д������һ���µĵĶ������ļ�     ����һ�����ļ�
//ab+  ��д      ��һ���������ļ������ļ�β����ж�д   ����һ�����ļ�       


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{   //���ļ�test.txt
//    fopen("test.txt","r");//���·��д������ǰ����ͬһ��·��������ֻд�ļ���
//    //fopen("D:\Visual studio 2022 (2)\Project2\Project2\test.txt","r");//����·��д������·��ȫд
//    FILE*p=fopen("test.txt", "r");
//    if (p == NULL)
//    {
//        printf("%s\n",strerror(errno));
//        return 0;
//    }
//    //�ر��ļ�
//    fclose(p);  //�����ڴ��������ڴ�
//    p = NULL;
//    return 0;
//}

//�ļ���˳���д
//��������붼������ڴ��
//����                ������      ������
//�ַ����뺯��        fgetc       ����������
//�ַ��������        fputc       ��������� 
//�ı������뺯��      fgets       ����������
//�ı����������      fputs       ���������
//��ʽ�����뺯��      fscanf      ����������
//��ʽ���������      fprintf     ���������
//���������뺯��      fread       �ļ�
//�������������      fwrite      �ļ�

//�ַ�����\���������ʹ��
// int fgetc ( FILE * stream )       int fputs ( const char * str, FILE * stream );
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{   
//    FILE* p = fopen("test.txt", "w");//pָ����������
//    if (p == NULL)
//    {
//         printf("%s\n",strerror(errno));
//         return 0;
//    }
//    //д�ļ������ڴ�������ļ������̣���
//    fputc('ab', p); //һ�����һ���ַ�
//    fputc('bc', p);
//    fputc('cd', p);
//    fputc('de', p);
//    //�ر��ļ�
//    fclose(p);
//    p = NULL;
//
//    FILE* pa = fopen("test.txt", "r");//pָ�����������
//    //���ļ������ļ����������뵽�ڴ���
//    printf("%c", fgetc(pa));  //ÿ�ζ�һ���ַ�
//    printf("%c", fgetc(pa));
//    printf("%c", fgetc(pa));
//
//
//    fclose(pa);
//    pa = NULL;
//    return 0;
//}

//����--��׼�����豸  stdin
//��Ļ--��׼����豸  stdout
//һ�������Ĭ�ϴ����������豸
// 
//#include <stdio.h>
//int main()
//{
//    int a=fgetc(stdin);  //�����ݴӱ�׼�����뵽�ڴ�
//    int b= fgetc(stdin);
//    int c=fgetc(stdin);
//    fputc(a, stdout);      //�����ݴ��ڴ��������׼�����
//    fputc(b, stdout);
//    fputc(c, stdout);
//    fputc(a, stdout);
//    return 0;
//}



//�ı�������\�������
//char * fgets ( char * str, int num, FILE * stream );  int fputs ( const char * str, FILE * stream );
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char buf[100] = { 0 };
//    FILE* p = fopen("test1.txt","w"); //��ǰ·��û�д��ļ�����Ϊ�ǡ�w��������һ���µ��ļ�
//    fputs("hellow\n", p);
//    fputs("world", p);
//    fclose(p);
//    p = NULL;
//    FILE* pa = fopen("test1.txt", "r");
//    if (pa != NULL)
//    {
//        printf("%s", fgets(buf, 100, pa)); 
//        printf("%s", fgets(buf, 100, pa)); //ÿ�ζ�һ��
//        fclose(pa);
//        pa = NULL;
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char arr[1000] = { 0 };
//    fgets(arr, 100, stdin);
//
//    fputs(arr, stdout);
//
//    return 0;
//}

//��ʽ������\�������
//int fscanf ( FILE * stream, const char * format, ... );
//int fprintf ( FILE * stream, const char * format, ... );
//#include <stdio.h>
//struct S
//{
//    int a;
//    char b[100];
//}; 
//
//int main()
//{
//    struct S s = {10000,"hellow world"};
//    FILE* p = fopen("test2.txt","w");
//    if (p != NULL)
//    {
//        fprintf(p, "%d %s", s.a, s.b);
//        fclose(p);
//        p = NULL;
//    }
//    FILE* pa = fopen("test2.txt", "r");
//    if(pa != NULL)
//    {
//        fscanf(pa, "%d %s",  &(s.a),s.b);//Ҫ��˳��,scanf��������" "                               
//        printf("%d %s",s.a,s.b);
//        fclose(pa);
//        pa = NULL;
//    }
//    return 0;
//}
//
//struct M
//{
//    int a;
//    float b;
//};
//#include <stdio.h>
//int main()
//{
//    struct M m = { 0 };
//    fscanf(stdin, "%d %f", &(m.a), &(m.b));
//    fprintf(stdout, "%d %.2f", m.a, m.b);
//    return 0;
//}

//����������\�������
//size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream );
//size_t fread ( void * ptr, size_t size, size_t count, FILE * stream );
//#include <stdio.h>
//struct S
//{
//    int a;
//    char b[100];
//}; 

//int main()
//{
//    struct S s = {10000,"hellow world"};
//    FILE* p = fopen("test3.txt","w");
//    if (p != NULL)
//    {   //��������ʽд�ļ�
//        fwrite(&s,sizeof(struct S),1,p);
//        fclose(p);
//        p = NULL;
//    }
//    FILE* pa = fopen("test3.txt", "r");
//    if(pa != NULL)
//    {   //��������ʽ���ļ�
//        struct S m = {0};
//        fread(&m, sizeof(struct S), 1, pa);                              
//        printf("%d %s",m.a,m.b);
//        fclose(pa);
//        pa = NULL;
//    }
//    return 0;
//}



//�ļ��������д


//int fseek ( FILE * stream, long int offset, int origin );
//�Ե�ǰλ��Ϊ��㣬����ƫ���������ļ�ָ��λ��
// 
// long int ftell ( FILE * stream );
// �����ļ�ָ���������ʼλ�õ�ƫ����
//  
//Դͷ      �ο�λ��
//SEEK_SET	�ļ���ͷ
//SEEK_CUR	�ļ�ָ��ĵ�ǰλ��
//SEEK_END	�ļ�����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    FILE* pa = fopen("test4.txt","w");
//    fputc('a', pa);
//    fputc('b', pa);
//    fputc('c', pa);
//    fputc('d', pa);
//    fputc('e', pa);
//    fclose(pa);
//    pa = NULL;
//
//    FILE* p = fopen("test4.txt","r");
//    if (p == NULL)
//    {
//        printf("%s\n",strerror(errno));
//        return 0;
//    }
//    //��λָ��
//    fseek(p,0,SEEK_CUR); //�����ļ�ָ����Ե�ǰλ������ƫ��2
//    //��ǰλ��Ĭ��Ϊ��ʼλ�ã���ʼλ��ָ��a��
//    //��ȡ�ļ�
//    printf("%c\n", fgetc(p));//c 
//
//    fseek(p, -2, SEEK_END);//�����ļ�ָ�����ĩβλ����ǰƫ��2
//    //ĩβλ��ָ��f�ĺ��� Ϊ��
//    printf("%c\n",fgetc(p));//d
//
//    printf("%d\n", ftell(p));
//    fclose(p);
//    p = NULL;
//    return 0;
//}


// EOF--end of file -�ļ�������־ �ļ�����λ�÷���һ��EOF
// 
//����ļ���β
//int feof(FILE* stream); 
//�ļ����򷵻ط���ֵ�����򣬽������㡣
// int ferror(FILE* stream);
//��������������������ļ�����ָʾ�����򷵻ط���ֵ�����򣬽������㡣
//�������䷵��ֱֵ���ж��ļ��Ƿ���������������ж��Ƕ�ȡʧ�ܽ������������ļ�β����
//
//#include <stdio.h>
//int main()
//{   //����һ���յ��ı��ļ�
//    FILE* p = fopen("test5.txt","r");
//    if (p != NULL)
//    {
//        printf("%d\n", fgetc(p));  // -1���ļ�����λ�÷���һ��EOF
//        fclose(p);
//        p = NULL;
//    }
//
//    //perror��ʹ��
//    FILE* pa = fopen("ejqihdhf", "r");
//    if (pa == NULL)
//    {
//        perror("����");//�൱��strerror��������
//    }
//    else
//    {
//        fclose(pa);
//        pa = NULL;
//    }
//
//
//    FILE* pb= fopen("test4.txt", "r");
//    if (pb == NULL)
//    { 
//        perror("����");
//        return 0;
//    }
//    while (fgetc(pb)!=EOF)
//    {
//        putchar(fgetc(pb));
//    }
//    if (ferror(pb))   //�����������ʱ����ֵΪ��
//    {
//        printf("error\n");
//    }
//    else if (feof(pb))//�����ļ�������־ʱ����ֵΪ��
//    {
//        printf("end of file\n");
//    }
//
//    return 0;
//}

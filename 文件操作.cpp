#define _CRT_SECURE_NO_WARNINGS 1

//程序设计中，一般谈的文件有两种：程序文件，数据文件
//1.程序文件：包括源程序文件（后缀为.c .cpp）,目标文件（windows环境后缀.obj）
     //可执行程序（windows环境后缀为.exe）
//2.数据文件：文件的内容不一定是程序，而是程序运行时读写的数据，比如程序运行时需要从中读取数据的文件
     //或者输出内容的文件


//数据文件类型--文本文件 二进制文件
// //如果要求在外存上以ASCII码的形式存储，则需要在存储前转换。以ASCII码字符的形式存储的文件就是文本文件
//数据在内存中以二进制存储，如果不加转换的输出到外存存储，就是二进制文件

//字符一律以ASCII码形式存储，数值即可ASCII码值存储也可以使用二进制存储
//整数10000以ASCII码形式输出到磁盘，则磁盘中占5个字节，而二进制形式输出到磁盘，则在磁盘上占4个字节（整形大小）
//整数10000在内存中以二进制存储（4字节）--00000000 00000000 00100111 00010000
                    //二进制文件存放内容--00000000 00000000 00100111 00010000 
                      //文本文件存放内容--00110001 00110000 00110000 00110000 00110000（1的ASCII为49 0--48）


//文件的打开和关闭
//在编写程序的时候，在打开文件的同时，都会返回一个FILE*的指针指向该文件，打开失败后返回空指针
//规定fopen打开文件，fclose关闭文件，FILE引头文件stdio
//File*fopen(const char*filename,const char *mode);   int fclose(FILE*stream)  （stream--流）
// 
//文件使用方式   含义                                     如果指定文件不存在
//r   只读       为了输入数据，打开一个已存在的文本文件   出错
//w   只写       为了输入数据，打开一个文本文件           建立一个新文件
//a   追加       向文本文件尾添加数据                     出错
//rb  只读       为了输入数据，打开一个二进制文件         出错
//wb  只写       为了输入数据，打开一个二进制文件         建立一个新文件
//ab  追加       向一个二进制文件尾添加数据               出错
//r+  读写       为了读和写，打开一个已存在的文本文件     出错
//w+  读写       为了读和写，建立一个新的的文本文件       建立一个新文件
//a+  读写       打开一文本文件，在文件尾添进行读写       建立一个新文件
//rb+  读写      为了读和写，打开一个二进制文本文件       出错
//wb+  读写      为了读和写，建立一个新的的二进制文件     建立一个新文件
//ab+  读写      打开一个二进制文件，在文件尾添进行读写   建立一个新文件       


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{   //打开文件test.txt
//    fopen("test.txt","r");//相对路径写法，当前是在同一个路径，可以只写文件名
//    //fopen("D:\Visual studio 2022 (2)\Project2\Project2\test.txt","r");//绝对路径写法，把路径全写
//    FILE*p=fopen("test.txt", "r");
//    if (p == NULL)
//    {
//        printf("%s\n",strerror(errno));
//        return 0;
//    }
//    //关闭文件
//    fclose(p);  //类似于创建堆区内存
//    p = NULL;
//    return 0;
//}

//文件的顺序读写
//输出与输入都是相对内存的
//功能                函数名      适用于
//字符输入函数        fgetc       所有输入流
//字符输出函数        fputc       所有输出流 
//文本行输入函数      fgets       所有输入流
//文本行输出函数      fputs       所有输出流
//格式化输入函数      fscanf      所有输入流
//格式化输出函数      fprintf     所有输出流
//二进制输入函数      fread       文件
//二进制输出函数      fwrite      文件

//字符输入\输出函数的使用
// int fgetc ( FILE * stream )       int fputs ( const char * str, FILE * stream );
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{   
//    FILE* p = fopen("test.txt", "w");//p指向的是输出流
//    if (p == NULL)
//    {
//         printf("%s\n",strerror(errno));
//         return 0;
//    }
//    //写文件，把内存输出到文件（磁盘）中
//    fputc('ab', p); //一次输出一个字符
//    fputc('bc', p);
//    fputc('cd', p);
//    fputc('de', p);
//    //关闭文件
//    fclose(p);
//    p = NULL;
//
//    FILE* pa = fopen("test.txt", "r");//p指向的是输入流
//    //读文件，把文件的数据输入到内存中
//    printf("%c", fgetc(pa));  //每次读一个字符
//    printf("%c", fgetc(pa));
//    printf("%c", fgetc(pa));
//
//
//    fclose(pa);
//    pa = NULL;
//    return 0;
//}

//键盘--标准输入设备  stdin
//屏幕--标准输出设备  stdout
//一个程序会默认打开这两个流设备
// 
//#include <stdio.h>
//int main()
//{
//    int a=fgetc(stdin);  //把数据从标准流输入到内存
//    int b= fgetc(stdin);
//    int c=fgetc(stdin);
//    fputc(a, stdout);      //把数据从内存输出到标准输出流
//    fputc(b, stdout);
//    fputc(c, stdout);
//    fputc(a, stdout);
//    return 0;
//}



//文本行输入\输出函数
//char * fgets ( char * str, int num, FILE * stream );  int fputs ( const char * str, FILE * stream );
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char buf[100] = { 0 };
//    FILE* p = fopen("test1.txt","w"); //当前路径没有此文件，因为是“w”，创建一个新的文件
//    fputs("hellow\n", p);
//    fputs("world", p);
//    fclose(p);
//    p = NULL;
//    FILE* pa = fopen("test1.txt", "r");
//    if (pa != NULL)
//    {
//        printf("%s", fgets(buf, 100, pa)); 
//        printf("%s", fgets(buf, 100, pa)); //每次读一行
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

//格式化输入\输出函数
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
//        fscanf(pa, "%d %s",  &(s.a),s.b);//要按顺序,scanf不会输入" "                               
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

//二进制输入\输出函数
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
//    {   //二进制形式写文件
//        fwrite(&s,sizeof(struct S),1,p);
//        fclose(p);
//        p = NULL;
//    }
//    FILE* pa = fopen("test3.txt", "r");
//    if(pa != NULL)
//    {   //二进制形式读文件
//        struct S m = {0};
//        fread(&m, sizeof(struct S), 1, pa);                              
//        printf("%d %s",m.a,m.b);
//        fclose(pa);
//        pa = NULL;
//    }
//    return 0;
//}



//文件的随机读写


//int fseek ( FILE * stream, long int offset, int origin );
//以当前位置为起点，根据偏移量调整文件指针位置
// 
// long int ftell ( FILE * stream );
// 返回文件指针相对于起始位置的偏移量
//  
//源头      参考位置
//SEEK_SET	文件开头
//SEEK_CUR	文件指针的当前位置
//SEEK_END	文件结束
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
//    //定位指针
//    fseek(p,0,SEEK_CUR); //调整文件指针相对当前位置往后偏移2
//    //当前位置默认为起始位置，起始位置指向‘a’
//    //读取文件
//    printf("%c\n", fgetc(p));//c 
//
//    fseek(p, -2, SEEK_END);//调整文件指针相对末尾位置往前偏移2
//    //末尾位置指向f的后面 为空
//    printf("%c\n",fgetc(p));//d
//
//    printf("%d\n", ftell(p));
//    fclose(p);
//    p = NULL;
//    return 0;
//}


// EOF--end of file -文件结束标志 文件结束位置放了一个EOF
// 
//检查文件结尾
//int feof(FILE* stream); 
//文件，则返回非零值。否则，将返回零。
// int ferror(FILE* stream);
//如果设置了与流关联的文件错误指示器，则返回非零值。否则，将返回零。
//不能用其返回值直接判断文件是否结束，而是用其判断是读取失败结束还是遇到文件尾结束
//
//#include <stdio.h>
//int main()
//{   //创建一个空的文本文件
//    FILE* p = fopen("test5.txt","r");
//    if (p != NULL)
//    {
//        printf("%d\n", fgetc(p));  // -1，文件结束位置放了一个EOF
//        fclose(p);
//        p = NULL;
//    }
//
//    //perror的使用
//    FILE* pa = fopen("ejqihdhf", "r");
//    if (pa == NULL)
//    {
//        perror("错误");//相当于strerror的升级版
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
//        perror("错误");
//        return 0;
//    }
//    while (fgetc(pb)!=EOF)
//    {
//        putchar(fgetc(pb));
//    }
//    if (ferror(pb))   //遇到错误结束时返回值为真
//    {
//        printf("error\n");
//    }
//    else if (feof(pb))//遇到文件结束标志时返回值为真
//    {
//        printf("end of file\n");
//    }
//
//    return 0;
//}

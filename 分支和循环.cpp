#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>


//if else ���
//int main()
//{
//	int point = 90;        
//	if (60<point&&point<=80)        //���ܼӷֺţ�//����ʹ�ã�0 <= point < 60����
//	printf("�ϸ�\n");              //����ִ�� 60 <= point -> �ж���� �õ�1��0 ->���ж� 0����1��<90�����    
//	else if (80 < point&&point <= 100) // ->��Ϊ����ִ��printf ������Ϊ �ϸ񣬶���������  
//	printf("����\n");  
//    else printf("���ϸ�\n");
//	return 0;                                     
//}
//
//int main()
//{
//	int point = 90;
//	if (60 < point && point <= 80)        
//		printf("�ϸ�\n");                
//	else if (80 < point && point <= 100) 
//	{
//		printf("����\n");
//		printf("����1000Ԫ\n");
//	}                                //��if��else���ƶ������ʱҪ��{}
//	else 
//		printf("���ϸ�\n");
//	return 0;
//}
//
//int main()
//{
//	int a = 55;
//	int b = 89;
//	if (60 <=a )
//	  if (60<=b )               //else�������δƥ���if���
//			printf("�ϸ�\n");   //��дʱҪ��η�����������{}���
//	  else 
//		    printf("���ϸ�\n");
//	return 0;
//}                             //��������
//
//int main()
//{
//	int a = 55;
//	if (a = 60);     // = �Ǹ�ֵ��Ҫ�� == �����жϣ����Դ� 60==a ���Լ������60=aʱ�ᱨ�������Լ���
//	{printf("�պúϸ�\n");
//	}
//	return 0;
//}                      //���Ϊ �պúϸ�      
//
//
// switch case ���
//int main()
//{
//	int DAY;
//	printf("����������:");
//	scanf_s("%d", &DAY);  
//	switch (DAY)           //switch ����Ƕ��ʹ��
//	{
//	case 1:                //case��ֻ�ܼ����λ���Ϊ���α��ʽ����䣩
//		printf("����һ");
//		break;             //breakΪ��ֹ����������ȫ��û�ӵ����������4 ���Ϊ ������������������������
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//	case 7:
//		printf("������");
//		break;
//	default:                      //defaultΪ��û��case���ϵ����������ִ���������
//		printf("������1~7������");
//	}
//
//	return 0;
//}
//
//int main()
//{
//	int DAY;
//	printf("����������:");
//	scanf_s("%d", &DAY);
//	switch (DAY)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//	case 7:
//		printf("������");
//		break;
//	}
//
//	return 0;
//}
//
//
//while���
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 4)
//			break;        //�����е�i=4ʱbreak��ֹ����������飬���Ϊ1 2 3
//		printf("%d\n",i);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 1;
//	while (i < 10)
//	{
//		if (i == 4)
//			continue;;        //�����е�i=4ʱcontinue��ֹ�����������������һֱ����if������ѭ��
//		printf("%d\n", i); 
//		i++;
//	}
//	return 0;
//
//
//
//getchar��putchar
//int main()
//{
//	int ab = getchar(); //�Ӽ��̻�ȡ����
//	printf("%d\n",ab);
//	printf("%c\n",ab);
//	putchar(ab);       //������ݣ���printf��������
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	char b[20];
//	printf("����������");
//	scanf("%s", &b[20]);          //scanfֻ���ȡ�ո�/\nǰ������
//	printf("��ȷ�����루y/n��");   
//	getchar();                     //�����롱12345 ���ո񣩡� ���ֱ����� δȷ��
//	a = getchar();                 //12345 �ո��������뻺����������scanf��ȡ��ʣ���ո�
//	if (a == 'y')                   //��ʱgetchar��ֱ�Ӷ�ȡ�������Ŀո������ ������Ҫ�ٴδӼ�������
//		printf("��ȷ��");           //�������12345 y��getchar���y��ֱ�ӵõ� ��ȷ��
//	else
//		printf("δȷ��");
//	return 0;
//}
//
//
//for���
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++) //(��ʼ�����жϲ��֣���������) ��ִ�г�ʼ����Ȼ���ж��Ƿ�Ϊ�棬
//		{
//       printf("%d ", i);
//        }     //Ϊ����ִ��{}����䣬ִ�������е������֣��ٽ����жϲ��֣�ֱ���ж�Ϊ�٣�����ѭ��
//	return 0;
//}        
//int main()
//{
//	int i;
//	for (i = 0; i <= 10; i++)
//	   {
//		   if (i == 7)
//			  break;         //���i=7�����break��������� ��i=0 1 2 3 4 5 6ʱprintf
//	       printf("%d ", i);     //���Ϊ0 1 2 3 4 5 6
//	   }    
//		return 0;
//} 
//          
//int main()
//{
//	int i;
//	for (i = 0; i <= 10; i++)
//	   {
//		if (i == 7)
//			continue;        //���i=7�����continue����������ʼ�ط�ִ��for��� ��i=0 1 2 3 4 5 6ʱprintf
//	       printf("%d ", i);     //��i=7ʱû��ִ��printf�����Ϊ0 1 2 3 4 5 6 8 9 10
//	   }    
//		return 0;
//}           
//
//int main()
//{for(;;)                     //forѭ�����жϲ��������ʡ�ԣ����ж�����Ϊ ��Ϊ��
//   {
//    printf("hello\n");         
//   }
//    return 0;               //���Ϊhello����ѭ��
//}
//
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 0; a < 10; a++)
//    {for(b=0;b<10;b++)
//       {
//        printf("hello\n");
//       }
//    }
//    return 0;
//}                     //���Ϊ100��hello
//
//int main()
//{
//    int a = 0, b = 0;
//    for (; a < 10; a++)    //�����a=0 b=0��for��ȥ��
//    {for(;b<10;b++)        //a=0 b=0�ᱻ����������for�ڣ�a=0ʱbִ��10��--aִ�еڶ���ѭ��a=1������ʱ
//       {                   //int a��b=0����������������for�ڣ�����b��Ȼ����10�����Բ������ѭ��
//        printf("hello\n"); 
//       }
//    }
//    return 0;          
//}                     //���Ϊ10��hello  1*10+9*0��
//
//int main()
//{
//    int a, b;
//    for (a = 0, b = 0; a < 3 && b < 67; ++a, b++)  //a++��++b��������1����˼
//        printf("hello\n");
//    return 0;
//}      //�������hello
//
//int main()
//{
//    int a, b;
//    for (a = 0, b = 0; b = 0; a++, b++)   
//        printf("hello\n");   //ѭ��0�Σ���Ϊb=0�����жϣ��൱��ֱ���ж�Ϊ�٣���˲�ѭ��
//    return 0;                //ͬ������жϲ�����b=���������������ѭ�������޸�hello
//}
//
//
//do while���
//int main()
//{
//    int i = 0;
//    do
//    {  if(i==6)
//          continue;        //��i=6ʱ����ѭ�����ٴ�ѭ������ʱi���ǵ���6����������������ѭ������ѭ��
//        printf("%d ", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}  
//
//int main()
//{
//    int i = 0;
//    do
//    {
//        if (i == 6)
//            break;       //��i=6ʱ����ѭ���������� 0 1 2 3 4 5 
//        printf("%d ", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}
//
//ѭ����ϰ
//
// ����n�Ľ׳�
//int main()
//{
//    int n,i,c=1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        c *= i;
//    }
//    printf("n�Ľ׳�Ϊ��%d",c);
//    return 0;
//}
// ����1!+2!+...+10!
//int main()
//{
//    int n, i, c=1,sum=0;
//    for (n = 1; n <= 10; n++)
//    {
//        c = 1;   //ע�� Ҫ��c��ֵ��ʼ��                 
//        for (i = 1; i <= n; i++)
//        {  
//            c *= i;   //��c=c*i����
//        }                 //������û�а�c��ֵ��ʼ��1����n=2��3��4...ʱ�Ὣ��һ�ε�c��ֵ������forѭ��
//        sum += c;         //
//    }
//    printf("1!+2!+...+10!=%d", sum);
//    return 0;
//}
//������for���׳���
//int main()
//{
//    int n, c = 1,sum=0;
//    for(n=1;n<=10;n++)
//    {
//        c *= n;
//        sum+= c;
//    }
//    printf("1!+2!+...+10!=%d", sum);
//    return 0;
//}
//
//���򣨰���С���У��������
//int main()
//{
//    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int b = 7;
//    int c = sizeof(a) / sizeof(a[0]);  //����Ԫ�ظ���
//    int i;
//    for(i=0;i<c;i++)
//    {
//        if (a[i] == b)
//        {
//            printf("�±�Ϊ��%d", i);
//            break;
//        }
//    }
//    if (i == c)
//        printf("û�ҵ�");
//    return 0;
//}
//
//int main()
//{
//    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int b = 6;
//    int c = sizeof(a) / sizeof(a[0]);
//    int i;
//    int l = 0;      //���±�
//    int r = c - 1;  //���±�
//    while (l <= r)
//    {
//        int m = (l + r) / 2;
//        if (a[m] > b)
//        {
//            r = m - 1;
//        }
//        else if (a[m] < b)
//        {
//            l = m + 1;
//        }
//        else
//        {
//            printf("�±�Ϊ��%d", m);
//            break;   //������break���һֱѭ�������Ϊ���±�Ϊ;6������ѭ��
//        }
//    }
//    if (l > r)       //��l>rʱ˵���Ѿ���������������û���ҵ�
//        printf("�Ҳ���\n");
//   return 0;
// }
//
//
//
//��ʾ����ַ����������м���
//int main()
//{
//    char a[] = "welcome";
//    char b[] = ".......";
//    int left = 0;
//    int right = sizeof(a) / sizeof(a[0]) - 2;  //char���͵Ķ�����Զ��ں�����ϡ�\0����Ҳ��һ������
//    int right=strlen(a)-1;   strlen��������ָ���ַ������ȣ�������ϡ�\0����Ҫ�����ⲿ������string
//    while (left <= right)
//    {
//        b[left] = a[left];
//        b[right] = a[right];
//        printf("%s\n", b);
//        Sleep(1000);  //Sleep--��Ϣ 1000 ms Ҫ����windows.h
//        system("cls");   //ִ��ϵͳ����ĺ���--"cls"-�����Ļ �� ����stdlib.h
//        left++;
//        right--;
//    }
//    printf("%s\n", b);
//    return 0;
//}
//
//ģ���û���¼����ֻ����Ǵ�����
//int main()
//{
//    int i;
//    char b[] = ""; //({0})
//    for (i = 1; i <= 3; i++)
//    {
//        printf("����������:\n");
//        scanf("%s", &b);
//        if (strcmp(b ,"12345")==0)   // ==���������Ƚ������ַ��Ƿ���ȣ�Ӧʹ��һ���⺯��strcmp
//        {
//            printf("��¼�ɹ�\n");  
//            break;               //break����ѭ����
//        }
//    }
//      if(i==4)
//        printf("��½����ʧ��\n");
//    return 0;
//}
//
//�����Լ����շת�������
//int main()
//{
//    int m = 24;
//    int n = 18;
//    int q;
//    while(m % n != 0)      // 24/18=1...6 -- 18/6=3...0��ɵ�6Ϊ���Լ����շת�������
//    {                      //��m n��ֵ������Ҳ���Եó����
//        q = m % n;
//        m = n;
//        n = q;
//    }
//    printf("���Լ��Ϊ��%d\n",n);
//    return 0;
//}
//int main()
//{
//    int m ;
//    int n;
//    scanf("%d%d", &m, &n);
//    int q;
//    while (q=m % n != 0)       //Ҳ�������ж����и�q��ֵm%n����Ϊ���Ч��
//    {                      
//        m = n;
//        n = q;
//    }
//    printf("���Լ��Ϊ��%d\n", n);
//    return 0;
//}
//
//�����ж�
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    int b;             
//    for (b = 2; b < a; b++)       //�Գ���;����ֻ�ܱ�1������������
//    {
//        if (a % b == 0)
//        {
//            printf("��������\n");
//            break;
//        }
//    }
//    if (b == a)
//        printf("������\n");
//    return 0;
//}
//int main()
//{
//    int a;
//    int b;
//    int c=0;
//    for (a = 101; a <= 200; a+=2)         //������������ż��
//    {
//        for (b = 2; b <= sqrt(a); b++)       //aqrt�����ţ���ѧ�⺯������math.h
//        {                          //���һ����������������ش���һ��Լ��С���俪����
//            if (a % b == 0)       //�����Ż������ٶ�
//            {
//                break;
//            }
//        }
//        if (b > sqrt(a))
//        {
//            printf("%d\n", a);
//            c++;
//        }
//    }
//    printf("count=%d",c);
//    return 0;
//}
//
//����1/1-1/2+1/3-1/4+...-1/100
//int main()
//{
//    int i;
//   float b = 0;  
//    int c = 1;
//    for(i=1;i<=100;i++)
//    {
//        b += c * 1.0/ i;  //������ �� .0
//        c = -c;
//    }
//    printf("%lf\n", b);
//    return 0;
//}
//
//��ӡ�˷��ھ���
//int main()
//{
//    int a;
//    for (a = 1; a <= 9; a++)     //ѭ������
//    {
//        int b; 
//        for (b=1;b<=a;b++)     //ѭ����������ѭ�� 
//        {
//            printf("%d*%d=%-2d ",a,b,a*b);  //%2dĬ����λ���Ҷ��룬%-2dĬ����λ�������
//        }
//        printf("\n");  //ִ����һ���ٻ��и����� 
//    }
//    return 0;
//}
//
//��������Ϸ 1.����һ������� 2.������
//int meau()
//{
//    printf("*********************\n");
//    printf("^^1.play^^^^0.exit^^^\n");
//    printf("*********************\n");
//    return 0;
//}
//int game()
//{
//    
//    int b = rand();   //rand() ���������---��stdlib.h
//    printf("%d\n",b);
//
//    return 0;
//}
//int main()
//{
//    int a;
//    do
//    {   
//        meau();
//        printf("��ѡ�񣺣�1/0��\n\n");
//        scanf("%d",&a);
//        switch (a)
//        {
//        case 1:
//            printf("��ʼ��Ϸ\n");
//            game();
//            break;        
//        case 0:
//            printf("�˳���Ϸ\n");
//            break;
//        default:          //defautҪ��ð��
//            printf("ѡ���������������\n");
//            break;
//        }
//    }
//    while (a);  //������a��ֵΪ0��break����ʱwhile��0���ж�Ϊ�� ����ѭ��
//    return 0;   //��������ʵ��������һ����Ϸ
//}
//
//goto ���
//�ػ�����
//int main()
//{
//    char input[20]="";
//    system("shutdowm -s -t 60");   
//    aaa:
//    printf("��ע����ĵ��Խ���һ���Ӻ�ػ�\n���롰������ȡ���ػ�\n");
//    scanf("%s",&input);
//    if(strcmp(input,"������") == 0)
//    {
//        system("shutdowm -a ");
//    }
//    else
//    {
//        goto aaa;        //goto��ֱ���е�aaa�����䣬���Ա�֤�������
//    }
//
//    return 0;
//}   //Ϊɶ�ҵĹػ�����[��]



//#include<stdio.h>
//int main() {
//	int age = 20;
//	if (age < 18)
//	      printf("δ����\n");
//	else
//		printf("�ѳ���");
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a = 0;
//	int b = 2;
//	if (a == 0)
//		if (b == 3)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return  0;
//}
//#include<stdio.h>
//int main() 
//{
//	int num = 4;
//	if (num = 5) 
//	{
//		printf("hahahha\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int a ;
//	printf("����һ����");
//	scanf_s("%d",&a);
//	if (a % 2 == 0)
//		printf(" i��ż��");
//	else
//		printf("i������");
//	return 0;
//}
//#include<stdio.h>
//int main() 
//{
//	int i = 1;
//	while (i<=100)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}




//switch�÷�
// 
//#include<stdio.h>
//int main() 
//{
//	int day = 0;
//	scanf_s("%d",&day);
////	switch (day)
////	{
////	case 1:
////		printf("����һ\n"); break;
////	case 2:
////		printf("���ڶ�\n"); break;
////	case 3:
////		printf("������\n"); break;
////	case 4:
////		printf("������\n"); break;
////	case 5:
////		printf("������\n"); break;
////	case 6:
////		printf("������\n"); break;
////	case 7:
////		printf("������\n"); break;
////	}
////
////		return 0;
//////}
//	int n = 1;
//switch (day)
//{
//	case 1:
//		if (n == 1)
//			printf("�Ǻ�\n");
//
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n"); break;
//	case 6:
//		printf("������\n"); break;
//	case 7:
//		printf("������\n"); break;
//	default:
//		printf("�������\n");
//}
//
//return 0;
//}





//#include<stdio.h>
//  int main() 
//  {
//	  int i = 1;
//	  while (i<=10)
//		{
//		  i++;
//		  if (i == 5)
//			 continue;
//		  printf("%d ",i);
//		  
//		}
//	  return 0;
//	}
//	




#include<stdio.h>
int main() 
{  
	int ch = 0;
	while ((ch = getchar()) != EOF) 
	{
		putchar(ch);
	}
	return 0;
}
//#include<stdio.h>
//int main() {
//	int age = 20;
//	if (age < 18)
//	      printf("未成年\n");
//	else
//		printf("已成年");
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
//	printf("输入一个数");
//	scanf_s("%d",&a);
//	if (a % 2 == 0)
//		printf(" i是偶数");
//	else
//		printf("i是奇数");
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




//switch用法
// 
//#include<stdio.h>
//int main() 
//{
//	int day = 0;
//	scanf_s("%d",&day);
////	switch (day)
////	{
////	case 1:
////		printf("星期一\n"); break;
////	case 2:
////		printf("星期二\n"); break;
////	case 3:
////		printf("星期三\n"); break;
////	case 4:
////		printf("星期四\n"); break;
////	case 5:
////		printf("星期五\n"); break;
////	case 6:
////		printf("星期六\n"); break;
////	case 7:
////		printf("星期天\n"); break;
////	}
////
////		return 0;
//////}
//	int n = 1;
//switch (day)
//{
//	case 1:
//		if (n == 1)
//			printf("呵呵\n");
//
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("星期五\n"); break;
//	case 6:
//		printf("星期六\n"); break;
//	case 7:
//		printf("星期天\n"); break;
//	default:
//		printf("输入错误\n");
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
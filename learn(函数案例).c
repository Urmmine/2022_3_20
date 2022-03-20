#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//逗号表达式
//exec((v1,v2),(v3,v4),v5,v6);

//函数实现乘法口诀表

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//
//	return 0;
//}


//数组逆序排列

//迭代

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left<right)
//	{
//		char tmp = str[left];// *(str + left)   (指针指的下left位)
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);//fedcba
//	return 0;
//}

//递归

/*
abcdef逆序
=af交换+bcde的逆序

bcde的逆序
=be交换+cd的逆序
*/

//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '0';
//	if (my_strlen(str+1) >= 2)//中间的字符串长度不足2时,停止循环
//	{
//		reverse_string(str + 1);
//		*(str + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//计算一个数的每位之和(递归实现)

/*
DigitSum(1729)
=DigitSum(172)+9
=DigitSum(17)+2+9
=DigitSum(1)+7+2+9
 */

//DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return DigitSum(n / 10)+ n % 10;
//	}
//	else
//	{
//		return n;
//	}
//}

//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//递归实现n的k次方

/*
Pow(n,k)
=n*Pow(n,k-1)
*/

double Pow(int n, int k)
{
	if (k == 0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / (Pow(n, -k));
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n,&k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}
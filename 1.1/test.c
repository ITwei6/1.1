#include <stdio.h>
//int main()
//{
//	char c;
//	int v0 = 0, v1 = 0, v2 = 0;	
//	do
//		{
//			switch (c = getchar())
//			{
//			case'a':case'A':
//			case'e':case'E':
//			case'i':case'I':
//			case'o':case'O':
//			case'u':case'U':v1 += 1;
//			default:v0 += 1;v2 += 1;
//			}
//		} while (c != '\n');
//		printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2);
//		return 0;
//}
//void sums(int *sums,int n)
//{
//	int i;
//	int arr2[2];
//	int j = 0;
//	int count = 0;
//	for (i = 0;i < n-1;i++)
//	{
//		count++;
//		if (sums[i + 1] - sums[i] != -1)
//		{
//			arr2[j] = sums[i + 1];
//			j++;
//			count++;
//			break;
//		}
//	}
//	arr2[j] = count;
//	if (arr2[0] > arr2[1])
//	{
//		int tem = arr2[0];
//		arr2[0] = arr2[1];
//		arr2[1] = tem;
//	}
//	else
//	{
//		int tem = arr2[1];
//		arr2[1] = arr2[0];
//		arr2[0] = tem;
//	}
//	return arr2;
//}
//int main()
//{
//	int arr[] = { 0 };
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 1;i <=n;i++)
//	{
//		arr[i-1] = i;
//	}
//	sums(arr,n);
//}
void check(char* ch,int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		while (*ch != '\0')
		{
			ch++;
		}
	}
}
int main()
{
	int n;
	char ch[]={0};
	scanf("%d", &n);
	int i = 0;
	for (i = 0;i < n;i++)
	{
         scanf("%s",&ch);
		getchar();
	}
	check(ch,n);
	return 0;
}
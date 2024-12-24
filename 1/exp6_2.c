////编程exp6_2.c，现有整型变量x，y，调用交换函数以期实现两个值的交换。下表中4种不同的定义及调用分别进行测试并填写表格。
////表1   拟实现交换的四种方法
////原型声明	void swap1(int, int);
////void swap2(int*, int);
////void swap3(int*, int*);
////void swap4(int*, int*);
////
////调用
////语句	swap1(x, y); 	swap2(&x, y);	swap3(&x, &y);		swap4(&x, &y);
////函数
////定义	void swap1(int a, int b)
////{
////	int temp = a;
////	a = b;
////	b = temp;
////}	void swap2(int* a, int b)
////{
////	int temp = *a;
////	*a = b;
////	b = temp;
////}	void swap3(int* a, int* b)
////{
////	int temp = *a;
////	*a = *b;
////	*b = temp;
////}	void swap4(int* a, int* b)
////{
////	int* temp = a;
////	a = b;
////	b = temp;
////}
//
//
//#include<stdio.h>
//void swap1(int, int);
//void swap2(int*, int);
//void swap3(int*, int*);
//void swap4(int*, int*);
//int main()
//{
//	int x = 1, y = 2;
//	swap1(x, y);  /*此处依次换成另外3种调用进行观察，其余代码不变*/
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}
//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}	void swap2(int* a, int b)
//{
//	int temp = *a;
//	*a = b;
//	b = temp;
//}	void swap3(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}	void swap4(int* a, int* b)
//{
//	int* temp = a;
//	a = b;
//	b = temp;
//}
//

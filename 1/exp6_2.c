////���exp6_2.c���������ͱ���x��y�����ý�����������ʵ������ֵ�Ľ������±���4�ֲ�ͬ�Ķ��弰���÷ֱ���в��Բ���д���
////��1   ��ʵ�ֽ��������ַ���
////ԭ������	void swap1(int, int);
////void swap2(int*, int);
////void swap3(int*, int*);
////void swap4(int*, int*);
////
////����
////���	swap1(x, y); 	swap2(&x, y);	swap3(&x, &y);		swap4(&x, &y);
////����
////����	void swap1(int a, int b)
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
//	swap1(x, y);  /*�˴����λ�������3�ֵ��ý��й۲죬������벻��*/
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

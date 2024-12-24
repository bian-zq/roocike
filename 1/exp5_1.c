//#include<stdio.h>
//#define N 10
//void input(int array[],int i);
//void output(int array[],int i);
//double average(int array[],int i);
//int maximum(int array[],int i);
//int  minimum(int array[],int i);
//int search(int array[],int i,int x);
//void reorder(int array[],int i);
//int main() {
//	int array[10], max, min, x,result;
//	double avg;
//	input(array, 10);
//	//输入数组元素
//	printf("原数组:\n");
//	output(array, 10);
//	//输出数组元素
//	avg = average(array, 10);
//	max = maximum(array, 10);
//	min = minimum(array, 10);
//	printf("平均值为:%.2lf,最大值为:%d,最小值为%d",avg,max,min);
//	//求最大最小平均值
//	printf("要查找的数:");
//	scanf("%d", &x);
//	result=search(array,10,x);
//	printf("%d", result);
//	//查找某数
//	reorder(array, 10);
//	printf("排序后的数组:\n");
//	output(array, 10);
//	//数组排序
//}
//	
//void input (int array[],int i){
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &array[i]);
//	}
//	return 0;
//}
////输入函数
//void output(int array[],int i) {
//	for (i = 0; i < 10; i++) {
//		printf("%d ", array[i]);
//	}
//	return 0;
//}
////输出函数
//double average(int array[], int i) {
//	int sum=0;
//	for (i = 0; i < 10; i++) {
//		sum += array[i];
//	}
//	return sum / 10.0;
//}
////平均值函数
//int maximum(int array[], int i) {
//	int max = array[0];
//	for (i = 1; i < 9; i++) {
//		if (max < array[i]) {
//			max = array[i];
//		}
//	}
//		return max;	
//}
////最大值函数
//	int minimum(int array[], int i){
//	int min = array[0];
//	for (i = 0; i < 9; i++) {
//		if (min > array[i]) {
//			min = array[i];
//		}
//	}
//		return min;
//}
////最小值函数
//int search(int array[], int i, int x) {
//	for (i = 0; i < 10; i++) {
//		if (array[i] = x) {
//			return 1;
//		}
//		else
//			return 0;
//	}
//}
////查找元素函数
//void reorder(int array[], int i) {
//	int j, temp;
//	for (i = 0; i < 9; i++)
//		for (j = 9; j > i; j--)
//			if (array[j] < array[j - 1])
//			{
//				temp = array[j - 1];
//				array[j - 1] = array[j];
//				array[j] = temp;
//			}
//}
////排序函数
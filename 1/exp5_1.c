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
//	//��������Ԫ��
//	printf("ԭ����:\n");
//	output(array, 10);
//	//�������Ԫ��
//	avg = average(array, 10);
//	max = maximum(array, 10);
//	min = minimum(array, 10);
//	printf("ƽ��ֵΪ:%.2lf,���ֵΪ:%d,��СֵΪ%d",avg,max,min);
//	//�������Сƽ��ֵ
//	printf("Ҫ���ҵ���:");
//	scanf("%d", &x);
//	result=search(array,10,x);
//	printf("%d", result);
//	//����ĳ��
//	reorder(array, 10);
//	printf("����������:\n");
//	output(array, 10);
//	//��������
//}
//	
//void input (int array[],int i){
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &array[i]);
//	}
//	return 0;
//}
////���뺯��
//void output(int array[],int i) {
//	for (i = 0; i < 10; i++) {
//		printf("%d ", array[i]);
//	}
//	return 0;
//}
////�������
//double average(int array[], int i) {
//	int sum=0;
//	for (i = 0; i < 10; i++) {
//		sum += array[i];
//	}
//	return sum / 10.0;
//}
////ƽ��ֵ����
//int maximum(int array[], int i) {
//	int max = array[0];
//	for (i = 1; i < 9; i++) {
//		if (max < array[i]) {
//			max = array[i];
//		}
//	}
//		return max;	
//}
////���ֵ����
//	int minimum(int array[], int i){
//	int min = array[0];
//	for (i = 0; i < 9; i++) {
//		if (min > array[i]) {
//			min = array[i];
//		}
//	}
//		return min;
//}
////��Сֵ����
//int search(int array[], int i, int x) {
//	for (i = 0; i < 10; i++) {
//		if (array[i] = x) {
//			return 1;
//		}
//		else
//			return 0;
//	}
//}
////����Ԫ�غ���
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
////������
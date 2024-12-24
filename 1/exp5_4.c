//#include<stdio.h>
//int main() {
//	int array[100][100] = { 0 };
//	int i=0, j=0,k=1;//控制行列
//	int n;//控制结束
//	scanf("%d", &n);
//	array[0][0] = k;
//	while (k < n*n){
//		while (j + 1 < n&&!array[i][j+1])
//			array[i][++j] = ++k;
//		while (i + 1 < n&&!array[i+1][j])
//			array[++i][j] = ++k;
//		while (j-1 >= 0 && !array[i][j-1])
//			array[i][--j] = ++k;
//		while (i - 1 >= 0 && !array[i - 1][j])
//			array[--i][j] = ++k;
//	}
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%5d ", array[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
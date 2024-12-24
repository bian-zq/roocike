//迭代方法
//#include<stdio.h>
//int main() {
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = a % b;
//	
//	while (a % b != 0) {
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	printf("%d", b);
//}


//递归方法
//#include<stdio.h>
//int function(int a, int b) {
//	if (a % b == 0)
//		return b;
//	else
//		return function(b, a % b);
//}
//int main() {
//	int a, b, c;
//	scanf(" %d%d", &a, &b);
//	c = function(a, b);
//	printf("%d", c);
//}
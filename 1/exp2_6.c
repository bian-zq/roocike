//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c, t;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	if (a < b) {
//		t = a;
//		a = b;
//		b = t;
//	}
//	if(a<c) {
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b< c) {
//		t = b;
//		b = c;
//		c = t;
//	}
//	if (b+c>a) {
//		if (fabs(a - b) <= 1e-3 &&fabs(b - c) <= 1e-3)
//			printf("等边三角形");
//		else if (fabs(b*b+c*c-a*a) <= 1e-3 && fabs(b - c) <= 1e-3)
//			printf("等腰直角三角形");
//		else if (fabs(a - b) <= 1e-3 || fabs(b - c) <= 1e-3 || fabs(a - c) <= 1e-3)
//			printf("等腰三角形");
//		else if (fabs(b * b + c * c - a * a) <= 1e-3)
//			printf("直角三角形");	
//		else
//			printf("一般三角形");
//	}
//	else
//		printf("不能组成三角形");
//	
//}

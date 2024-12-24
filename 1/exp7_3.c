//从键盘读入一个字符串，去掉其中所有的空格得到一个新串后再输出
// （只能定义一个字符数组，不可以定义两个字符数组，可以根据编程需要定义字符指针以及其他变量）。



#include<stdio.h>
#define N 100
char delete(char *a) {
	int i = 0, j = 0;
	while(a[i] != '\0'){
		if (a[i] == ' ') {
			for (j = i; a[j] != '\0'; j++) {
				a[j] = a[j + 1];
			}continue;
		}
		i++;
	}
	return a[i];
}
int main() {
	char a[N];
	gets(a);
	delete(a);
	puts(a);
	return 0;
}
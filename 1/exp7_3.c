//�Ӽ��̶���һ���ַ�����ȥ���������еĿո�õ�һ���´��������
// ��ֻ�ܶ���һ���ַ����飬�����Զ��������ַ����飬���Ը��ݱ����Ҫ�����ַ�ָ���Լ�������������



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
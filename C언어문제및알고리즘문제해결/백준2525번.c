#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
	int h = 0,m=0,p=0;
	scanf("%d %d", &h,&m);
	scanf("%d", &p);

	h += p / 60;
	m += p % 60;
	if (m >= 60) {
		h += 1;
		m -= 60;
	}
	if (h >= 24) {
		h -= 24;
	}
	printf("%d %d", h, m);

	return 0;
}
/*
* 1.�Է������� ���ڰ� �������µ� 
* m���ٰ� 59�� �Ѿ�� h���ٰ� 1�� ���ؾ��Ѵ�.
* �������� m�� ����
* ���� h�� 24���� ���ų� ũ�� 0���� �ʱ�ȭ �ؾ� �ȴ�.
*/
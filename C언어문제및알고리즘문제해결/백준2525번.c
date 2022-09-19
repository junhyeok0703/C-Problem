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
* 1.입력했을때 숫자가 더해지는데 
* m에다가 59이 넘어가면 h에다가 1을 더해야한다.
* 나머지는 m에 저장
* 만약 h가 24보다 같거나 크면 0으로 초기화 해야 된다.
*/
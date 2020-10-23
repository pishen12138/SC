#include <stdio.h>
int main()
{
	int a, b, time;
	a = 6;
	time = 1;
	printf("来玩个游戏吧\n\
猜一猜我想的什么数\n\
有三次机会\n");
	scanf_s("%d",&b);
	while (a != b && time<3)
	{
			if (b > a)
				printf("大了大了\n");
			else printf("小了小了\n");
			++time;
			printf("再猜一次吧\n");
			scanf_s("%d", &b);
	}
	if (a == b && time <= 3)
		printf("恭喜你，答对了\n\
但是答对了也没有什么奖励\n");
	else
	{
		printf("三次机会你都错了，不玩了\n\
告诉你答案吧\n");
		printf("我想的是%d", a);
	}
	return 0;
}

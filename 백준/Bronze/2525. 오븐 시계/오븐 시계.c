#include<stdio.h>

int main(void)
{
	int hour, min, cookTime;

	scanf("%d%d%d", &hour, &min, &cookTime);

	min = min + cookTime;

	if (min >= 60)					//분이 60분 이상이라면,  
	{
		hour = hour + (min / 60);	//넘친 만큼 시간에 더하고  
		min = min % 60;				//남은 값만 분에 저장 
	}

	if (hour >= 24)					//시간이 24시간 이상이라면, 
	{
		hour = hour % 24;			//남은 값만 시간에 저장 
	}

	printf("%d %d", hour, min);

	return 0;
}
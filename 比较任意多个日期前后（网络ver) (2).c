#include<stdio.h>

int main()
{
	int m[10], d[10], y[10];
	int mm = 99, md = 99, my = 99;	//初始化最小的月、日、年 
	int num = 0;

	
	
	for(int i = 0; ; i++) {		
	printf ("Enter a date (mm/dd/yy): ");		
	scanf ("%d/%d/%d", &m[i], &d[i], &y[i]);		
	if (m[i] == 0 && d[i] == 0 && y[i] == 0) break;		
	num++;	}
    
   	for (int i = 0; i < num; i++) {  //选出最小的年份 
	if (my >= y[i]) {
		my = y[i];
		}}
	for (int i = 0; i < num; i++) {  //再次扫描所有输入年份，在年份最小的日期中找到最小的月份 
		if (y[i] == my) {
			if (mm >= m[i]) {
				mm = m[i];
			}
		}
	} 
	for (int i = 0; i < num; i++) {  //同理扫描所有输入月份，在月份最小的日期中找到最小的日 
		if (m[i] == mm) {
			if (md >= d[i]) {
				md = d[i];
			}
		} 
	}
	printf ("%d/%d/%.2d is the earliest date", mm, md, my);
	
	return 0;



}

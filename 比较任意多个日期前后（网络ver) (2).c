#include<stdio.h>

int main()
{
	int m[10], d[10], y[10];
	int mm = 99, md = 99, my = 99;	//��ʼ����С���¡��ա��� 
	int num = 0;

	
	
	for(int i = 0; ; i++) {		
	printf ("Enter a date (mm/dd/yy): ");		
	scanf ("%d/%d/%d", &m[i], &d[i], &y[i]);		
	if (m[i] == 0 && d[i] == 0 && y[i] == 0) break;		
	num++;	}
    
   	for (int i = 0; i < num; i++) {  //ѡ����С����� 
	if (my >= y[i]) {
		my = y[i];
		}}
	for (int i = 0; i < num; i++) {  //�ٴ�ɨ������������ݣ��������С���������ҵ���С���·� 
		if (y[i] == my) {
			if (mm >= m[i]) {
				mm = m[i];
			}
		}
	} 
	for (int i = 0; i < num; i++) {  //ͬ��ɨ�����������·ݣ����·���С���������ҵ���С���� 
		if (m[i] == mm) {
			if (md >= d[i]) {
				md = d[i];
			}
		} 
	}
	printf ("%d/%d/%.2d is the earliest date", mm, md, my);
	
	return 0;



}

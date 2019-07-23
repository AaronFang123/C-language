#include<stdio.h>
#include<string.h>


#define MAX_REMIND 50          //maximum of reminders
#define MSG_LEN 60             //max length of reminder message

int read_line(char str[], int n);

int main(void)
{
	char reminders[MAX_REMIND][MSG_LEN + 3];   //read_line 是一个二维数组用于存储reminder 
	char day_str[3], msg_str[MSG_LEN + 1];
	int day, i, j, num_remind = 0;
	
	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter day and reminder: ");
		scanf("%2d", &day);
		if (day == 0)  break;
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);
		
		for (i = 0; i < num_remind; i++)
		  if (strcmp(day_str, reminders[i]) < 0)  break;    //查找数组确定这一天所在的位置 
  		for (j = num_remind; j > i; j--)
  		  strcpy(reminders[j], reminders[j - 1]);           // 把上述找到位置之后的所有字符串往后移动一个单位 
  		  
  		strcpy(reminders[i], day_str);                      //把这一天的活动日期到i处的reminder中 
  		strcat(reminders[i], msg_str);                      //把提醒附加到日期后 
  		
  		num_remind++;
  		  
	}
	
	printf("\nDay Remider\n");
	for(i = 0; i < num_remind; i++)
	  printf(" %s\n", reminders[i]);
	  
	return 0;
}

int read_line(char str[], int n)
{
	int ch, i = 0;
	
	while ((ch = getchar()) != '\n')
	  if (i < n)
	    str[i++] = ch;
    str[i] = '\0';
    return i;
}


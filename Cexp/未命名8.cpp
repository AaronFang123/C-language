//-------------------------------------------------------------------
//˵������Ʒ����ϵͳ������ʵ�ֿ��
//ʱ�䣺2018.11.20
//������1. ����goodsinfo.txt�������⣨��Ʒ���������ģ�
//        MAC�²���UNICODE�޷���ȡ��utf-8�������룬GBK��ASCII��������������д
//        Windows�²���ANSII����洢������
//        ���ߣ�ʹ��utf-8���룬���ڿ���̨�з����������
//        chcp 65001
//        ��������л���utf-8ģʽ���л���ԭ����ģʽ�뷢���������
//        chcp 936
//     2. visualstudio����fopen��һϵ���ļ�������������ȫ��������Ŀ-��
//        ����-��Ԥ������-��Ԥ���������崦����_CRT_SECURE_NO_WARNINGS
//����1. ���ƴ���//TO DO YOUR WORK�ĺ���
//     2. ���ݽṹ��ʵ�ַ�ʽ��������ʵ��
//     3. �ļ��Ķ�д�ο�fileIOreferrence����
//     4. ע�⴫ָ��*L�ʹ�ָ��ĵ�ַ**L������
//-------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

//--------------------------------------------------------------------
//��Ʒ���������
//--------------------------------------------------------------------
#define MAX 100
//--------------------------------------------------------------------
//ȫ�ֱ������洢��ǰ��Ʒ������
//--------------------------------------------------------------------
int CurrentCnt = 0;
//--------------------------------------------------------------------
//��Ʒ��Ϣ�ṹ�Ķ���
//--------------------------------------------------------------------
#define MAX_ID_LEN 30
#define MAX_NAME_LEN 30
#define MAX_PRICE_LEN 30
#define MAX_DISCOUNT_LEN 30

bool occur;

typedef struct {
    char	goods_id[MAX_ID_LEN];
    char	goods_name[MAX_NAME_LEN];
    int  	goods_price;
    char	goods_discount[MAX_DISCOUNT_LEN];
    int		goods_amount;
    int		goods_remain;
} GoodsInfo;

//--------------------------------------------------------------------
//������Ʒ����Ľ��
//--------------------------------------------------------------------
typedef struct node
{
    GoodsInfo data;
    struct node *next;
} GoodsList;

//--------------------------------------------------------------------
//�ο������������������ṩ�ļ���д�Ĳ���
//--------------------------------------------------------------------

void fileIOreferrence(void)
{
    char tempstring[30];

    //�����ļ�������ָ��
    FILE *fp;
    //fopen���ڴ��ļ�����������������һ�����ļ���·����һ�����ļ��򿪵ķ�ʽ
    //����xxxxxx.txt�͸���Ŀ�Ŀ�ִ���ļ���ͬһĿ¼�£���˴�ֻ��Ҫ����ȡ�����ļ���
    //����r������ֻ����ʽ���ļ�
    fp = fopen("xxxxxxx.txt", "r"); 
    //���w�����ֻд�ļ������ļ������򳤶���Ϊ0�������ļ�������ʧ�����������򴴽����ļ�
    //����򿪷�ʽ�����в����ĵ�
    fp = fopen("xxxxxxx.txt", "w");

    //fscanf���ڴ�txt�ļ��ж�ȡ���ݣ��������ַ�����ʽ����һ���ַ��������tempstring��
    fscanf(fp, "%s", tempstring);
    //�����Ը�ʽ���ķ�ʽ�����ַ���
    fscanf(fp, "\t%s\n", tempstring);

    //fprintf�Ը�ʽ���ķ�ʽ��txt�ļ���д������
    fprintf(fp, "%s\t", tempstring);

    //����ļ������Ƿ��Ѿ������ļ���������
    while ( !feof(fp))
    {
        //��������
    }

    //�����Ҫʹ��fclose�ر��ļ�ָ��
    fclose(fp);
}

//--------------------------------------------------------------------
//�����Ʒ�ļ��Ƿ���ڻ����Ƿ�Ϊ��
//--------------------------------------------------------------------
bool check_nullfile(void)
{
    FILE *fp = fopen("D:/C/project", "r");
    //file not exist
    if (!fp) {
        printf("��Ʒ��Ϣ��ʼ���ļ������ڣ�����Ϊ���½�һ��.\n");
        FILE *fp = fopen("C:/goodsinfo.txt", "w");
        fclose(fp);

        return false;
    }
        //file already exist
    else {
        int temp;
        //res for try to read file if file null feof() can't determine whether file is null or not
        int res = fscanf(fp, "%d", &temp);
        fclose(fp);
        if (res <= 0)
            return false;
        else
            return true;
    }
}

//--------------------------------------------------------------------
//���ж�ȡ�������Ϣ
//--------------------------------------------------------------------
int read_line(char str[], int n)
{
    int ch, i = 0;

    while (isspace(ch = getchar()))
        ;
    while (ch != '\n' && ch != EOF) {
        if (i < n)
            str[i++] = ch;
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}
//-------------------------------------------------------------
//��ӡ������Ʒ����ڵ����Ϣ 
//-------------------------------------------------------------
void Goodsprint(GoodsList *p){
    /**
     * 1.��ӡ����������Ʒ������Ϣ
     */
    //TO DO YOUR WORK

    //    �����ʽ�ο���
    //    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    //    printf("ID:%s\t����:%s\t�۸�:%s\t�ۿ�:%s\t����:%d\tʣ��:%d\n",
    //           ����������������);
    //    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n"); 
}
//--------------------------------------------------------------------
//�ͷ���Ʒ����
//--------------------------------------------------------------------
void DestroyGoods(GoodsList **L) {
    /**
     * 1.ʹ��free��������free��L�����нڵ�
     */
    //TO DO YOUR WORK
    GoodsList *TMP = NULL;  
    if((*L) == NULL)  
    {  
        printf("�����ѿգ��������\n");  
        return;  
    }  
    while((*L) -> next != NULL)             // ѭ���ͷ������еĽ����ռ�ڴ�
    {  
        TMP = (*L) -> next;  
        free((*L));  
        (*L) = TMP;                         //��ʱָ�����ԭ������һ��    
    }  
  
    
    if((*L) != NULL)                        //��ս�����������һ�����  
    {  
        free((*L));  
        (*L) = NULL;  
                                            //ͷ���ָ����Ϊ�� 
    }  
    printf("�������\n");  
    return;
    
}

//--------------------------------------------------------------------
//ɾ����Ʒ�ļ��Լ���Ʒ�����е�������Ϣ
//--------------------------------------------------------------------
void DelAll(GoodsList **L) {
    /**
     * 1.��մ洢��Ʒ���ݵ��ļ�
     * 2.�����Ʒ�����������еĽڵ㣬���½�һ��������ͷ
     */
    //TO DO YOUR WORK
//1
   FILE *fp;              //�޸��ڵ�ǰPC�µ�·�� 
   fp = fopen("D:/C/project", "w");
   fclose(fp);
//2
	DestroyGoods(L);     //������� 
	GoodsList *TMP ;
	if ((*L)== NULL)
	  return;
    while ((*L) != NULL)  //�������д��ڵĽڵ� 
    {
    	TMP = (*L) -> next;
    	free((TMP));
    	(*L) = TMP;
    	return;
    }
}

//--------------------------------------------------------------------
//��ȡ��Ʒ�ļ�goodsinfo.txt������,����������L
//--------------------------------------------------------------------
GoodsList* info_init() {
     /**
     * 1.�ж�goodsinfo.txt�Ƿ���ڣ����������½�һ��goodsinfo.txt
     * 2.��δ�ﵽ�ļ�β������£����ļ��ж�ȡ��Ʒ��Ϣ
     * 3.Ȼ���½�����
     * �ļ���Ϣ�Ķ�д�ɲ���fileIOreferrence����
     */

    //TO DO YOUR WORK
   
   // printf("��Ʒ�������ļ��ѽ�������%d����Ʒ��¼\n", CurrentCnt);
   check_nullfile();
   GoodsList *head = (GoodsList *)malloc(sizeof(GoodsList));
   GoodsList *p;
   GoodsList *q;
   p = q = head;
   FILE *fp = fopen("C:/goodsinof.txt", "r");
    
   if ( fp == NULL)
   {
   	  printf("���ļ�ʧ��\n");
   	  return NULL;
   }
   char	id[MAX_ID_LEN];
    char	name[MAX_NAME_LEN];
    int  	price;
    char	discount[MAX_DISCOUNT_LEN];
    int		amount;
    int		remain;
   while (fscanf(fp, "%s\t%s\t%s\t%s\t%d\t%d\n", id, name, &price, discount, &amount, &remain) != EOF)
   {
   	  
	    q = (GoodsList *)malloc(sizeof(GoodsList));
   	    strcpy(q->data.goods_id, id);
   	    strcpy(q->data.goods_name, name);
   	    q->data.goods_price = price;
   	    strcpy(q ->data .goods_discount, discount);
   	    q->data.goods_amount = amount;
   	    q->data.goods_remain = remain;
   	    p ->next = q;
   	    p = q;
   }
   p ->next = NULL;
   fclose(fp);
   return head;
   
   
   
}

//--------------------------------------------------------------------
//����ǰ��Ʒ�����е����ݴ�����Ʒ�ļ�goodsinfo.txt�����̺���������L
//--------------------------------------------------------------------
void info_flush(GoodsList *L) {
    /**
     * 1.����������д�뵽goodsinfo.txt
     * 2.��������
     * 3.��Ʒ������0
     * �ļ���Ϣ�Ķ�д�ɲ���fileIOreferrence����
     */

    //TO DO YOUR WORK
   
    //    ������ݲο���
    //    if .... printf("��ʾ��%d����Ʒ��Ϣ����Goodsinfo.txt�ļ�\n", savecount);
    //    else printf("��ʾ��δд���κ���Ʒ��Ϣ��Goodsinfo.txt�ļ�\n");
    GoodsList *p = L->next;
    FILE *fp = fopen("D:/C/project", "w");
    if (fp == NULL)
    {
    	printf("���ļ�ʧ�ܣ�\n");
    	return ;
    }
    while(p)
    {
    	fprintf(fp, "%s\t%s\t%s\t%s\t%d\t%d", p->data.goods_id, p->data.goods_name,
		p->data.goods_price, p->data.goods_discount, p->data.goods_amount, p->data.goods_remain );
		p = p->next;
    }
    
    fprintf(fp,"\n");
    fclose(fp);
    
    DestroyGoods(&L);
    
    CurrentCnt = 0;
    
    
}

//--------------------------------------------------------------------
//����Ļ�����������Ʒ��Ϣ
//--------------------------------------------------------------------
void OutputAll(GoodsList *L)
{
     /**
     * 1.���������ݽ��ж�ȡ��Ȼ�������Ʒ��Ϣ
     */
    //TO DO YOUR WORK

    //    �����ʽ�ο���
    //    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    //    printf("ID:%s\t����:%s\t�۸�:%s\t�ۿ�:%s\t����:%d\tʣ��:%d\n",
    //           ����������������);
    //    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");   
	
	GoodsList *p;
	printf("�����д�ӡ\n");
	p = L;
	if( L!= NULL){
		
		do{
		  printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		  printf("ID:%s\t����:%s\t�۸�:%s\t�ۿ�:%s\t����:%d\tʣ��:%d\n",
		  L->data.goods_name, L->data.goods_price,L->data.goods_discount,
		  L->data.goods_amount,L->data.goods_remain);
	      printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	      
		  p = p ->next;
			
		}while(p != NULL);
	} 
	
}

//--------------------------------------------------------------------
//���һ����Ʒ��¼
//--------------------------------------------------------------------
void info_insert(GoodsList **L) {
    /**
     * 1.���������ĳһ����Ʒ����Ϣ������ID�����ơ��۸��ۿۡ�������ʣ��
     * ע������ͨ��scanf()����������������Ʒ��Ϣ��ÿ�������Ի��з���������Ϣ�е�ÿ����Ŀ
     *    �����С��Ʒ��Ϣ�ṹ����ڴ�ռ䣬Ȼ�󽫶�������ݷֱ𿽱����ѷ���õ����ڴ��У�
     *    �����ַ����Ŀ�������ϵͳ����strcpy��
     *    ���⣺����ʹ��ǰ���Զ����read_line�������������ݶ�ȡ
     * 2.�ֱ�ʵ��ͷ�巨��β�巨���м�λ�ò������֣�
     * 3.Ȼ������û�����Ĳ��뷽ʽ������Ӧ�Ľڵ�λ�ò���
     * 4.��ѡ����ID���ڲ����ʱ����Ҫ���в��أ�����Ѿ��и�ID���ˣ���ʾ�ظ�
     */

    // TO DO YOUR WORK
    
}

//--------------------------------------------------------------------
//ɾ��һ����Ʒ��¼
//--------------------------------------------------------------------

GoodsList *info_dele(void) {
    /**
     * 1.������Ʒ�����ƣ�������ƴ�����ɾ����Ʒ��Ϣ�����ͷŶ�Ӧָ����ָ����ڴ棬
     *   ���ҽ���ָ�븳ֵΪ�գ�Ȼ���ӡ��ɾ���ɹ�����ʾ
     * 2.����������Ʒ���Ʋ������������Ʒ�����ڵ���ʾ
     */

    // TO DO YOUR WORK
   
    
}

//--------------------------------------------------------------------
//����һ����Ʒ��¼
//--------------------------------------------------------------------
GoodsList *info_search(GoodsList *L) {
    /**
     * 1.������Ʒ�����ƣ�������ƴ������ӡ��Ʒ��Ϣ
     * 2.�����Ʒ����������ʾ��Ʒ������
     */

    // TO DO YOUR WORK
   GoodsList *pointer;
   
   char name[MAX_NAME_LEN +1];
   printf("������Ʒ��������������"); 
   scanf("%s", name);
   
   pointer = L;
   while(pointer != NULL)
   {
   	  if(strcmp(L->data.goods_name ,name ) == 0)
   	  {
  	 	  printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		  printf("ID:%s\t����:%s\t�۸�:%s\t�ۿ�:%s\t����:%d\tʣ��:%d\n",
		  L->data.goods_name, L->data.goods_price,L->data.goods_discount,
		  L->data.goods_amount,L->data.goods_remain);
	      printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	      occur = true;
		 
  	   }
  	   else {
  		  printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		  printf("����Ʒ������\n");
	      printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	      occur = false;
   	  }
   	 pointer = pointer->next; 
   }
   return pointer;
}

//--------------------------------------------------------------------
//�޸�һ����Ʒ��¼
//--------------------------------------------------------------------
void info_change(GoodsList **L) {
     /**
     * 1.������Ʒ�����ƣ�������ƴ������ӡ��Ʒ��Ϣ
     * 2.Ȼ���û������µ���Ʒ��Ϣ
     * 3.���Ҫ�޸ĵ���Ʒ���ڲ�����Ϣ���������������޸ĳɹ��������´�ӡ�����ѡ�����
     */

    // TO DO YOUR WORK
}

//--------------------------------------------------------------------
//ð������ʵ�ֶ�����ڵ������
//--------------------------------------------------------------------
void bubble_sort(GoodsList **L) {
     /**
     * 1.����ð���������Ʒ����������򣬰��ռ۸�ӵ͵��߽�������
     * 2.Ȼ�������������Ʒ����
     */

    // TO DO YOUR WORK
}

//--------------------------------------------------------------------
//������
//--------------------------------------------------------------------
int main()
{
     /**
     * 1.��ʼ��һ������
     * 2.ѭ����ʾ��Ʒ����ϵͳ�Ĳ���ѡ���б�
     * 3.�û�ѡ��������Ӧ�ĺ������д���������ɺ��ٶ���ʾϵͳѡ���б�
     * 4.���ѡ�񳬳��б�Χ����Ĭ���˳�ϵͳ�����̡�
     */

    // TO DO YOUR WORK   
    
    
    GoodsList *L;
    L = (GoodsList *)malloc(sizeof(GoodsList));
    if(L == NULL){
    	printf("�����ڴ�ռ�ʧ��\n");
    }
    L ->next = NULL;
    
    info_
    for(;;){
    	
   
    printf("��Ʒ�������ļ��ѽ�������%d����Ʒ��¼\n", CurrentCnt);
    printf("������Ʒ����ϵͳ\n");
    printf("*************************************************\n");
    printf("1.��ʾ������Ʒ����Ϣ��\n"); 
	printf("2.�޸�ĳ����Ʒ����Ϣ��\n") ;
	printf("3.����ĳ����Ʒ����Ϣ��\n") ;
	printf("4.ɾ��ĳ����Ʒ����Ϣ��\n") ;
	printf("5.����ĳ����Ʒ����Ϣ��\n") ;
	printf("6.��Ʒ���̲��˳�ϵͳ��\n") ;
	printf("7.����Ʒ�۸��������\n") ;
	printf("8.�����ã�ɾ���������ݣ�\n") ;
	printf("�����������ڲ��˳�ϵͳ��\n") ;
	printf("*************************************************\n");
	
	int choose;
	printf("��������ѡ��: ");
	scanf("%d", &choose);
	switch(choose)
	{
		case 1:
		OutputAll(L);	break;
		case 2:
		info_change(&L);	break;
		case 3:
		info_insert(&L);  break;
		case 4:
		info_dele();  break;
		case 5:
		info_search(L);  break;
		case 6:
		info_flush(L);  break; 
		case 7:
		bubble_sort(&L);  break;
		case 8:
		DelAll(&L);  break;
		
		default:
		return 0;	break;
	}
	 }
    return 0;
}
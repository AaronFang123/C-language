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
    FILE *fp = fopen("D:/C/project/goodsinof.txt", "r");
    //file not exist
    if (!fp) {
        printf("��Ʒ��Ϣ��ʼ���ļ������ڣ�����Ϊ���½�һ��.\n");
        FILE *fp = fopen("D:/C/project/goodsinof.txt", "w");
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
    CurrentCnt = 0;
    printf("��ղ������\n");  
    return;
    
}

//--------------------------------------------------------------------
//ɾ����Ʒ�ļ��Լ���Ʒ�����е�������Ϣ
//--------------------------------------------------------------------
GoodsList	* DelAll(GoodsList **L) {
    /**
     * 1.��մ洢��Ʒ���ݵ��ļ�
     * 2.�����Ʒ�����������еĽڵ㣬���½�һ��������ͷ
     */
    //TO DO YOUR WORK
//1
   FILE *fp;                                          //�޸��ڵ�ǰPC�µ�·�� 
   fp = fopen("D:/C/project/goodsinof.txt", "w");
   fclose(fp);
//2
	DestroyGoods(L);                                  //������� 
	GoodsList *TMP ;
	if ((*L)== NULL)
	  return;
    while ((*L) != NULL)                              //�������д��ڵĽڵ� 
    {
    	TMP = (*L) -> next;
    	free((TMP));
    	(*L) = TMP;
    	return;
    }
    GoodsList *new_node= (GoodsList*)malloc(sizeof(GoodsList));
}

//--------------------------------------------------------------------
//��ȡ��Ʒ�ļ�goodsinfo.txt������,����������L
//--------------------------------------------------------------------
GoodsList* info_init(void) {
     /**
     * 1.�ж�goodsinfo.txt�Ƿ���ڣ����������½�һ��goodsinfo.txt
     * 2.��δ�ﵽ�ļ�β������£����ļ��ж�ȡ��Ʒ��Ϣ
     * 3.Ȼ���½�����
     * �ļ���Ϣ�Ķ�д�ɲ���fileIOreferrence����
     */

    //TO DO YOUR WORK
   
   // printf("��Ʒ�������ļ��ѽ�������%d����Ʒ��¼\n", CurrentCnt);
  	char cos;
   if(check_nullfile() == 0){
   	int i;
   	for (;;){
	   	printf("��ƷĿ¼Ϊ��\n");
	   	printf("����Y(y)�Դ�����һ����Ʒ������N(n)���˳���  ") ;
	   
	   	cos = getchar();
	   	if(cos == 'Y'||cos == 'N'||cos == 'y' || cos == 'n')  break;
	   }
   			if(cos == 'Y'||cos == 'y'  ){
    		GoodsList *new_node=(GoodsList*)malloc(sizeof(GoodsList));
    		printf("������Ҫ�������Ʒ��Ϣ:\n");
			printf("��ƷID: ");
			scanf("%s",new_node->data.goods_id);
			printf("��Ʒ����: ");
			scanf("%s",new_node->data.goods_name);
			printf("��Ʒ�۸�: ");
			scanf("%d",&new_node->data.goods_price);
			printf("��Ʒ�ۿ�: ");
			scanf("%s",new_node->data.goods_discount);
			printf("��Ʒ����: ");
			scanf("%d",&new_node->data.goods_amount);
			printf("��Ʒʣ��: ");
			scanf("%d",&new_node->data.goods_remain);
 			CurrentCnt++;
 			printf("\n");
 			return new_node;
    }
	else
	exit(0);
	}
	CurrentCnt++;
	GoodsList *head = (GoodsList *)malloc(sizeof(GoodsList));
    GoodsList *p;
    GoodsList *q;
    p = q = head;
   FILE *fp = fopen("D:/C/project/goodsinof.dat", "r");
    
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
   	    CurrentCnt++; 
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
     int i;
     GoodsList *p = L;
     FILE *fp;
	 fp = fopen("D:/C/project/goodsinfo.dat","w");
	 if(CurrentCnt == 1){
 		fprintf(fp,"%s\t%s\t%d\t%s\t%d\t%d",
		((p->data).goods_id),((p->data).goods_name),
    	((p->data).goods_price),((p->data).goods_discount),
		((p->data).goods_amount),((p->data).goods_remain));
 	}
    else {
		for(i = 0;i < CurrentCnt-1; i++){ 
    	fprintf(fp,"%s\t%s\t%d\t%s\t%d\t%d\n",
		((p->data).goods_id),((p->data).goods_name),
    	((p->data).goods_price),((p->data).goods_discount),
		((p->data).goods_amount),((p->data).goods_remain));
		 p=p->next;
    }
    	fprintf(fp,"%s\t%s\t%d\t%s\t%d\t%d",
		((p->data).goods_id),((p->data).goods_name),
    	((p->data).goods_price),((p->data).goods_discount),
		((p->data).goods_amount),((p->data).goods_remain));
	}
    printf("��Ʒ��Ϣ�Ѿ��ɹ�����\n");
    fclose(fp);
    DestroyGoods(L);
    printf("��Ʒ����������\n");
   
    exit(0);
    
    
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
    //    printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    //    printf("ID:%s\t����:%s\t�۸�:%s\t�ۿ�:%s\t����:%d\tʣ��:%d\n",
    //           ����������������);
    //    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");   
	
	 GoodsList *p = L;
	 int i;
	 
	for(i = 0;i < CurrentCnt; i++)
	{
 	
 	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	printf("ID:%s\t����:%s\t�۸�:%d  \t�ۿ�:%s\t����:%d  \tʣ��:%d\n",
	((p->data).goods_id),((p->data).goods_name),
    ((p->data).goods_price),((p->data).goods_discount),
	((p->data).goods_amount),((p->data).goods_remain));
	printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	p= p->next;
	
 	}
	
}

//--------------------------------------------------------------------
//���һ����Ʒ��¼
//--------------------------------------------------------------------
GoodsList* info_insert(GoodsList *L) {
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
    GoodsList *new_node= (GoodsList*)malloc(sizeof(GoodsList)), *head = L;
    char same[30];
    printf("������Ҫ�������Ʒ��Ϣ��\n");
    	printf("��ƷID: ");
    	scanf("%s", same);
    	strcpy(new_node->data.goods_id, same);
    	printf("��Ʒ���ƣ�");
		scanf("%s", new_node->data.goods_name);
		printf("��Ʒ�۸�"); 
		scanf("%d", &new_node->data.goods_price);
		printf("��Ʒ�ۿۣ�");
		scanf("%s", new_node->data.goods_discount);
		printf("��Ʒ������");
		scanf("%d", &new_node->data.goods_amount); 
		printf("��Ʒʣ�ࣺ");
		scanf("%d", &new_node->data.goods_remain);
		printf("�������ֱ�����Ҫ�������Ʒλ�ã�0.��Ʒ�б�β��"
		"1.��Ʒͷ���б� i.��Ʒ�б��м��iλ�ã�");
		int i;
		scanf("%d", &i);
		if(i = 1){
			new_node ->next = head;
			CurrentCnt++;
			printf("��Ʒ��Ϣ����ɲ��룡");
			return new_node; 
		} 
		else if(i == 0){
			int q;
			GoodsList *p = head;
			for(q = 0;q < CurrentCnt; q++){
				if(p -> next == NULL){
					p ->next = new_node;
					new_node->next= NULL;
					CurrentCnt++;
					printf("��Ʒ��Ϣ����ɲ��룡");
					return head;
				}
				p = p->next;
			}
			
		}
		else{
			if(i > CurrentCnt){
				printf("Illegel input");
				return head;
			}
			
			GoodsList *a = head, *b;
			int q;
			for(q = 0; q < i-2; q++){
				a = a->next;
			}
			b = a->next;
			a->next= new_node;
			new_node ->next = b;
			printf("��Ʒ��Ϣ����ɲ��룡");
			CurrentCnt++;
			
			return head;
		}
    
}

//--------------------------------------------------------------------
//ɾ��һ����Ʒ��¼
//--------------------------------------------------------------------
GoodsList	* info_dele(GoodsList *L) {
    /**
     * 1.������Ʒ�����ƣ�������ƴ�����ɾ����Ʒ��Ϣ�����ͷŶ�Ӧָ����ָ����ڴ棬
     *   ���ҽ���ָ�븳ֵΪ�գ�Ȼ���ӡ��ɾ���ɹ�����ʾ
     * 2.����������Ʒ���Ʋ������������Ʒ�����ڵ���ʾ
     */

    // TO DO YOUR WORK

    printf("������Ҫɾ������ƷID(-1�˳�����): ");
	char input[30];
	
	GoodsList *cur,*prev,*a=L,*p=L;
	
	scanf("%s",input);
	if(strcmp(input,"-1")==0)
	return a;

	else{
		for (; p!=NULL ; p = (p->next))
    	if (strcmp(input,(p->data).goods_id)==0){
	    	printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("ID:%s\t����:%s\t�۸�:%d  \t�ۿ�:%s\t����:%d  \tʣ��:%d\n",
			((p->data).goods_id),((p->data).goods_name),
    		((p->data).goods_price),((p->data).goods_discount),
			((p->data).goods_amount),((p->data).goods_remain));
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    	}
    	printf("�Ƿ�ɾ������Ʒ(Y/N): ");
    	
		if( getchar()=='Y' || getchar()=='y'){
			CurrentCnt--;
		for(cur = L,prev = NULL; cur != NULL && strcmp(cur ->data.goods_id , input)!=0; prev=cur,cur=cur->next);
		if(prev==NULL)
			a = a -> next;
		
		
		else
		prev -> next = cur -> next;
		free(cur);
		printf("��ʾ:ɾ��IDΪ%s����Ʒ�ɹ�\n",input);
		printf("��ʾ:��ǰʣ����Ʒ%d��\n",CurrentCnt);
	
		return a;
		}
	
		
	} 
	

}


//--------------------------------------------------------------------
//����һ����Ʒ��¼
//--------------------------------------------------------------------
GoodsList *info_search(GoodsList *L) 
{
    /**
     * 1.������Ʒ�����ƣ�������ƴ������ӡ��Ʒ��Ϣ
     * 2.�����Ʒ����������ʾ��Ʒ������
     */

    // TO DO YOUR WORK
   printf("������Ҫ���ҵ���Ʒ���ƣ�-1�˳����ң��� "); 
   char name[MAX_NAME_LEN + 1];
   scanf("%s", name);
   GoodsList *p;
   
   if(strcmp(name, "-1") == 0)
     exit(0);
   else
   {
   	
   	for(p = L; p != NULL; p = p->next)
   	  if(strcmp(p->data.goods_name, name) == 0)
	 	{
  	   	
	   		printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
			printf("ID:%s\t����:%s\t�۸�:%d  \t�ۿ�:%s\t����:%d  \tʣ��:%d\n",
			((p->data).goods_id),((p->data).goods_name),
    		((p->data).goods_price),((p->data).goods_discount),
			((p->data).goods_amount),((p->data).goods_remain));
			printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		
		return p;
   	   }
   printf("��Ʒ������\n");
   return NULL;
   }
    
 }   
    


//--------------------------------------------------------------------
//�޸�һ����Ʒ��¼
//--------------------------------------------------------------------
void info_change(GoodsList * L) 
{
     /**
     * 1.������Ʒ�����ƣ�������ƴ������ӡ��Ʒ��Ϣ
     * 2.Ȼ���û������µ���Ʒ��Ϣ
     * 3.���Ҫ�޸ĵ���Ʒ���ڲ�����Ϣ���������������޸ĳɹ��������´�ӡ�����ѡ�����
     */

    // TO DO YOUR WORK
     
	  
    char	id[MAX_ID_LEN];
    char	name1[MAX_NAME_LEN];
    int  	price;
    char	discount[MAX_DISCOUNT_LEN];
    int		amount;
    int		remain;
	 
   printf("������Ҫ�޸ĵ���ƷID��-1�˳����ң��� "); 
   char name[MAX_NAME_LEN + 1];
   scanf("%s", name);
   
   if(strcmp(name, "-1") == 0)
     return;
   else
   {
   	GoodsList *p;
   	for(p = L; p != NULL; p = p->next)
   	  if(strcmp((p->data).goods_id, name) == 0){
  	   	
	      printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		  printf("ID:%s\t����:%s\t�۸�:%d  \t�ۿ�:%s\t����:%d  \tʣ��:%d\n",
			((p->data).goods_id),((p->data).goods_name),
    		((p->data).goods_price),((p->data).goods_discount),
			((p->data).goods_amount),((p->data).goods_remain));
	      printf("\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	    
	    printf("�������µ���Ʒ��Ϣ��\n");
        
		printf("��ƷID��");
		scanf("%s", id);
		strcpy(p->data.goods_id, id); 
		
		printf("��Ʒ���ƣ�");
		scanf("%s", name1);
   	    strcpy(p->data.goods_name, name1);
	    
		printf("��Ʒ�۸�");
	    scanf("%d", &price);
   	    p->data.goods_price = price;
   	    
		printf("��Ʒ�ۿۣ�");
		scanf("%s", discount);
	    strcpy(p->data.goods_discount, discount);
	    
		printf("��Ʒ������");
	    scanf("%d", &amount);
   	    p->data.goods_amount = amount;
   	    
  		printf("��Ʒʣ�ࣺ");
	    scanf("%d", &remain);
   	    p->data.goods_remain = remain;
   	    
   	  
   }
		
   	   }
   printf("��Ϣ���޸�\n");
   return ;
   }
    
    
//--------------------------------------------------------------------
//ð������ʵ�ֶ�����ڵ������
//--------------------------------------------------------------------
GoodsList	* bubble_sort(GoodsList *L) {
     /**
     * 1.����ð���������Ʒ����������򣬰��ռ۸�ӵ͵��߽�������
     * 2.Ȼ�������������Ʒ����
     */

    // TO DO YOUR WORK
  
    GoodsList *a=NULL, *b=NULL,*head=L, *mid=malloc(sizeof(GoodsList));
    int p,q;
    
    for(p=CurrentCnt-1;p>0;p--){
    	a=head;
    	for(q=p;q>0;q--){
	    	b=a->next;
	    	if((a->data.goods_price)>(b->data.goods_price)){
	    		mid->data=b->data;
	    		b->data=a->data;
	    		a->data=mid->data;
	    			    		
	    	}
			a=b;	
	    }
    }
    printf("���������\n");
   
    OutputAll(head);
  
    return head;
}

//--------------------------------------------------------------------
//������
//--------------------------------------------------------------------
int main(void)
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
    

   L = info_init();
    
    
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
	OutputAll(L);break;
		case 2:
		info_change(L);break;
		case 3:
		L=info_insert(L);break;
		case 4:
		L=info_dele(L);break;
		case 5:
		info_search(L);break;
		case 6:
		info_flush(L);
		break;
		case 7:
		L = bubble_sort(L);break;
		case 8:
		L = DelAll(L);break;
		default:
		exit(0);	 
	}
	 }
    return 0;
}

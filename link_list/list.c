#include <stdio.h>
struct list_node
{
	int data;
	struct list_node * next;

	
};
typedef struct list_node T_LIST;
{
	if(NULL == head)
	{
		printf("head is null \r\n");
		return;
	}
	head->next = NULL;	
}
T_LIST* list_alloc(void)
{
	T_LIST *P = (T_LIST*)malloc(sizeof(T_LIST));
	if(p)
		{
			printf("memory not enough\r\n");
			return;
		}
	return p;
}

T_LIST* list_data_pos(T_LIST *head,int data)
{
	T_LIST *p = head;
	int target = data;
	while(p)
	{
		if(target == (p->data)
			break;
		p = p->next;
	}
	return p;

}
T_LIST* list_insert_end(T_LIST *head,T_LIST *next)
{
	T_LIST *p = head;
	while(p)
	{
		p = p->next;
	}
	if(p==NULL)
	{
		p->next = next; 
	}
}
T_LIST* list_insert_pos(T_LIST *head,T_LIST *pos,T_LIST *target)
{
		T_LIST * p = head;
		T_LIST * pre;
		while(p)
		{
			if(p == pos)
			{
				target->next = p;
				pre->next = target;
				return p;
			}
			pre = p;
			p = p->next;
		}
		return p;
}
void list_delete_end(T_LIST *head)
{
	T_LIST *p  	= head;
	T_LIST *pre = head;
	while(p)
	{
		pre = p;
		p = p->next;
	}
	free(p);
}
void list_destroy(T_LIST *head)
{
	free(head);
}
void printf_list(T_LIST *head)
{
	T_LIST *p = head;
	int i = 0;
	while(p)
	{
		printf("data[%d] = %d\r\n",p->data);
		i++;
	}
}

/**
 * [main description]
 * @param  argc [description]
 * @param  argv [description]
 * @return      [description]
 */
void int main(int argc, char const *argv[])
{
	int i;
	T_LIST* head;
	init_list(head);
	for(i = 0; i < 10; i++)
	{
		T_LIST* p1 =  list_alloc();
		p->data = i+2;
		list_insert_end(head,p1);
	}
	printf_list(head);
	list_destroy(head);d
	return 0;
}



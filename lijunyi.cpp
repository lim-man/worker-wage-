#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct worker{
int num;
char name[10];
char work[50];
double bas;
double a;
double ota;
double tax;
double hou;
double ann;
double pat;
double unemp;
double jiang;
double sal;
double all;
double home;

struct worker*next;
}node;
node*create()
{
    node*head,*r,*p;
    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    return head;
}
void input(node*head)
{
    int l, o,y,x;double w;
    int flag=0;
    node*p2=head;
    node* p1 = head;
    node*p;
    int n,i,j;
    for(i=0;;i++)
    {
        p=(node*)malloc(sizeof(node));
        printf("*******������ְ�����(Ϊ0ʱֹͣ����)��");
        scanf("%d",&p->num);
        for(j=0;;j++)
        {
            flag=0;
            p2=head;
            while(p2->next!=0)
        {
            if(p->num==p2->next->num)
                {
                    printf("�ñ���Ѿ���ʹ�ã������±��\n");
                    flag=1;
                }
                p2=p2->next;

        }
        if(flag==0)
        {
            break;
        }
        if(flag==1)
        {
           printf("�±�ţ�");
            scanf("%d",&p->num);
        }
        }
        if(p->num==0)
            break;
        printf("*******�������ְ��������");
        scanf("%s",&p->name);
        printf("*******�������ְ��ְ��");
        scanf("%s",&p->work);
        printf("���²���������ĸ������ᵼ��ϵͳ����\n");
        printf("*******�������ְ���������ʣ�");
        scanf("%lf",&p->bas);
        printf("*******�������ְ����λ������");
        scanf("%lf",&p->a);
        printf("*******�������ְ������������");
        scanf("%lf",&p->ota);
        printf("*******�������ְ������˰��");
        scanf("%lf",&p->tax);
        printf("*******�������ְ����ס��������Ǯ����");
        scanf("%lf",&p->hou);
        printf("*******�������ְ�������Ͻ�");
        scanf("%lf",&p->ann);
        printf("*******�������ְ����ҽ�Ʊ���Ǯ����");
        scanf("%lf",&p->pat);
        printf("*******�������ְ����ʧҵ����Ǯ����");
        scanf("%lf",&p->unemp);
        printf("*******�������ְ������");
        scanf("%lf",&p->jiang);
        for(l=0;;l++)
        {
            p->sal=(p->bas)+(p->a)+(p->ota);
        p->all=p->sal+p->jiang;
        p->home=p->all-(p->tax)-(p->hou)-(p->ann)-(p->pat)-(p->unemp);
            if(p->home>=0)
                break;
            if(p->home<0)
        {


            printf("�����ʵ������Ϊ��������ȷ����������Ƿ���ȷ        ****1��ȷ��  2������ȷ");
        scanf("%d",&y);
        if(y==1)
            break;
        if(y==2)
        {
            for(o=0;;o++)
            {
                printf("��ѡ����Ҫ�޸ĵ�ѡ��(-1�����޸�)��1����������2����λ����3����������4������˰��5��ס������6�����Ͻ�7��ҽ�Ʊ���8��ʧҵ����9������\n");
           scanf("%d",&x);
           if(x==-1)  break;
           printf("********�����޸Ľ�");
           scanf("%lf",&w);
           if(x==1)
               p->bas=w;
           if(x==2)
              p->a=w;
           if(x==3)
              p->ota=w;
           if(x==4)
                p->tax=w;

            if(x==5)
              p->hou=w;
            if(x==6)
            p->ann=w;
            if(x==7)
            p->pat=w;
            if(x==8)
            p->unemp=w;
            if(x==9)
            p->jiang=w;
        }

        }
        }
        }
        if(p1->next==0)
            {
                p->next = 0;
            p1->next = p;
            p1=p1->next;
            }
        else
        {
            while(p1->next!=0)
               {
                   p1=p1->next;
               }
            p->next = 0;
            p1->next = p;
            p1=p1->next;
        }



}
}



void app(node*head)
{
    int i, y,x;double w;
    node*temp=head;
    temp=temp->next;
    while(temp!=NULL)
    {
        temp->sal=(temp->bas)+(temp->a)+(temp->ota);
        temp->all=temp->sal+temp->jiang;
        temp->home=temp->all-(temp->tax)-(temp->hou)-(temp->ann)-(temp->pat)-(temp->unemp);
        if(temp->home>=0)
        temp=temp->next;
        else
        {
            printf("�����ʵ������Ϊ��������ȷ����������Ƿ���ȷ        ****1��ȷ��  2������ȷ");
        scanf("%d",&y);
        if(y==1)
            temp=temp->next;
        if(y==2)
        {
            for(i=0;;i++)
            {
                printf("��ѡ����Ҫ�޸ĵ�ѡ��(-1�����޸�)��1����������2����λ����3����������4������˰��5��ס������6�����Ͻ�7��ҽ�Ʊ���8��ʧҵ����9������\n");
           scanf("%d",&x);
           if(x==-1)  break;
           printf("********�����޸Ľ�");
           scanf("%lf",&w);
           if(x==1)
               temp->bas=w;
           if(x==2)
               temp->a=w;
           if(x==3)
               temp->ota=w;
           if(x==4)
                temp->tax=w;

            if(x==5)
                temp->hou=w;
            if(x==6)
            temp->ann=w;
            if(x==7)
            temp->pat=w;
            if(x==8)
            temp->unemp=w;
            if(x==9)
            temp->jiang=w;
        }
        temp=temp->next;
        }
    }
}
}
void sear(node*head)
{
   char ch[20];
   int flag=0;
    printf("*******���������ѯְ����������");
    scanf("%s",&ch);
    if(head->next==0)
        {
            printf("δ������Ϣ");
            flag=1;
        }
    while(head->next!=0)
    {
        if(strcmp(head->next->name,ch)==0)
        {printf("���\t����\tְ��\t��������\t��λ����\t��������\t����˰��\tס������\t���Ͻ��\tҽ�Ʊ���\tʧҵ����\t���˽���\tӦ������\t�����ܶ�\tʵ������\t\n");
        printf("%d\t%s\t%s\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\n",head->next->num,head->next->name,head->next->work,head->next->bas,head->next->a,head->next->ota,head->next->tax,head->next->hou,head->next->ann,head->next->pat,head->next->unemp,head->next->jiang,head->next->sal,head->next->all,head->next->home);
         flag=1;
        }
        head=head->next;
}
  if(flag==0)
  {
      printf("δ��ѯ����ְ��\n");
  }

}

void change(node*head)
{
    int i,m,j;
    double h;
    char k[10];

    node*pnew=head;
    pnew=head->next;
    char ch1[20];
    printf("                                ��ϵͳ�ɸ�����������£�               \n ");
    printf("           1��ְ�� 2���������� 3����λ���� 4���������� 5������˰�� 6�����˽���          \n");


    for(j=0;;j++)

    {
        int flag1=0;
        pnew=head->next;
        printf("*******����������˵�����(���롱###��ֹͣ����)********\n");
        scanf("%s",&ch1);
       if(strcmp(ch1,"###")==0)
        break;
       while(pnew!=0)
       {
           if(strcmp(ch1,pnew->name)==0)
           {
               flag1=1;
                for(i=0;;i++)
           {

                printf("*******��������ĵĸ��������(����-1Ϊ����):");
                scanf("%d",&m);

                if(m==-1)
                  break;
                 if(m==1)
                 {
                     printf("*******��������ְλ��");
                     scanf("%s",&k);
                     strcpy(pnew->work,k);
                 }
                 else
                 {
                     printf("*******��������Ľ�");
                     scanf("%lf",&h);
                     if(m==2)
                     pnew->bas=h;
                     if(m==3)
                     pnew->a=h;
                     if(m==4)
                     pnew->ota=h;
                     if(m==5)
                     pnew->tax=h;
                     if(m==6)
                     pnew->jiang=h;
                }

           }
       }
       pnew=pnew->next;
       }
       if(flag1==0)
        printf("δ�ҵ���ְ�����޷����и���\n");

    }



}
void print(node*head)
{
    printf("���\t����\tְ��\t��������\t��λ����\t��������\t����˰��\tס������\t���Ͻ��\tҽ�Ʊ���\tʧҵ����\t���˽���\tӦ������\t�����ܶ�\tʵ������\t\n");
    while(head->next!=NULL)
    {
        printf("%d\t%s\t%s\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\n",head->next->num,head->next->name,head->next->work,head->next->bas,head->next->a,head->next->ota,head->next->tax,head->next->hou,head->next->ann,head->next->pat,head->next->unemp,head->next->jiang,head->next->sal,head->next->all,head->next->home);

        head=head->next;
    }
}


int main()
{
    FILE*fp=NULL;

    node*pstu;
    pstu=create();
    int n,g;
    fp=fopen("D:/ְ��������Ϣ����.txt","w");
printf("********************************ְ��������Ϣ����ϵͳ***************************************\n");
printf("��ϵͳ��ѡ��ķ���1������ְ��������Ϣ  2��ְ��������Ϣ��ѯ  3��ְ����Ϣ�޸�  \n ");
for(g=0;;g++)
      {
          printf("*******************************************************************\n");
          printf("                      ��ϵͳ��ѡ��ķ���\n");
           printf("                    1������ְ��������Ϣ \n");
          printf("                     2��ְ��������Ϣ��ѯ\n");
         printf("                      3��ְ����Ϣ�޸�  \n ");
         printf("********************************************************************\n");
          printf("ѡ�����(�����ǰ��ż���,������ֹ����,������'-1')��\n");
          scanf("%d",&n);
          if(n==-1)
            {
                break;
                printf("¼����̳ɹ���\n");
            }

       if(n==1)
       {

           input(pstu);

           print(pstu);
       }

      if(n==2)
      {

          sear(pstu);
      }
      if(n==3)
      {
          change(pstu);
          app(pstu);
          print(pstu);
      }
      }
      while(pstu->next!=0)
      {
          fprintf(fp,"���\t����\tְ��\t��������\t��λ����\t��������\t����˰��\tס������\t���Ͻ��\tҽ�Ʊ���\tʧҵ����\t���˽���\tӦ������\t�����ܶ�\tʵ������  \n");
          fprintf(fp,"%d\t%s\t%s\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t\n",pstu->next->num,pstu->next->name,pstu->next->work,pstu->next->bas,pstu->next->a,pstu->next->ota,pstu->next->tax,pstu->next->hou,pstu->next->ann,pstu->next->pat,pstu->next->unemp,pstu->next->jiang,pstu->next->sal,pstu->next->all,pstu->next->home);
          pstu=pstu->next;
      }
      fclose(fp);



return 0;}


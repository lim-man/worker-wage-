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
        printf("*******请输入职工编号(为0时停止输入)：");
        scanf("%d",&p->num);
        for(j=0;;j++)
        {
            flag=0;
            p2=head;
            while(p2->next!=0)
        {
            if(p->num==p2->next->num)
                {
                    printf("该编号已经被使用，请重新编号\n");
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
           printf("新编号：");
            scanf("%d",&p->num);
        }
        }
        if(p->num==0)
            break;
        printf("*******请输入该职工姓名：");
        scanf("%s",&p->name);
        printf("*******请输入该职工职务：");
        scanf("%s",&p->work);
        printf("以下不可输入字母，否则会导致系统错误！\n");
        printf("*******请输入该职工基本工资：");
        scanf("%lf",&p->bas);
        printf("*******请输入该职工岗位津贴：");
        scanf("%lf",&p->a);
        printf("*******请输入该职工其他津贴：");
        scanf("%lf",&p->ota);
        printf("*******请输入该职工所得税：");
        scanf("%lf",&p->tax);
        printf("*******请输入该职工的住房公基金钱数：");
        scanf("%lf",&p->hou);
        printf("*******请输入该职工的养老金：");
        scanf("%lf",&p->ann);
        printf("*******请输入该职工的医疗保险钱数：");
        scanf("%lf",&p->pat);
        printf("*******请输入该职工的失业保险钱数：");
        scanf("%lf",&p->unemp);
        printf("*******请输入该职工奖金：");
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


            printf("计算得实发工资为负数，请确认你的输入是否正确        ****1：确认  2：不正确");
        scanf("%d",&y);
        if(y==1)
            break;
        if(y==2)
        {
            for(o=0;;o++)
            {
                printf("请选择你要修改的选项(-1结束修改)：1、基本工资2、岗位津贴3、其他津贴4、所得税额5、住房基金6、养老金7、医疗保险8、失业保险9、奖金\n");
           scanf("%d",&x);
           if(x==-1)  break;
           printf("********输入修改金额：");
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
            printf("计算得实发工资为负数，请确认你的输入是否正确        ****1：确认  2：不正确");
        scanf("%d",&y);
        if(y==1)
            temp=temp->next;
        if(y==2)
        {
            for(i=0;;i++)
            {
                printf("请选择你要修改的选项(-1结束修改)：1、基本工资2、岗位津贴3、其他津贴4、所得税额5、住房基金6、养老金7、医疗保险8、失业保险9、奖金\n");
           scanf("%d",&x);
           if(x==-1)  break;
           printf("********输入修改金额：");
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
    printf("*******请输入需查询职工的姓名：");
    scanf("%s",&ch);
    if(head->next==0)
        {
            printf("未储存信息");
            flag=1;
        }
    while(head->next!=0)
    {
        if(strcmp(head->next->name,ch)==0)
        {printf("编号\t姓名\t职务\t基本工资\t岗位津贴\t其他津贴\t所得税额\t住房基金\t养老金额\t医疗保险\t失业保险\t个人奖金\t应发工资\t工资总额\t实发工资\t\n");
        printf("%d\t%s\t%s\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\t%.1lf\t\n",head->next->num,head->next->name,head->next->work,head->next->bas,head->next->a,head->next->ota,head->next->tax,head->next->hou,head->next->ann,head->next->pat,head->next->unemp,head->next->jiang,head->next->sal,head->next->all,head->next->home);
         flag=1;
        }
        head=head->next;
}
  if(flag==0)
  {
      printf("未查询到该职工\n");
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
    printf("                                该系统可更改项序号如下：               \n ");
    printf("           1、职务 2、基本工资 3、岗位津贴 4、其他津贴 5、所得税额 6、个人奖金          \n");


    for(j=0;;j++)

    {
        int flag1=0;
        pnew=head->next;
        printf("*******输入需更改人的姓名(输入”###“停止更改)********\n");
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

                printf("*******输入需更改的更改项序号(输入-1为结束):");
                scanf("%d",&m);

                if(m==-1)
                  break;
                 if(m==1)
                 {
                     printf("*******请输入新职位：");
                     scanf("%s",&k);
                     strcpy(pnew->work,k);
                 }
                 else
                 {
                     printf("*******请输入更改金额：");
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
        printf("未找到该职工，无法进行更改\n");

    }



}
void print(node*head)
{
    printf("编号\t姓名\t职务\t基本工资\t岗位津贴\t其他津贴\t所得税额\t住房基金\t养老金额\t医疗保险\t失业保险\t个人奖金\t应发工资\t工资总额\t实发工资\t\n");
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
    fp=fopen("D:/职工工资信息管理.txt","w");
printf("********************************职工工资信息管理系统***************************************\n");
printf("该系统可选择的服务：1：储存职工工资信息  2：职工工资信息查询  3：职工信息修改  \n ");
for(g=0;;g++)
      {
          printf("*******************************************************************\n");
          printf("                      该系统可选择的服务\n");
           printf("                    1、储存职工工资信息 \n");
          printf("                     2、职工工资信息查询\n");
         printf("                      3、职工信息修改  \n ");
         printf("********************************************************************\n");
          printf("选择服务(填服务前序号即可,若想终止服务,请输入'-1')：\n");
          scanf("%d",&n);
          if(n==-1)
            {
                break;
                printf("录入磁盘成功！\n");
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
          fprintf(fp,"编号\t姓名\t职务\t基本工资\t岗位津贴\t其他津贴\t所得税额\t住房基金\t养老金额\t医疗保险\t失业保险\t个人奖金\t应发工资\t工资总额\t实发工资  \n");
          fprintf(fp,"%d\t%s\t%s\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t%.1lf\t\n",pstu->next->num,pstu->next->name,pstu->next->work,pstu->next->bas,pstu->next->a,pstu->next->ota,pstu->next->tax,pstu->next->hou,pstu->next->ann,pstu->next->pat,pstu->next->unemp,pstu->next->jiang,pstu->next->sal,pstu->next->all,pstu->next->home);
          pstu=pstu->next;
      }
      fclose(fp);



return 0;}


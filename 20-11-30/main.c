//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char*p="abcdefsdafsa";
//    char*p2="def";
//    char*ret=strstr(p,p2);
//    if(ret==NULL)
//        printf("不存在\n");
//    else
//        printf("%s\n",ret);
//    return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//char*my_strstr(const char*a,const char*b)
//{
//    assert(a&&b);
//    char*aa;
//    char*bb;
//    char*count=(char*)a;
//    while(*count)
//    {
//        aa=count;
//        bb=(char*)b;
//        if(*bb=='\0')
//            return count;
//        while((*aa!='\0')&&(*bb==*aa))
//        {
//            aa++;
//            bb++;
//        }
//        if(*bb=='\0')
//            return count;
//        count++;
//    }
//    return NULL;
//}
//int main()
//{
//    char*a="abcffedfggsd";
//    char*b="gsd";
//    char*ret=my_strstr(a,b);
//    if(ret==NULL)
//        printf("no\n");
//    else
//        printf("%s\n",ret);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char arr[]="sfaf@sfd.com";
//    char*p="@.";
//    char*ret;
//    for(ret=strtok(arr,p);*ret!='\0';ret=strtok(NULL,p))
//    {
//        printf("%s\n",ret);
//    }
//    return 0;
//}
//islower//是小写字母
//isdigit//是十进制数字
//isxdigit //是十六进制数字
//isalnum//是所有字母和数字
//isalpha//是所有字母
//iscntrl//是控制符
//isspace //是空白字符
//isupper//是大写字母
//ispunct//是标点符号（可打印）
//isgraph//是图形字符
//isprint//是可打印字符
//#include<stdio.h>
//int pan()
//{
//    int a=1;
//    char*pa=(char*)&a;
//    return *pa;
//}
//int main()
//{
//    int a=pan();
//    if(a==1)
//        printf("小端\n");
//    else
//        printf("大端\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("%d",'a');
//    return 0;
//}
//#include<stdio.h>
//void my_memcpy(void*dst,const void*scr,int sz)
//{
//    int i;
//    for(i=0;i<sz;i++)
//    {
//        *(char*)dst++=*(char*)scr++;
//    }
//}
//int main()
//{
//    char arr[]={1,2,3,4,5,6};
//    char arr2[10];
//    my_memcpy(arr2,arr,sizeof(arr));
//    int i;
//    int sz=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<sz;i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a='\0';
//   (int)a++;
//    a=99;
//    printf("%d",a);
//}
//#include<stdio.h>
//int main()
//{
//    int arr[]={0,1,2,3,4,5,6,7,8,9};
//    int n,i,j,x,k=0,y=0;
//    scanf("%d",&n);
//    for(j=0;j<n;j++)
//    {
//        for(i=0;i<2*n-2-k;i++)
//            printf(" ");
//        k=k+2;
//        for(x=0;x<(2*(j+1)-1);x++)
//        {   if(y>=9)
//        {
//            y=y-9;
//        }
//            printf(" %d",arr[y]);
//            y++;
//
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//    return 0;
//}
//#include<stdio.h>
//
//int main(){
//
//	int n,m,a[50][50];
//	int i=0,j=0;
//	scanf("%d%d",&n,&m);
//
//	for(i=0;i<n;i++)
//	for(j=0;j<m;j++)
//	scanf("%d",&a[i][j]);
//
//	int *p=&a[0][0];
//	int  t=1,r=0;
//
//	while(t)
//    {
//	 	     t=0;
//	 		for(i=0;i<n;i++)
//	 		for(j=0;j<m-1;j++)
//	 		if( *(p+i*n+j)>*(p+i*n+j+1) )
//        {
//	 			r=*(p+n*i+j);
//	 			*(p+n*i+j)=*(p+n*i+j+1);
//	 			*(p+n*i+j+1)=r;
//
//	 			t=1;
//
//
//		}
//	}
//
//	   for(i=0;i<n;i++){
//       for(j=0;j<m;j++)
//{
//           printf("%d",a[i][j]);
//           if(j!=m-1)
//           printf(" ");
//           if((i!=n-1)&&(j==m-1))
//           printf("\n");
//
//}}}
//#include<stdio.h>
//int main()
//{
//	char ret;
//	char ch;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf_s("%s",password);
//	while ((ch=getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认:(Y/N)");
//	ret = getchar();
//	if (ret =='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//void* my_memove(void*arr1,void*arr2,int n)
//{
//    if()
//}
//int main()
//{
//    char arr[]={1,2,3,4,5,6,7,8,9};
//    my_memove(arr+2,arr+3,20);
//    return 0;
//}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("shutdown -s -t 300");
    return 0;
}

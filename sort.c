#include<stdio.h>
int main()
{
int a,b,c;
int max,mid,min;
scanf("%d%d%d",&a,&b,&c);
if(a>b){
if(b>c)
{
max=a;
mid=b;
min=c;
}else if(a>c){
max=a;
mid=c;
min=b;

}else{
max=c;
mid=a;
min=b;
}
}else if(b>a){
if(a>c){
max=b;
mid=a;
min=c;
}else if(b<c){
max=c;
mid=b;
min=a;
}else{
max=b;
mid=c;
min=a;
}
}
printf("%d %d %d",min,mid,max);
return 0;
}
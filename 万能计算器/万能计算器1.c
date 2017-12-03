/* 软件名称：万能计算器-1 */
/* 本程序是遵守GNU GPL许可协议发布的自由软件，您可以在遵守GNU/GPL的情况下传播，学习，重新发布它，许可证版本应当是第3版或者由您选择的更高版本！ */
/* 版权所有 © 冰焰火灵X */
/* 邮箱：1079092922@qq.com */

#include<stdio.h>
int main(void)
{
  float a1,a2,a3,a4,a5;
  printf("请输入待处理的数值：\n");
  scanf("%f",&a1);
  printf("请输入加数，跳过请输入0：\n");
  scanf("%f",&a2);
  printf("请输入乘数，跳过请输入1：\n");
  scanf("%f",&a3);
  printf("请输入除数，跳过请输入1：\n");
  scanf("%f",&a4);
  a5=a1+a2*a3/a4;
  printf("最终结果=%f",a5);
}

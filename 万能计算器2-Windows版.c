/* 软件名称：万能计算器-2 */
/* 本程序是遵守GNU GPL许可协议发布的自由软件，您可以在遵守GNU/GPL的情况下传播，学习，重新发布它，许可证版本应当是第3版或者由您选择的更高版本！ */
/* 版权所有 (C) 冰焰火灵X */
/* 邮箱：1079092922@qq.com */

#include<stdio.h>
#include<windows.h>
int main(void)
{
  MessageBox(NULL, "小提示：第二个选择数值加数，如果想要减法请在前面加个负号.","温馨提示",MB_OK);
  MessageBox(NULL, "小提示2：本软件是遵守GNU/GPL许可协议发布的自由软件，您可以学习，传播，修改和/或者重新发布.许可证版本：第3版，或者由您选择的更高版本。","关于",MB_OK);
  MessageBox(NULL, "版权所有(C) 冰焰火灵X.    邮箱：1079092922@qq.com","关于",MB_OK);
  printf("第二个，加数，如果想要减法请在前面加个负号\n");
  float a1,a2,a3,a4,alls,pjun;
  printf("请输入原数：\n");
  scanf("%f",&a1);
  printf("请输入加数（可以有负号，输入0跳过）：\n");
  scanf("%f",&a2);
  printf("请输入乘数，输入1跳过：\n");
  scanf("%f",&a3);
  printf("请输入除数，输入1跳过：\n");
  scanf("%f",&a4);
  alls=(a1+a2)*a3/a4;
  pjun=(a1+a2+a3+a4)/4;
  printf("结果等于%f，平均值为%f。\n",alls,pjun);
  system("pause");
}


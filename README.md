# C-RandomNumberGenerator
C语言随机数程序
#include <stdio.h>: 包含输入输出函数的标准库头文件。
#include <stdlib.h>: 包含常用函数库，包括随机数函数。
#include <time.h>: 包含时间函数的标准库头文件。
int main() { ... }: 主函数的开始和结束。
int minRange, maxRange, count;: 声明整型变量 minRange、maxRange 和 count，用于存储用户输入的最小范围、最大范围和随机数的数量。
printf("请输入随机数的最小范围: ");: 输出提示信息，要求用户输入随机数的最小范围。
scanf("%d", &minRange);: 从标准输入中获取用户输入的最小范围，并将其存储在变量 minRange 中。
printf("请输入随机数的最大范围: ");: 输出提示信息，要求用户输入随机数的最大范围。
scanf("%d", &maxRange);: 从标准输入中获取用户输入的最大范围，并将其存储在变量 maxRange 中。
printf("请输入要生成的随机数的数量: ");: 输出提示信息，要求用户输入要生成的随机数的数量。
scanf("%d", &count);: 从标准输入中获取用户输入的随机数数量，并将其存储在变量 count 中。
srand(time(NULL));: 使用当前时间作为随机数种子，初始化随机数生成器。
printf("生成的随机数为: ");: 输出提示信息，表示即将打印生成的随机数。
for (int i = 0; i < count; ++i) { ... }: 循环 count 次，用于生成指定数量的随机数。
int randomNumber = rand() % (maxRange - minRange + 1) + minRange;: 使用 rand 函数生成范围在 minRange 到 maxRange 之间的随机数。
printf("%d ", randomNumber);: 打印当前生成的随机数。
printf("\n");: 在生成随机数的循环结束后，输出一个换行符，将光标移动到下一行。
return 0;: 返回程序执行的结果，表示程序成功执行并终止。

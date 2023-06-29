#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int minRange, maxRange, count;
    
    // 获取用户输入的范围和数量
    printf("请输入随机数的最小范围: ");
    scanf("%d", &minRange);
    
    printf("请输入随机数的最大范围: ");
    scanf("%d", &maxRange);
    
    printf("请输入要生成的随机数的数量: ");
    scanf("%d", &count);
    
    // 设置随机数种子
    srand(time(NULL));
    
    // 生成随机数并打印
    printf("生成的随机数为: ");
    for (int i = 0; i < count; ++i) {
        int randomNumber = rand() % (maxRange - minRange + 1) + minRange;
        printf("%d ", randomNumber);
    }
    printf("\n");
    
    return 0;
}

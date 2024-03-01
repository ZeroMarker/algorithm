#include <stdio.h>

// 函数原型
void hanoi(int n, char source, char auxiliary, char target);

int main() {
    int n;

    // 输入要移动的盘子数
    printf("请输入要移动的盘子数: ");
    scanf("%d", &n);

    // 调用汉诺塔函数
    hanoi(n, 'A', 'B', 'C');

    return 0;
}

// 汉诺塔函数的定义
void hanoi(int n, char source, char auxiliary, char target) {
    if (n == 1) {
        // 如果只有一个盘子，直接从源柱子移动到目标柱子
        printf("移动盘子 1 从 %c 到 %c\n", source, target);
        return;
    }

    // 将 n-1 个盘子从源柱子移动到辅助柱子
    hanoi(n - 1, source, target, auxiliary);

    // 移动第 n 个盘子到目标柱子
    printf("移动盘子 %d 从 %c 到 %c\n", n, source, target);

    // 将 n-1 个盘子从辅助柱子移动到目标柱子
    hanoi(n - 1, auxiliary, source, target);
}

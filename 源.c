#include<stdio.h>

int main() {
    int choice, quantity;
    double total = 0;

    printf("欢迎使用点餐系统！\n");

    while (1) {
        printf("\n请选择菜品：\n");
        printf("1. 牛肉面 - 15元\n");
        printf("2. 鸡蛋饭 - 10元\n");
        printf("3. 酸辣粉 - 12元\n");

        printf("4. 结束点餐\n");

        printf("请输入您的选择：");
        scanf_s("%d", &choice);

        if (choice == 4) {
            break;
        }

        printf("请输入数量：");
        scanf_s("%d", &quantity);

        switch (choice) {
        case 1:
            total += 15 * quantity;
            printf("已选择牛肉面 x %d\n", quantity);
            break;
        case 2:
            total += 10 * quantity;
            printf("已选择鸡蛋饭 x %d\n", quantity);
            break;
        case 3:
            total += 12 * quantity;
            printf("已选择酸辣粉 x %d\n", quantity);
            break;
        default:
            printf("无效选择，请重新选择。\n");
        }
    }

    printf("\n您的订单如下：\n");
    printf("总金额：%.2f 元\n", total);

    printf("\n谢谢使用点餐系统！\n");

    return 0;
}
#include<stdio.h>

int main() {
    int choice, quantity;
    double total = 0;

    printf("��ӭʹ�õ��ϵͳ��\n");

    while (1) {
        printf("\n��ѡ���Ʒ��\n");
        printf("1. ţ���� - 15Ԫ\n");
        printf("2. ������ - 10Ԫ\n");
        printf("3. ������ - 12Ԫ\n");

        printf("4. �������\n");

        printf("����������ѡ��");
        scanf_s("%d", &choice);

        if (choice == 4) {
            break;
        }

        printf("������������");
        scanf_s("%d", &quantity);

        switch (choice) {
        case 1:
            total += 15 * quantity;
            printf("��ѡ��ţ���� x %d\n", quantity);
            break;
        case 2:
            total += 10 * quantity;
            printf("��ѡ�񼦵��� x %d\n", quantity);
            break;
        case 3:
            total += 12 * quantity;
            printf("��ѡ�������� x %d\n", quantity);
            break;
        default:
            printf("��Чѡ��������ѡ��\n");
        }
    }

    printf("\n���Ķ������£�\n");
    printf("�ܽ�%.2f Ԫ\n", total);

    printf("\nллʹ�õ��ϵͳ��\n");

    return 0;
}
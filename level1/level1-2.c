
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) {
    int answer = 45; // 0 ~ 9���� ��� ���� ��
    int str = 0; //number �迭�� �ִ� ���� ���� ���� ����
    for (int i = 0; i < numbers_len; i++)
    {
        str = str + numbers[i]; // �迭�� ��� ���� ���ϱ�
    }
    answer = answer - str; // 0~9���� ����ִ� ������ ���� ���� ����
    return answer;
}

int main(void)
{
    return  0;
}
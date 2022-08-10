
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 45; // 0 ~ 9까지 모두 더한 값
    int str = 0; //number 배열에 있는 숫자 더할 저장 공간
    for (int i = 0; i < numbers_len; i++)
    {
        str = str + numbers[i]; // 배열의 모든 숫자 더하기
    }
    answer = answer - str; // 0~9까지 들어있는 숫자중 없는 숫자 덧셈
    return answer;
}

int main(void)
{
    return  0;
}
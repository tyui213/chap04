/*
파일명:asssignment01
내용:  chap04-01 문제
작성자:최정민
날찌:  20205.04.09
버전:  v0.1
*/



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)//메인함수 첫번째 열
{
	double get_motinenergy(double weight, double velocity);
	int r = assignment0401();
	return 0;

}

double get_motinenergy(double weight, double velocity)//get_motionenergy  변수 선언
{
	double energy = 0.0;
	//에너지 = 1/2 *질량 * 속도 *속도(에너지 계산)
	energy = 1.0 / 2.0 * weight * velocity * velocity;
	return energy;
}

int assignment0401(void) 
{

	//1. 질량, 속도입력받아 저장
	double w = 0.0; //질량
	double v = 0.0; //속도
	printf("질량 속도를 입력해주세요:");
	scanf("%lf %lf", &w, &v);

	// 2 . 운동에너지 계산
	double resurlt = get_motinenergy(w, v);


	// 3 . 계산 된 운동에너지 출력
	printf("질량=%.2f, 속력%.2f m/s 의 운동에너지는 = %.2f 입니다", w, v, resurlt);

	return 0;
}
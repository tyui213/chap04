/*
���ϸ�:asssignment01
����:  chap04-01 ����
�ۼ���:������
����:  20205.04.09
����:  v0.1
*/



#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)//�����Լ� ù��° ��
{
	double get_motinenergy(double weight, double velocity);
	int r = assignment0401();
	return 0;

}

double get_motinenergy(double weight, double velocity)//get_motionenergy  ���� ����
{
	double energy = 0.0;
	//������ = 1/2 *���� * �ӵ� *�ӵ�(������ ���)
	energy = 1.0 / 2.0 * weight * velocity * velocity;
	return energy;
}

int assignment0401(void) 
{

	//1. ����, �ӵ��Է¹޾� ����
	double w = 0.0; //����
	double v = 0.0; //�ӵ�
	printf("���� �ӵ��� �Է����ּ���:");
	scanf("%lf %lf", &w, &v);

	// 2 . ������� ���
	double resurlt = get_motinenergy(w, v);


	// 3 . ��� �� ������� ���
	printf("����=%.2f, �ӷ�%.2f m/s �� ��������� = %.2f �Դϴ�", w, v, resurlt);

	return 0;
}
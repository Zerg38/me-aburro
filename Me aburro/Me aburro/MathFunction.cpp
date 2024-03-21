#include"MathFunction.h"

int GenerateRandomNum(int min, int max) {
	int result = min + rand() % ((max + 1) - min);
	return result;
}

int ToPrecent(int value, int Percent) {
	int percent = (float)value / 100 * (float)Percent;
	return percent;
}

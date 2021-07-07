#include "gtest/gtest.h"
#include <functional>
using namespace std;

typedef function<int(int, int)> Function;		//�Լ� �ñ״�ó�� int(int, int) ��

auto add = [](int x, int y) ->int
{
	return x + y;
};

auto sub = [](int x, int y) -> int
{
	return x - y;
};

auto times = [](int x, int y) -> int
{
	return x * y;
};

auto divi = [](int x, int y) -> int
{
	if (y != 0)
		return x / y;
	else
		return 0;
};

TEST(�⺻��, �����׽�Ʈ����غ���)
{
	EXPECT_EQ(10, 10);		//��ġ�ϹǷ� ����
	EXPECT_EQ(20, 10);		//����ġ �ϹǷ� ����
}

TEST(�⺻��, �Լ��ñ״�ó�����غ��⤾����) {
	Function fShape;

	fShape = add;
	EXPECT_EQ(fShape(10, 10), 20);
	EXPECT_EQ(fShape(10, 10), 10);
}
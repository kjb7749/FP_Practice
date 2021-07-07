#include "gtest/gtest.h"
#include <functional>
using namespace std;

typedef function<int(int, int)> Function;		//함수 시그니처는 int(int, int) 다

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

TEST(기본기, 단위테스트사용해보기)
{
	EXPECT_EQ(10, 10);		//일치하므로 성공
	EXPECT_EQ(20, 10);		//불일치 하므로 실패
}

TEST(기본기, 함수시그니처연습해보기ㅎㅅㅎ) {
	Function fShape;

	fShape = add;
	EXPECT_EQ(fShape(10, 10), 20);
	EXPECT_EQ(fShape(10, 10), 10);
}
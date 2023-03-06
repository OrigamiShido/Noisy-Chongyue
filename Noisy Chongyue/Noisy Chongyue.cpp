#include <iostream>
#include <random>
#include <string>
#include <cstdlib>

using namespace std;

void shout(const string target);

string choose(void);

void process(void);

int random(int min,int max);

int main(void)
{
	process();
	system("pause");
	return 0;
}

void process(void)
{
	cout << "请输入想要大哥吵闹的次数：" << endl;
	int count;
	cin >> count;
	cout << "城头的烽火，总是这样熄了又燃。" << endl << "日落飞锦绣长河，天地壮我行色!" << endl;
	for (int i = 0; i < count; i++)
	{
		string target = choose();
		shout(target);
	}
	cout << "征鼓一声千军动，掬罢黄沙浣铁衣......好一场大胜！" << endl;
	return;
}

string choose(void)
{
	string library[4] = { "形不成形意不在意再去练练吧","千招百式在一息","劲发江潮落气收秋毫平","你们解决问题还是只会仰仗干戈吗" };
	int result = random(0, 3);
	string target = library[result];
	return target;
}

void shout(const string target)
{
	int len = target.length() / 2;
	int cut = random(2, len);
	cout << target.substr(0, cut * 2);
}

int random(int min, int max)
{
	random_device seed;//硬件生成随机数种子
	ranlux48 engine(seed());//利用种子生成随机数引擎
	uniform_int_distribution<> distrib(min, max);//设置随机数范围，并为均匀分布
	int randomonia = distrib(engine);//随机数
	return randomonia;
}
#include <iostream>
#include <vector>
#include <string>
#include <ranges>
#include <algorithm>
#include <list>
#include <map>
using namespace std;

template<std::ranges::input_range Range>
requires std::ranges::view<Range>
class ContainerView : public std::ranges::view_interface<ContainerView<Range>>
{
public:
	ContainerView() = default;

	constexpr ContainerView(Range r) : _range(std::move(r)), _begin(std::begin(r)), _end(std::end(r))
	{
		
	}

	constexpr auto begin() const { return _begin; }
	constexpr auto end() const { return _end; }

private:
	Range _range;
	std::ranges::iterator_t<Range> _begin;
	std::ranges::iterator_t<Range> _end;
};

template<class Range>
ContainerView(Range&& range) -> ContainerView<std::ranges::views::all_t<Range>>;

int main()
{
	vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector<int> v2;

	// v1 ������ ��ҿ��� ¦���� ã��, �� ���鿡 2�� ���ؼ� �����Ѵ�.
	auto results = v1 | std::views::filter([](int n) {return n % 2 == 0; })
		| std::views::transform([](int n) { return n * 2; });

	// Range : Range�� ��ȸ�� �� �ִ� ������ �׷� (ex. STL Container)
	// View : Range�� ���ؼ� ������ �� �ִ� ����

	// v2 ������ ��ҿ��� ¦���� ã��, �� ���鿡 2�� ���ؼ� �����Ѵ�.
	// �׸��� �տ������� 3���� ��Ҹ� �����´�.
	auto results2 = v1 | std::views::filter([](int n) {return n % 2 == 0; })
		| std::views::transform([](int n) { return n * 2; })
		| std::views::take(3);

	struct Knight
	{
		string			name;
		int				id;
	};

	vector<Knight> knights =
	{
		{"Minseok", 1},
		{"Faker", 2},
		{"Son", 3},
		{"BTS", 4},
	};

	// ��������(projection)
	std::ranges::sort(knights, {}, &Knight::name);
	std::ranges::sort(knights, std::ranges::greater(), &Knight::name);
	std::ranges::sort(knights, {}, &Knight::id);
	std::ranges::sort(knights, std::ranges::greater(), &Knight::id);

	map<string, int> m =
	{
		{"Minseok", 1},
		{"Faker", 2},
		{"Son", 3},
		{"BTS", 4},
	};

	for (const auto& name : std::views::keys(m) | std::views::reverse)
		cout << name << endl;

	// 0 ~ 100 ������ ������ �Ҽ��� 5���� ���ڸ� ����

	auto isPrime = [](int num)
	{
		if (num <= 1)
			return false;

		for (int n = 2; n * n <= num; n++)
		{
			if (num % n == 0)
				return false;
		}

		return true;
	};

	std::vector<int> v3;

	for (int n : std::views::iota(0, 100) | std::views::filter(isPrime) | std::views::take(5))
	{
		v3.push_back(n);
	}

	// Ŀ���� �� (std::ranges::view_interface)
	std::vector<int> myVec{ 1, 2, 3, 4, 5 };
	auto myView = ContainerView(myVec);

	for (auto n : myView)
	{
		cout << n << endl;
	}

	return 0;
}
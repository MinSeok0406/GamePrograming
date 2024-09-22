#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <ranges>
using namespace std;

// 오늘의 주제 : Range

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

template<typename Range>
ContainerView(Range&& range) -> ContainerView < std::ranges::views::all_t<Range>>;

int main()
{
    // C# LINQ 문법이랑 비슷

    vector<int> v1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    auto results = v1 | std::views::filter([](int n) { return n % 2 == 0; })
                      | std::views::transform([](int n) { return n * 2; });

    for (auto n : results)
        cout << n << " ";

    // Range : 순회할 수 있는 아이템 그룹 (ex. STL Container)
    // View : Range에 대해서 적용할 수 있는 연산

    auto results2 = v1 | std::views::filter([](int n) { return n % 2 == 0; })
                        | std::views::transform([](int n) { return n * 2; })
                        | std::views::take(3);

    //std::sort(v1.begin(), v1.end());
    std::ranges::sort(v1);

    struct Knight
    {
        std::string     name;
        int             id;
    };

    vector<Knight> knights =
    {
        {"Minseok", 1},
        {"Ari", 2},
        {"Zac", 3},
        {"Rulu", 4},
    };

    std::ranges::sort(knights, {}, & Knight::name); // ascending by name
    std::ranges::sort(knights, std::ranges::greater(), &Knight::name); // descending by name
    std::ranges::sort(knights, {}, & Knight::id); // ascending by id
    std::ranges::sort(knights, std::ranges::greater(), & Knight::id); // descending by id

    map<string, int> m =
    {
        {"Minseok", 1},
        {"Ari", 2},
        {"Zac", 3},
        {"Rulu", 4},
    };

    for (const auto& name : std::views::keys(m) | std::views::reverse)
        cout << name << endl;

    // 0~100 사이의 숫자중 소수인 5개의 숫자를 추출

    auto isPrime = [](int num)
    {
        if (num <= 1)
            return false;

        for (int n = 2; n * n <= num; n++)
            if (num % n == 0)
                return false;

        return true;
    };

    std::vector<int> v3;

    // std::views::iota(a, b) : a부터 시작해서 1씩 증가 b개를 만들어줌
    for (int n : std::views::iota(0, 100) | std::views::filter(isPrime) | std::views::take(5))
    {
        v3.push_back(n);
    }

    // 커스텀 뷰 (std::ranges::view_interface)
    std::vector<int> myVec{ 1, 2, 3, 4, 5 };
    auto myView = ContainerView(myVec);

    for (auto n : myView)
    {
        cout << n << endl;
    }
}
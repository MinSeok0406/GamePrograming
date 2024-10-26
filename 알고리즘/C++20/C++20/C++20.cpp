#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <algorithm>
#include <ranges>
#include <coroutine>
#include "MyCoroutine.h"
#include <random>
#include <time.h>
#include <cstdlib>
#include <string>
using namespace std;

// 오늘의 주제 : Coroutine

struct CoroutineObject
{
    struct promise_type
    {
        CoroutineObject get_return_object() { return {}; }
        std::suspend_never initial_suspend() const noexcept { return {}; }
        std::suspend_never final_suspend() const noexcept { return {}; }
        void return_void() { }
        void unhandled_exception() { }
    };
};

CoroutineObject HelloCoroutine()
{
    co_return;
}

Future<int> CreateFuture()
{
    co_return 2024;
}

Generator<int> GenNumbers(int start = 0, int delta = 1)
{
    int now = start;

    while (true)
    {
        co_yield now;   // yield return
        now += delta;
    }
}

Job PrepareJob()
{
    // co_await [Awaitable]
    co_await std::suspend_never();
}

int main()
{
    // 함수가 코루틴이 되려면...
    // - co_return
    // - co_yield
    // - co_await

    // 코루틴을 사용할 수 있는 Framework를 제공
    // 3가지 요소로 구성
    // - promise 객체
    // - 코루틴 핸들 (밖에서 코루틴을 resume / destroy 할 때 사용. 일종의 리모컨)
    // - 코루틴 프레임 (promise 객체, 코루틴이 인자 등을 포함하는 heap 할당 객체)

    auto future = CreateFuture();
    // TODO : 다른걸 하다
    cout << future.get() << endl;

    auto numbers = GenNumbers(0, 1);
    for (int i = 0; i < 20; i++)
    {
        numbers.next();

        cout << " " << numbers.get();
    }

    auto job = PrepareJob();

    job.start();

    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 99);
    vector<int> v;

    for (int i = 0; i < 100; i++)
    {
        v.push_back(dist(mt));
    }

    srand(time(NULL));
    
    vector<int> v2;

    for (int i = 0; i < 50; i++)
    {
        v2.push_back(rand() % 50 + 1);
    }

}
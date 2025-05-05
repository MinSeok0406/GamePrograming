//#include <iostream>
//#include <list>
//#include <vector>
//#include <map>
//#include <algorithm>
//#include <ranges>
//#include <coroutine>
//#include "MyCoroutine.h"
//#include <random>
//#include <time.h>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//// Concept
//// -> C#에서 제네릭 문법에서 사용하는 where과 유사한 개념
//// -> 이제 C++ Template 문법에서 개발자가 원하는 타입만 받아줄 수 있도록 변경 가능
//
//// 1) Requires Clause(절)
//template<class T>
//requires std::integral<T>   // integral -> 정수만 받음
//void TestConcept1(T number)
//{
//    cout << number << endl;
//}
//
//// 2) Trailing Requires Clause
//template<class T>
//void TestConcept2(T number) requires std::floating_point<T> // floating_point -> 실수만 받음
//{
//    cout << number << endl;
//}
//
//// 3) Constrainted Template Parameter
//template<std::integral T>
//void TestConcept3(T number)
//{
//    cout << number << endl;
//}
//
//// 4) Abbreviated Function Template
//void TestConcept4(std::integral auto number)
//{
//    cout << number << endl;
//}
//
//// 클래스 상속 예시
//class GameObject
//{
//
//};
//
//class Knight : public GameObject
//{
//
//};
//
//template<class T>
//requires std::derived_from<T, GameObject>
//void TestObj(T* obj)
//{
//
//}
//
////--------------------------------------------------------------------------------------
//
//// 새로 만든 Concept은 정수는 안되고, GameObject만 받아들이게 만듦
//template<class T>
//concept MyConcept = !std::is_integral_v<T> && std::derived_from<T, GameObject>;
//
//// a + b가 가능해야 함
//// int, double, std::string 등은 + 연산이 가능하므로 Addable<int>, Addable<std::string> 등은 성립
//// 단순 요구사항 (simple requirement)
//template<class T>
//concept Addable = requires (T a, T b)
//{
//    a + b;
//};
//
//template<Addable T>
//T Testadd(T a, T b)
//{
//    return a + b;
//}
//
//template <class T>
//concept TestConcept = sizeof(T) == 4;
//
//template<class T>
//requires TestConcept<T>
//class Widget
//{
//public:
//    Widget()
//    {
//
//    }
//
//    T test(T a, T b)
//    {
//        return a + b;
//    }
//};
//
//template<class T>
//concept Typeable = requires { typename T::Addable; };
//
//// a == b or a != b가 가능해야 함
//template<class T>
//concept Equality = requires(T a, T b)
//{
//    { a == b } -> std::convertible_to<bool>;
//    { a != b } -> std::convertible_to<bool>;
//};
//
//// 만들어둔 Concept을 통해서 또 새로운 Concept 만들기 가능
//template<class T>
//concept Integral = std::is_integral_v<T>;
//
//template<class T>
//concept SignedInt = Integral<T> && std::is_signed_v<T>;
//
//template<class T>
//T Test(T a, T b)
//{
//    return a + b;
//}
//
//int main()
//{
//    TestConcept1(1);
//    TestConcept2(1.1f);
//    TestConcept3(1);
//    TestConcept4(10);
//
//    TestObj(new GameObject);
//    TestObj(new Knight);
//    //TestObj(int a);   Error
//
//    string s = "ABC";
//    string s2 = "DEF";
//
//    cout << Test(1, 3) << endl;
//    cout << Test(1.2f, 3.1f) << endl;
//    cout << Test(s, s2) << endl;
//
//    cout << Testadd(3, 4) << endl;
//
//    Widget<int> w;
//    Widget<float> w2;
//
//    cout << w.test(1, 3) << endl;
//    cout << w2.test(1.2f, 3.5f) << endl;
//
//
//    return 0;
//}
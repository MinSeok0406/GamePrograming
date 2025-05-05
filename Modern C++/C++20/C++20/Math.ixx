module;	// global module fragment

// 각종 외부 헤더 추가
//#include <vector>


// module 시작
export module Math;

// import module...

// submodule
// math.time을 import해서 다시 math 모듈에 포함해서 export
export import Math.time;
export import MathPartition;

// 1) 함수 앞에다가 export
export int Add(int a, int b)
{
	return a + b;
}

// 2) export 블럭으로 애들을 따로 묶어주는
export
{
	void TestExport()
	{

	}

	int TestExport2()
	{
		return 1;
	}

	float TestExport3()
	{
		return 1.5f;
	}
}

// 3) namespace를 지정
export namespace test
{
	int TestExport4()
	{
		return 4;
	}
}
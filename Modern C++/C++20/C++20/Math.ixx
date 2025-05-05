module;	// global module fragment

// ���� �ܺ� ��� �߰�
//#include <vector>


// module ����
export module Math;

// import module...

// submodule
// math.time�� import�ؼ� �ٽ� math ��⿡ �����ؼ� export
export import Math.time;
export import MathPartition;

// 1) �Լ� �տ��ٰ� export
export int Add(int a, int b)
{
	return a + b;
}

// 2) export ������ �ֵ��� ���� �����ִ�
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

// 3) namespace�� ����
export namespace test
{
	int TestExport4()
	{
		return 4;
	}
}
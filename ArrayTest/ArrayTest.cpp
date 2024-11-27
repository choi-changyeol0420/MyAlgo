// ArrayTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <array>
#include <vector>

using namespace std;

//2행 3열 원소의 합을 구하라
//c++ vector 2차원 배열 활용
int main()
{
	//2차원 배열 선언 및 초기화
	vector<vector<int>> mat1(2, vector<int>(3,0));

	vector<vector<int>> mat2{
		{1,2,3},
		{4,5,6}
	};
	
	for (int r = 0; r < mat2.size(); r++)
	{
		for (int c = 0; c < mat2[r].size(); c++)
		{
			cout << mat2[r][c] << " ";
		}
		cout << endl;
	}
}

//2행 3열 원소의 합을 구하라
//c언어 2차원 배열
//int main()
//{
//	int mat[2][3] = {
//		{1,2,3},
//		{4,5,6}
//	};
//
//	int sum = 0;
//	for (int r = 0; r < 2; r++)
//	{
//		for (int c = 0; c < 3; c++)
//		{
//			sum += mat[r][c];
//		}
//	}
//	cout << "Sum: " << sum << endl;
//}

//가변형 배열 vector 활용
//int main()
//{
//	vector<int> v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//
//	vector<int> v2(10);	//0으로 초기화된 10개의 int 방 생성
//	vector<int> v3(10, 1);	//1로 초기화된 10개의 int 방 생성
//	vector<int> v4{ 10,20,30,40,50 };
//
//	vector<int> v5(v4);
//	vector<int> v6(v4.begin(), v4.begin() + 3);
//
//	for (int i = 0; i < v6.size(); i++)
//	{
//		cout << v6[i] << endl;
//	}
//}


//동적 메모리를 관리하는 클래스
//template <typename T>
//class DynamicArray
//{
//private:
//	unsigned int sz;
//	T* arr;
//
//public:
//	//생성자 : 매개변수를 크기를 입력받아 동적 메모리 할당
//	DynamicArray(int n) : sz(n)
//	{
//		arr = new T[sz] {};
//
//	}
//	//소멸자 : 할당된 메모리를 해제
//	~DynamicArray()
//	{
//		delete[] arr;
//
//		cout << "동적 메모리 해제" << endl;
//	}
//
//	unsigned int size()
//	{
//		return sz;
//	}
//	T& operator[] (const int i) { return arr[i];}
//};
//
//int main()
//{
//	DynamicArray<int> dn(5);
//	dn[0] = 10;
//	dn[1] = 20;
//	dn[2] = 30;
//	dn[3] = 40;
//	dn[4] = 50;
//
//	for (int i = 0; i < dn.size(); i++)
//	{
//		cout << dn[i] << endl;
//	}
//}


//동적 메모리 할당 예제
//int main()
//{
//	//동적 메모리 할당 초기화 안하면 쓰레기 값 설정이 됨 초기화 꼭!
//	int* ptr = new int[3] {};
//	ptr[0] = 10;
//	ptr[1] = 20;
//
//	for (int i = 0; i< 3; i++)
//	{
//		cout << ptr[i] << endl;
//	}
//
//	//동적 메모리 해제
//	delete[] ptr;
//	ptr = nullptr;
//}

//c++언어 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	array<int, 5> scores = { 50,60,70,80,90 };
//
//	//합계 구하기
//	int sum = 0;
//	for (int i = 0; i < scores.size(); i++)
//	{
//		sum += scores[i];
//	}
//
//	//평균
//	float avg = (float)sum / scores.size();
//
//	//출력
//	cout << "acerage Score: " << avg << endl;
//}

//c언어 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	//배열 선언
//	int scores[5] = {50,60,70,80,90};
//
//	//int length = sizeof(scores) / sizeof(scores[0]);
//	int length = size(scores);
//
//	//합계
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum += scores[i];
//	}
//
//	//평균
//	float avg = (float)sum / length;
//
//	//출력
//	cout << "acerage Score: " << avg << endl;
//}
// 
//int main()
//{
//    std::cout << "Hello Array!\n";
//}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

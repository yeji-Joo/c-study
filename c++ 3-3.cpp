#include <iostream>
using namespace std;

void sort(int* arr) // sort 함수 사용
{
	int i, j; // int 변수 사용
	int temp; // 임시 저장소


	for (j = 0; j < 4; j++) // 제일 작은 수가 맨 앞으로 오려고 할 때 최대 4번까지 거쳐야함
	{
		for (i = 0; i < 4; i++) // 수가 서로 비교하는데 필요한 횟수가 4
		{
			if (arr[i] > arr[i + 1]) // 앞이 뒤보다 클 경우 교환
			{
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void print(int* arr)
{
	int k;

	for (k = 0; k < 5; k++) // 순서대로 출력
	{
		cout << k + 1 << ". " << arr[k] << endl;
	}
}



int main(void)
{
	int arr[5]; // 5 크기 배열 선언
	int* ptr = arr; // 포인터 초기화
	int i;

	cout << "숫자 다섯개를 입력해주세요 (띄어쓰기로 구분) ";

	for (i = 0; i < 5; i++)
	{
		cin >> *(ptr + i);
	}

	cout << endl << "< 정렬 전 >" << endl;

	print(arr); sort(arr);

	cout << endl << "< 정렬 후 >" << endl;

	print(arr);
}
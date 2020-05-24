#include <iostream>
using namespace std;

int main()
{
	int i, k, X, Y;
	int m, n;

	do
	{
		cout << "-------별찍기 시스템-------" << endl;
		cout << "만들고 싶은 모양을 선택해주세요." << endl;
		cout << "1. 직각삼각형" << endl;
		cout << "2. 정삼각형" << endl;
		cout << "3. 나비" << endl;
		cout << "4. 나가기" << endl;

		cin >> X;

		switch (X)	// switch- case문 사용
		{
		case 1:
		{
			cout << "직각삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> Y;
			cout << endl;

			for (k = 1; k < Y + 1; k++)  //오른쪽 아래 직각 삼각형의 행 개수
			{
				for (i = 0; i < Y - k; i++)
					cout << " ";
				for (i = 0; i <= k - 1; i++)
					cout << "*";

				cout << endl;
			}

			cout << endl;

			for (k = 0; k < Y; k++) //왼쪽 위 직각 삼각형의 행 개수
			{
				for (i = 0; i < Y - k; i++)
					cout << "*";

				cout << endl;
			}

			cout << endl;
			for (k = 0; k < Y; k++) {   //오른쪽 위 직각 삼각형의 행 개수
				for (i = 0; i < k; i++)
					cout << " ";
				for (i = 0; i < Y - k; i++)
					cout << "*";
				cout << endl;
			}
		}break;   //반복 탈출

		case 2:
		{
			cout << "정삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> Y;

			int m, n;

			int count = 2 * Y - 1;   //1행의 별 개수
			int middle = count / 2;   //중심
			m = 1;   // 시작

			for (n = 0; n < Y; n++)
			{
				count = count - (m + middle);   //공백 제한

				for (i = 0; i < middle; i++) {  //공백 발생
					cout << " ";
				}
				middle -= 1;   //공백 감소

				for (k = 0; k < m; k++) {
					cout << "*";
				}
				m += 2;  // 별 증가


				for (i; i < count; i++) {   //공백 발생
					cout << " ";
				}
				cout << endl;
			}
			cout << endl;
		}break;

		case 3:
		{
			cout << "나비모양을 선택하셨습니다." << endl;
			int vline;

			cout << "행의 개수를 선택해주세요 : ";
			cin >> vline;

			while (vline % 2 != 1) {   //홀짝 판별 (홀)
				cout << "홀수로 입력하세요. : ";
				cin >> vline;
			}

			m = 1;
			int hline = vline + 1;   //최대한 큰 열 정의

			for (n = 0; n < vline / 2; n++) {   //위 방향으로 커짐

				for (i = 0; i < m; i++) {
					cout << "*";
				}
				for (k = 0; k < hline - 2 * m; k++) {   //공백 발생
					cout << " ";
				}
				for (i = 0; i < m; i++) {
					cout << "*";
				}
				cout << endl;

				m += 1;   // 별 증가

			}

			for (i = 0; i < hline; i++)   //별 발생
				cout << "*";
			cout << endl;

			m -= 1;

			for (n = 0; n < vline / 2; n++)   // 밑으로 추가
			{
				for (i = 0; i < m; i++) {
					cout << "*";
				}

				for (k = 0; k < hline - 2 * m; k++) {
					cout << " ";
				}

				for (i = 0; i < m; i++) {
					cout << "*";
				}

				cout << endl;

				m -= 1;   //별 증가
			}
			cout << endl;
		}break;

		case 4:
			cout << "나가기를 선택하셨습니다." << endl;
			cout << "감사합니다.";

		}
	} while (X != 4);
	}
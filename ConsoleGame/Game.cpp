#include"System.h"

//39, 24
//첫 - 끝

const int refreshRate = 100;// 프레임
//static int GameMode = 0; // 1 = 일반모드 시작, 2 = 두번째 모드 시작

int main() {
	char key;

	int cnt = 0;
	int cnt2 = 0;
	int level = 0;
	srand(time(NULL));

	system("mode con cols=80 lines=26");
	setcursortype(NOCURSOR);
	title();

	while (true)
	{
		key = '\0';
		if (kbhit()) {
			key = _getch();

			if (GameMode == 0 && (key == '0' || key == '1' || key == '2')) {
				if (key != '0') {
					Init();
					GameMode = key - '0';
					for (int i = 0; i < 6; i++) CreateStar();
					continue;
				}
				else {
					int x = *GetX();
					x *= 2;
					if (x > 4) { x = 1; }
					SetX(x);
					gotoxy(4, 17);
					printf("[x%d] : 0", x);
				}
			}
			if (GameMode != 0) move_arrow_key(key);
		}
		if ( cnt % 4 == 0 ){//내부의 따로 도는 프레임
			if (GameMode == 1) {
				Moving();
			}
			if (GameMode == 2) {
				Moving2();
				if (cnt2% 5 - (int)( level * 0.25 )== 0) Move();
			}
			if (GameMode != 0) {
				if (cnt2 >= 200 - level) {
					if (GameMode == 1 ) CreateStar();
					CreateStar();
					CreateStar();
//					cnt = 0;
					cnt2 = 0;
					level++;
				}
			}
			cnt2++;
		}
		cnt++;
		Sleep(1000 / refreshRate);
	}
	return 0;
}

void InitGame() {
	GameMode = 0;
	system("cls");
	title();
}

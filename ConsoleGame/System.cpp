#include"System.h"

short TitleMap[Y_MAX + 1][X_MAX + 1] = {

	{ 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },

	{ 1,0,0,0,0, 4,4,4,4,4, 4,0,0,4,4, 4,4,4,0,0, 5,5,5,5,5, 5,0,0,5,5, 5,5,5,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,4,0,0, 4,0,0,4,0, 0,0,4,0,0, 0,0,5,0,0, 5,0,0,5,0, 0,0,5,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,4,0,0, 4,0,0,4,4, 4,4,4,0,0, 0,0,5,0,0, 5,0,0,5,5, 5,5,5,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,4,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,5,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,4,0, 0,0,4,4,4, 4,4,4,4,0, 0,0,0,5,0, 0,0,5,5,5, 5,5,5,5,0, 0,0,0,0,1 },

	{ 1,0,0,0,0, 4,4,4,4,4, 4,4,0,0,0, 4,0,0,0,0, 5,5,5,5,5, 5,5,0,0,0, 5,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,4,4, 4,4,4,0,0, 0,0,0,0,0, 0,0,0,5,5, 5,5,5,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,4,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,5,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,4,4, 4,4,4,0,0, 0,0,0,0,0, 0,0,0,5,5, 5,5,5,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,4,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,5,0, 0,0,0,0,0, 0,0,0,0,1 },

	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,4,4, 4,4,4,0,0, 0,0,0,0,0, 0,0,0,5,5, 5,5,5,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,1,0,1,1, 1,1,0,1,1, 0,6,7,0,1 },

	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,1,0,1,1, 2,0,1,0,0, 0,9,8,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,1,0,1, 1,1,1,0,0, 0,10,6,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,0, 0,0,0,0,1 },
	{ 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1, 1,1,1,1,1 },
};


void title() {
	

	for (int x = 0; x <= Y_MAX; x++) {
		for (int y = 0; y <= X_MAX; y++) {
			gotoxy(y, x);
			if (TitleMap[x][y] == 0) {
				setcolor(7, 0);
				printf("  ");
			}
			else if (TitleMap[x][y] == 1) {
				setcolor(7, 0);
				printf("■");
			}
			else if (TitleMap[x][y] == 2) {
				setcolor(7, 0);
				printf("━ ");
			}
			else if (TitleMap[x][y] == 4) {
				setcolor(4, 0);
				printf("■");
			}
			else if (TitleMap[x][y] == 5) {
				setcolor(3, 0);
				printf("■");
			}
			else if (TitleMap[x][y] >= 6) {
				if (TitleMap[x][y] == 6){
					setcolor(7, 0);
					printf("━");
				}
				if (TitleMap[x][y] == 7) {
					setcolor(7, 0);
					printf("┒");
				}
				if (TitleMap[x][y] == 8) {
					setcolor(7, 0);
					printf("┛");
				}
				if (TitleMap[x][y] == 9) {
					setcolor(7, 0);
					printf("┏");
				}
				if (TitleMap[x][y] == 10) {
					setcolor(7, 0);
					printf("┗");
				}
			}
		}
		puts("");
	}

	redKey = 0;
	blueKey = 0;

	gotoxy(4, 17);
	printf("[x%d] : 0", _x);
	gotoxy(4, 18);
	printf("조종 모드 : 1");
	gotoxy(4, 20);
	printf("무뇌 모드 : 2");
	gotoxy(1, 23);
	printf("제작자 - 김인성");
}

void Init() { // Map's Size is 40 x 25
	system("cls");

	GenerateMap();
	RemoveRange(30, 12);
	RemoveRange(10, 12);
	for (int y = 0; y <= Y_MAX; y++) {
		for (int x = 0; x <= X_MAX; x++) {

			if (Terrain[x][y] == 1) {
				gotoxy(x, y);
				printf("■");
				MapSource[x][y] = 0;
			}
			else {
				MapSource[x][y] = 1;
			}

		}
	}
	/*
	for (int i = 0; i <= Y_MAX; i++) {
		for (int j = 0; j <= X_MAX; j++) {
			gotoxy(j, i);
			if (i == 0) {
				if (j == 0) {
					printf("┌");
					MapSource[j][i] = 0;
				}
				else if (j == X_MAX) {
					printf("┐");
					MapSource[j][i] = 0;
				}
				else {
					printf("─");
					MapSource[j][i] = 0;
				}
			}
			else if (i == Y_MAX) {
				if (j == 0) {
					printf("└");
					MapSource[j][i] = 0;
				}
				else if (j == X_MAX) {
					printf("┘");
					MapSource[j][i] = 0;
				}
				else {
					printf("─");
					MapSource[j][i] = 0;
				}
			}
			else if (j == 0 || j == X_MAX) {
				printf("│");
				MapSource[j][i] = 0;
			}
			else {
				printf(" ");
					MapSource[j][i] = 1;
			}
		}
		puts("");
	}
	*/

	P1.Corps[0] = { 30, 12 };
	P1.movement = P1.Corps[0];
	P1.tmp = P1.Corps[0];
	P1.index = 0;
	P1.color = 1;
	P1.dir = rand() % 4;

	P2.Corps[0] = { 10, 12 };
	P2.movement = P2.Corps[0];
	P2.tmp = P2.Corps[0];
	P2.index = 0;
	P2.color = 4;
	P2.dir = rand() % 4;

	Render(&P1);
	Render(&P2);
}

void setcolor(unsigned short text, unsigned short back)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}

void gotoxy(int x, int y)
{
	COORD Pos = { x * 2, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void gotoxy(Position _p)
{
	COORD Pos = { _p.x * 2 , _p.y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void gotoxy(Player _p)
{
	COORD Pos = { _p.Corps[0].x * 2 , _p.Corps[0].y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void gotoxy(Player _p, int _index) {
	COORD Pos = { _p.Corps[_index].x * 2, _p.Corps[_index].y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void setcursortype(CURSOR_TYPE c)
{
	CONSOLE_CURSOR_INFO CurInfo;
	switch (c)
	{
	case NOCURSOR:
		CurInfo.dwSize = 1;
		CurInfo.bVisible = FALSE;
		break;
	case SOLIDCURSOR:
		CurInfo.dwSize = 100;
		CurInfo.bVisible = TRUE;
		break;
	case NORMALCURSOR:
		CurInfo.dwSize = 20;
		CurInfo.bVisible = TRUE;
		break;
	}
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
}


void move_arrow_key(char key)
{

	if (key >= 72 && key <= 80) {
		redKey = key;
	}
    if ( key == 'w' || key == 'a' || key == 's' || key == 'd' || key == 'W' || key == 'A' || key == 'S' || key == 'D') {
		blueKey = key;

	}
}

void Moving() {
	Position* p1 = &P1.Corps[0];
	Position* p2 = &P2.Corps[0];

	switch (redKey)
	{
	case 72:
		//위쪽(상) 방향의화살표키입력
		if (MapSource[p1->x][p1->y - 1] != 0 && Condition(&P1, 0)) {
			(p1->y)--;
			Render(&P1);
		}
		break;
	case 75:
		//왼쪽(좌) 방향의화살표키입력
		if (MapSource[p1->x - 1][p1->y] != 0 && Condition(&P1, 1)) {
			(p1->x)--;
			Render(&P1);
		}
		break;
	case 77:
		//오른쪽(우) 방향의화살표키입력
		if (MapSource[p1->x + 1][p1->y] != 0 && Condition(&P1, 2)) {
			(p1->x)++;
			Render(&P1);
		}
		break;
	case 80:
		//아래쪽(하) 방향의화살표키입력
		if (MapSource[p1->x][p1->y + 1] != 0 && Condition(&P1, 3)) {
			(p1->y)++;
			Render(&P1);
		}
		break;
	default:
		break;
	}

	switch (blueKey)
	{
	case 'w':
		//위쪽(상) 방향의화살표키입력
		if (MapSource[p2->x][p2->y - 1] != 0 && Condition(&P2, 0)) {
			(p2->y)--;
			Render(&P2);
		}
		break;
	case 'a':
		//왼쪽(좌) 방향의화살표키입력
		if (MapSource[p2->x - 1][p2->y] != 0 && Condition(&P2, 1)) {
			(p2->x)--;
			Render(&P2);
		}
		break;
	case 'd':
		//오른쪽(우) 방향의화살표키입력
		if (MapSource[p2->x + 1][p2->y] != 0 && Condition(&P2, 2)) {
			(p2->x)++;
			Render(&P2);
		}
		break;
	case 's':
		//아래쪽(하) 방향의화살표키입력
		if (MapSource[p2->x][p2->y + 1] != 0 && Condition(&P2, 3)) {
			(p2->y)++;
			Render(&P2);
		}
		break;
	default:
		break;
	}
	redKey = 0;
	blueKey = 0;
}

void Moving2() {
	Position* p1 = &P1.Corps[0];
	Position* p2 = &P2.Corps[0];
	switch (redKey)
	{
	case 72:
		//위쪽(상) 방향의화살표키입력
		if (MapSource[p1->x][p1->y - 1] != 0 && Condition(&P1, 0)) { P1.dir = 0; }
		break;
	case 75:
		//왼쪽(좌) 방향의화살표키입력
		if (MapSource[p1->x - 1][p1->y] != 0 && Condition(&P1, 1)) { P1.dir = 1; }
		break;
	case 77:
		//오른쪽(우) 방향의화살표키입력
		if (MapSource[p1->x + 1][p1->y] != 0 && Condition(&P1, 2)) { P1.dir = 2; }
		break;
	case 80:
		//아래쪽(하) 방향의화살표키입력
		if (MapSource[p1->x][p1->y + 1] != 0 && Condition(&P1, 3)) { P1.dir = 3; }
		break;
	default:
		break;
	}

	switch (blueKey)
	{
	case 'w':
		//위쪽(상) 방향의화살표키입력
		if (MapSource[p2->x][p2->y - 1] != 0 && Condition(&P2, 0)) { P2.dir = 0; }
		break;
	case 'a':
		//왼쪽(좌) 방향의화살표키입력
		if (MapSource[p2->x - 1][p2->y] != 0 && Condition(&P2, 1)) { P2.dir = 1; }
		break;
	case 'd':
		//오른쪽(우) 방향의화살표키입력
		if (MapSource[p2->x + 1][p2->y] != 0 && Condition(&P2, 2)) { P2.dir = 2; }
		break;
	case 's':
		//아래쪽(하) 방향의화살표키입력
		if (MapSource[p2->x][p2->y + 1] != 0 && Condition(&P2, 3)) { P2.dir = 3; }
		break;
	default:
		break;
	}
	redKey = 0;
	blueKey = 0;
}


void Render(Player *_p) {
	bool eat = false;
	setcolor(_p->color, 0);

	//머리끼리 부딪힘
	if (P1.Corps[0].x == P2.Corps[0].x && P1.Corps[0].y == P2.Corps[0].y) {
		GameEnd();
		return;
	}
	//이동 후 뭘부딪혔는지 검사
	switch (MapSource[_p->Corps[0].x][_p->Corps[0].y]) {
		case 2: GameEnd(*_p); return;
		case 3: _p->index = _p->index+_x;
			_p->Corps[_p->index] = _p->movement;
			eat = true;
			break;
		default: break;
	}
	//만약 별을 먹었다면 꼬리를 하나 늘려줌
	if (!eat) {
		gotoxy(_p->movement);
		printf("  ");
		MapSource[_p->movement.x][_p->movement.y] = 1;
		_p->movement = _p->Corps[_p->index];
	}

	//이동 후 머리의 위치를 이동시킴
	MapSource[_p->Corps[0].x][_p->Corps[0].y] = 2;
	gotoxy(*_p);
	printf("⊙");
	
	//꼬리의 모양조정
	if (_p->index >= 1) {
		_p->tmp = _p->Corps[1];
		gotoxy(_p->Corps[1]);
		printf("○");
	}

	//꼬리의 위치들 정렬
	for (int i = _p->index; i > 0; i--) {
		_p->Corps[i] = _p->Corps[i - 1];
	}

	//Log(_p->Corps[1]);
}

void GameEnd() {
	setcolor(14, 0);
	for (int i = 10; i <= 30; i++) {
		for (int j = 10; j <= 16; j++) {
			gotoxy(i, j);
			if (j == 10) {
				if (i == 10) {
					printf("┌");
				}
				else if (i == 30) {
					printf("┐");
				}
				else {
					printf("─");
				}
			}
			else if (j == 16) {
				if (i == 10) {
					printf("└");
				}
				else if (i == 30) {
					printf("┘");
				}
				else {
					printf("─");
				}
			}
			else if (j == 10 || j == 30) {
				printf("│");
			}
			else {
				printf(" ");
			}
		}
	}
	gotoxy(19, 13);
	setcolor(14, 0);
	printf("무승부!");

	Sleep(5000);
	InitGame();
}

void GameEnd(Player _p) {
	setcolor(14, 0);
	for (int i = 10; i <= 30; i++) {
		for (int j = 10; j <= 16; j++) {
			gotoxy(i, j);
			if (j == 10) {
				if (i == 10) {
					printf("┌");
				}
				else if (i == 30) {
					printf("┐");
				}
				else {
					printf("─");
				}
			}
			else if (j == 16) {
				if (i == 10) {
					printf("└");
				}
				else if (i == 30) {
					printf("┘");
				}
				else {
					printf("─");
				}
			}
			else if (j == 10 || j == 30) {
				printf("│");
			}
			else {
				printf(" ");
			}
		}
	}
	gotoxy(15, 13);
	if (_p.color == P1.color) {
		setcolor(4, 0);
		printf("빨강색 ");
		setcolor(14, 0);
		printf("벌레가 이겼습니다!");
	}
	else {
		setcolor(3, 0);
		printf("파랑색 ");
		setcolor(14, 0);
		printf("벌레가 이겼습니다!");
	}
	
	Sleep(5000);
	InitGame();
}

void CreateStar() {
	while (1) {
		int x = (rand() % X_MAX);
		int y = (rand() % Y_MAX);
		if (MapSource[x][y] == 1) {
			gotoxy(x, y);
			setcolor(14, 0);
			printf("★");
			MapSource[x][y] = 3;
			break;
		}
	}

}

void Move() {
	if (P1.dir == 0)
		P1.Corps[0].y--;
	else if (P1.dir == 1)
		P1.Corps[0].x--;
	else if (P1.dir == 2)
		P1.Corps[0].x++;
	else if (P1.dir == 3)
		P1.Corps[0].y++;

	if (MapSource[P1.Corps[0].x][P1.Corps[0].y] == 0) GameEnd(P1);

	if (P2.dir == 0)
		P2.Corps[0].y--;
	else if (P2.dir == 1)
		P2.Corps[0].x--;
	else if (P2.dir == 2)
		P2.Corps[0].x++;
	else if (P2.dir == 3)
		P2.Corps[0].y++;

	if (MapSource[P2.Corps[0].x][P2.Corps[0].y] == 0) GameEnd(P2);

	Render(&P1);
	Render(&P2);
		//Y-X-X+Y+

}

void Log(Position p) {
	gotoxy(0, 25);
	printf("x = %d, y = %d", p.x, p.y);
}

bool Condition(Player *p, int next) {
	if (p->index == 0) return true;
	switch (next) {
		case 0: return p->Corps[0].y - 1 != p->tmp.y;
		case 1: return p->Corps[0].x - 1 != p->tmp.x;
		case 2: return p->Corps[0].x + 1 != p->tmp.x;
		case 3: return p->Corps[0].y + 1 != p->tmp.y;
		default: return false;
	}
}

int* GetX() { return &_x; }

void SetX(int x) { _x = x; }

void RandomFillMap() {

	for (int x = 0; x < X_MAX; x++) {
		for (int y = 0; y < Y_MAX; y++) {
			if (x == 0 || x == X_MAX+1 || y == 0 || y == Y_MAX+1) {
				Terrain[x][y] = 1;
			}
			else {
				Terrain[x][y] = (rand() % 100 < 28) ? 1 : 0;
			}
		}
	}
}

void GenerateMap() {
	RandomFillMap();

	for (int i = 0; i < 5; i++) {
		SmoothMap();
	}

}

void SmoothMap() {
	for (int x = 1; x <= X_MAX; x++) {
		for (int y = 1; y <= Y_MAX; y++) {
			int neighbourWallTiles = GetSurroundingWallCount(x, y);
			if (neighbourWallTiles > 4)
				Terrain[x][y] = 1;
			else if (neighbourWallTiles < 4)
				Terrain[x][y] = 0;

		}
	}
}

bool IsInMapRange(int x, int y) {
	return x >= 0 && x < X_MAX-1 && y >= 0 && y < Y_MAX-1;
}

int GetSurroundingWallCount(int gridX, int gridY) {
	int wallCount = 0;
	for (int neighbourX = gridX - 1; neighbourX <= gridX + 1; neighbourX++) {
		for (int neighbourY = gridY - 1; neighbourY <= gridY + 1; neighbourY++) {
			if (IsInMapRange(neighbourX, neighbourY)) {
				if (neighbourX != gridX || neighbourY != gridY) {
					wallCount += Terrain[neighbourX][neighbourY];
				}
			}
			else {
				wallCount++;
			}
		}
	}

	return wallCount;
}

void RemoveRange(int x, int y) {

	for (int i = x - 2; i <= x + 2; i++) {

		for (int j = y - 2; j <= y + 2; j++) {
			Terrain[i][j] = 0;

		}
	}

}
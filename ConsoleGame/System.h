#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

#define X_MAX 39
#define Y_MAX 24

typedef struct {

	int x, y;

}Position;

typedef struct {

	Position Corps[300];
	Position movement;
	Position tmp;
	int index;
	int color;
	int dir;

}Player;

static Player P1;
static Player P2;

static int MapSource[X_MAX + 1][Y_MAX + 1];
static int Terrain[X_MAX + 1][Y_MAX + 1];
static int _x = 1;

static int redKey;
static int blueKey;
static int GameMode = 0;

typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;

void title();

void Init();

void setcolor(unsigned short text, unsigned short back);

void gotoxy(int x, int y);

void gotoxy(Position _p);

void gotoxy(Player _p);

void gotoxy(Player _p, int _index);

void move_arrow_key(char key);

void Moving();
void Moving2();
void setcursortype(CURSOR_TYPE c);

void Render(Player *_p);

void GameEnd();

void GameEnd(Player _p);

void CreateStar();

void Move();

void Log(Position p);

bool Condition(Player *p, int next);

int* GetX();

void SetX(int x);

void InitGame();

int GetSurroundingWallCount(int gridX, int gridY);

bool IsInMapRange(int x, int y);

void GenerateMap();

void RandomFillMap();

void SmoothMap();

void RemoveRange(int x, int y);
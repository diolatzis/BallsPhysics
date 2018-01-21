#ifndef GAME_ENGINES_CW_2_H
#define GAME_ENGINES_CW_2_H

#include <QtWidgets/QMainWindow>
#include "ui_GameEnginesCW2.h"

class GameEnginesCW2 : public QMainWindow
{
	Q_OBJECT

public:
	GameEnginesCW2(QWidget *parent = Q_NULLPTR);

private:
	Ui::GameEnginesCW2Class ui;
};

#endif

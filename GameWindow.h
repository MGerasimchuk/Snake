#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>

class Game;
class Map;
class Snake;
class Entity;

namespace Ui {
	class GameWindow;
}

class GameWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit GameWindow(Game *game, QWidget *parent = 0);
	~GameWindow();

	void animateCollision(Snake *snake, Entity *entity, float durationSeconds);
	void update();
	void setWinner(QVector<Snake> snakes);

private:
	Ui::GameWindow *ui;

	Map *map;
	Game *game;

signals:

public slots:
	void onStartClicked();
	void onStopClicked();
	void onResetClicked();

	void onOpenMapChoserDialog();
	void onMainSnakeSelected(QString name);
	void onOpenSnakeAIChoserDialog();
};

#endif // GAMEWINDOW_H

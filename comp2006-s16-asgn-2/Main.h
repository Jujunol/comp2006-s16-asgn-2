#pragma once
#include <iostream>

class HighScoreManager {
	struct UserScore;
	HighScoreManager();
	~HighScoreManager();
	void create();
	void update();
	void remove();
};

class User {
	struct UserInfo;
	User();
	~User();
	void getUser(char* username);
	void setHighScore(int score);
	void updateInfo();
	void remove();
};
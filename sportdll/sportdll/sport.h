#pragma once
class _declspec(dllexport) sport
{
private:
	int speed = 0;
public:
	void setSpeed(int speed1);
	int getSpeed();
	void addSpeed(int speed1);
};

#pragma once

#include "Plane.h"

//��ͨ�ɻ�
class Copter : public Plane{
public:
	virtual void fly();
	virtual void land();
};
#pragma once

//�t�@�C���̗p�r�F
//�ŏI�ҏW�ҁF���{
//�X�V���F2015/01/27
//�ύX�����_�F�Ƃ肠�����쐬

#include <vector>
#include "dixsmartptr.h"
#include "ColliderSpace.h"
#include "GameObject.h"

class Collider
{
	private:
	sp<ColliderSpace> objects_;

	public:
	void Init(sp<std::vector<GameObject>> objects_);
	void Update();

};
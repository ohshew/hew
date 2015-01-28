#pragma once

//�t�@�C���̗p�r�F
//�ŏI�ҏW�ҁF���{
//�X�V���F2015/01/27
//�ύX�����_�F�Ƃ肠�����쐬

#include <vector>
#include "dixsmartptr.h"
#include "GameObject.h"

class ColliderSpace
{
	private:
	Vector3 space_[2];
	std::vector<sp<GameObject>> objects_;
	sp<ColliderSpace> linklist_[6];

	public:
	void Update();
	void AddObjects(sp<GameObject> _object);
	void DeleteObject(sp<GameObject> _object);
};
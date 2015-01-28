#pragma once

//�t�@�C���̗p�r�F
//�ŏI�ҏW�ҁF���{
//�X�V���F2015/01/26
//�ύX�����_�F�Ƃ肠�����쐬

#include "Types.h"

class GameObject
{
	private:
	Transform transform_;
	CollideState physics_;

	public:
	void Start();
	void Update();
	void Draw();
};
#pragma once

//�t�@�C���̗p�r�F
//�ŏI�ҏW�ҁF���{
//�X�V���F2015/01/26
//�ύX�����_�F�Ƃ肠�����쐬

#include "dixsmartptr.h"

class Core;
typedef sp<Core> CorePtr;

class Core
{
	private:
	//�R���X�g���N�^
	Core();	
	
	public:
	static CorePtr GetInstance();
	void Run();
};
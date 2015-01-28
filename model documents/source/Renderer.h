#pragma once

//�t�@�C���̗p�r�F
//�ŏI�ҏW�ҁF���{
//�X�V���F2015/01/26
//�ύX�����_�F�Ƃ肠�����쐬

#include "dixsmartptr.h"

class Renderer;
typedef sp<Renderer> RendererPtr;

class Renderer
{
	public:
	void Init();
	void BeginPass();
	void EndPass();
	void Update();
};
#pragma once

//�t�@�C���̗p�r�F
//�ŏI�ҏW�ҁF���{
//�X�V���F2015/01/26
//�ύX�����_�F�Ƃ肠�����쐬

#include "dixsmartptr.h"
#include "Renderer.h"
#include "Scene.h"

class SceneManager
{
	private:
	RendererPtr renderer_;

	public:
	ScenePtr CreateScene();
};
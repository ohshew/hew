#pragma once

//�t�@�C���̗p�r�F
//�ŏI�ҏW�ҁF���{
//�X�V���F2015/01/26
//�ύX�����_�F�Ƃ肠�����쐬

#include <vector>
#include "dixsmartptr.h"
#include "GameObject.h"

class Scene;
typedef sp<Scene> ScenePtr;

class Scene
{
	protected:
	std::vector<GameObject> object_;

	private:
	Scene();

	public:
	void Init();
	void Update();
};
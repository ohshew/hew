#pragma once

//ファイルの用途：
//最終編集者：柳本
//更新日：2015/01/26
//変更した点：とりあえず作成

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
#pragma once

//ファイルの用途：
//最終編集者：柳本
//更新日：2015/01/26
//変更した点：とりあえず作成

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
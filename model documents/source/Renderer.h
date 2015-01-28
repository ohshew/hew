#pragma once

//ファイルの用途：
//最終編集者：柳本
//更新日：2015/01/26
//変更した点：とりあえず作成

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
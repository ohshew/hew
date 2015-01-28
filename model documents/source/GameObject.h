#pragma once

//ファイルの用途：
//最終編集者：柳本
//更新日：2015/01/26
//変更した点：とりあえず作成

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
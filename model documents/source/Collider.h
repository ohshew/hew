#pragma once

//ファイルの用途：
//最終編集者：柳本
//更新日：2015/01/27
//変更した点：とりあえず作成

#include <vector>
#include "dixsmartptr.h"
#include "ColliderSpace.h"
#include "GameObject.h"

class Collider
{
	private:
	sp<ColliderSpace> objects_;

	public:
	void Init(sp<std::vector<GameObject>> _objects);
	void Update();

};
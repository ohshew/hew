#pragma once

//ファイルの用途：
//最終編集者：柳本
//更新日：2015/01/27
//変更した点：とりあえず作成

#include <vector>
#include "dixsmartptr.h"
#include "GameObject.h"

class ColliderSpace
{
	private:
	Vector3 space_[2];
	std::vector<sp<GameObject>> objects_;
	sp<ColliderSpace> linklist_[6];

	public:
	void Update();
	void AddObjects(sp<GameObject> _object);
	void DeleteObject(sp<GameObject> _object);
};
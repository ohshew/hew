#pragma once

//ファイルの用途：構造体の定義
//最終編集者：柳本
//更新日：2015/01/26
//変更した点：とりあえず作成

#include <vector>
#include "dixsmartptr.h"

typedef struct
{
	float x;
	float y;
	float z;
}Vector3;

typedef struct
{
	Vector3 position;
	Vector3 rotation;
	Vector3 scale;
	Vector3 localPosition;
	Vector3 localRotation;
	Vector3 localScale;
}Transform;

typedef struct
{
	bool hit;
	bool stride;
	bool enable;
	std::vector<sp<GameObject>> hitobj;
}CollideState;
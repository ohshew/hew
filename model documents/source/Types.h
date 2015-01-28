#pragma once

//�t�@�C���̗p�r�F�\���̂̒�`
//�ŏI�ҏW�ҁF���{
//�X�V���F2015/01/26
//�ύX�����_�F�Ƃ肠�����쐬

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
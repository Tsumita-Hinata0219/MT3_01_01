#pragma once

#include "Struct.h"
#include "assert.h"
#include <cmath>
#include <Novice.h>



static const int kRowHeight = 20;
static int kColumnWidth = 60;
void VectorScreenPrintf(int x, int y, Vector3 vector, const char* string);


// Add
Vector3 Add(const Vector3 v1, const Vector3 v2);


// Scale
Matrix4x4 MakeScaleMatrix(const Vector3 scale);


// Rotate(X,Y,Z)
Matrix4x4 MakeRotateXMatrix(float radian);

Matrix4x4 MakeRotateYMatrix(float radian);

Matrix4x4 MakeRotateZMatrix(float radian);


// Multiply
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);


// Rotate(all)
Matrix4x4 MakeRotateXYZMatrix(float radianX, float radianY, float radianZ);


// Translate
Matrix4x4 MakeTranslateMatrix(const Vector3 translate);


// AffineMatrix (W = SRT)
Matrix4x4 MakeAffineMatrix(const Vector3& scale, const Vector3& rotate, const Vector3& translate);


// perspectiveFovMatrix
Matrix4x4 MakePerspectiveFovMatrix(
	float fovY, float aspecrRatio, float nearClip, float farClip);


// orthographicMatrix
Matrix4x4 MakeOrthographicMatrix(
	float left, float top, float right, float bottom, float nearClip, float farClip);


// viewportMatrix
Matrix4x4 MakeViewportMatrix(
	float left, float top, float width, float height, float minDepth, float maxDepth);


// Inverse
Matrix4x4 Inverse(const Matrix4x4& m);


// Transform
Vector3 Transform(Vector3 vector, Matrix4x4 matrix);


// CrossProduct
Vector3 Cross(const Vector3& v1, const Vector3& v2);


void DrawGrid(const Matrix4x4& viewProjectionMatrix, const Matrix4x4& viewportMatrix);
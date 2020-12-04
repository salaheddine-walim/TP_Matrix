#include "pch.h"
#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int r, int c)
{
	this->rows = r;
	this-> cols = c;
	for (int i = 0; i < this->rows; i++) {
		this->matrix = new float*[this->rows];
		for (int j = 0; j < this->cols; j++) {
			this->matrix[i] = new float[this->cols];
		}
	}
}

Matrix& Matrix::operator+(const Matrix& m)
{
	for (int i = 0; i < this->rows; i++) {
		for (int j = 0;j < this->cols; j++) {
			 this->matrix[i][j] += m.matrix[i][j];
		}
	}
	return *this;
}

Matrix& Matrix::operator*(const Matrix&)
{
	// TODO: insérer une instruction return ici
	return *this;
}

void Matrix::remplir()
{
	for (int i = 0; i < this->rows; i++) {
		for (int j = 0; j < this->cols; j++) {
			this->matrix[i][j] = 0.0;
		}
	}
}

void Matrix::print()
{
	for (int i = 0; i < this->rows; i++) {
		for (int j = 0; j < this->cols; j++) {
			cout << this->matrix[i][j] << " ";
		}
		cout << endl;
	}
}

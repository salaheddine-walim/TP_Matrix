#include "pch.h"
#include "Matrix.h"
#include <iostream>
#include <fstream>

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
	//Remplir a partir d'un fichier.txt
	std::string filename;
	filename = "C:/Users/willi/Desktop/EMSI/3 eme annee/programmation orientee objet/tp c++/TP_Matrix/TP_Matrix/Numbers.txt";
	std::ifstream file;
	file.open(filename);
	float number;
	int i = 0;
	
	for (int i = 0; i < this->rows; i++) {
		for (int j = 0; j < this->cols; j++) {
			file >> number;
			this->matrix[i][j] = number;
		}
	}

	//for (int i = 0; i < this->rows; i++) {
	//	for (int j = 0; j < this->cols; j++) {
	//		this->matrix[i][j] = 0.0;
	//	}
	//}
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

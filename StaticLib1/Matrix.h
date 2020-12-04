#pragma once
class Matrix
{
public :
	float** matrix;
	Matrix(int, int);
	Matrix& operator+(const Matrix&);
	Matrix& operator*(const Matrix&);
	void remplir();
	void print();
	
private:
	int rows;
	int cols;
};


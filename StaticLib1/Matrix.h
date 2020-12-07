#pragma once

class Matrix
{
public :
	
	Matrix(int, int);
	Matrix& operator+(const Matrix&);
	Matrix& operator*(const Matrix&);
	void remplir( );
	void print();
	
private:
	float** matrix;
	int rows;
	int cols;
};


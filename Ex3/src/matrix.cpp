#include <iostream>
#include <iomanip>
#include "matrix.h"
#include <stdlib.h>
matrix::matrix(int rownum,int colnum){
    row=rownum;
    col=colnum;
    data=new float *[rownum];//allocate new memmory for row
    for (int i=0;i<rownum;i++){
        data[i]=new float [colnum];//allocate new memmory for col
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            data[i][j]=(matrixdata) i-j;
        }

    }
}
//initiate copy constrcutor
matrix::matrix(const matrix &m){
    row=m.row;
    col=m.col;
    data=new float*[row];
    for (int i=0;i<row;i++){
        data[i]=new float [col];
    }
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            data[i][j]=m.data[i][j];
        }
    }
}
matrix::~matrix(){
    for (int i=0;i<row;i++){
        delete[] data[i];
    }
    delete[] data;
}

matrix matrix::operator+(matrix & m){
        if (row!=m.row||col!=m.col){
        std::cout<<"Error matrices are not the same"<<std::endl;
    }
    else {
    matrix add(row,col);
        for (int i=0;i<row;i++){
            for (int j=0;j<col;j++){
                std::cout<<data[i][j];
                add.data[i][j]=this->data[i][j]+m.data[i][j];
            }
        }
        return add;
    }
}

matrix matrix::operator-(matrix & m){
    if (row!=m.row||col!=m.col){
        std::cout<<"Error matrices are not the same"<<std::endl;
    }
    else {
    matrix sub(row,col);
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            sub.data[i][j]=this->data[i][j]-m.data[i][j];
        }
    }
    return sub;
    }

}

matrix matrix::operator*(matrix & m){
    if (!(col==m.row)){
        std::cout<<"Error matrices are not the same"<<std::endl;
    }
    else {
        matrix mul(row,col);
        int temp=0;
        for (int i=0;i<row;i++){
            for (int j=0;j<m.col;j++){
                temp=0;
                for (int k=0;k<col;k++)
                    temp+=this->data[i][k]*m.data[k][j];
                    mul.data[i][j]=temp;
                }
        }
        return mul;
        }
}
std::ostream &operator<< (std::ostream &out, matrix &output){
	//only used to output a matrix of size 5X5
	//if statement limits this
	if (output.row <= 5 && output.col <= 5)
	{
		for (int i = 0; i < output.row; i++)
		{
			out << "\n";

			for (int j = 0; j < output.col; j++)
				out << output.data[i][j] << "\t";
		}
	
		return out;
	}
	//the else statement uses loops to limit the output of a matrix larger than 5X5 to 5X5
	else
	{
		for (int i = 0; i < 5; i++)
		{
			out << "\n";

			for (int j = 0; j < 5; j++)
				out << output.data[i][j] << "\t";
		}
	
		return out;
	}
}
/*void matrix::display() const{
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            std::cout<<data[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}
*/
bool matrix::operator==(const matrix &m){
    bool result=true;
    for (int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            if (this->data[i][j]!=m.data[i][j]){
                result=false;
                return result;
            }
        }
    }
    return result;
}
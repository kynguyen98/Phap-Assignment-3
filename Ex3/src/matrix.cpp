#include "matrix.h"
Matrix::Matrix(int rowSize,int colSize,float initial){
row=rowSize;
columm=colSize;
data.resize(rowSize);
for (int i=0;i<data.size();i++){
    data[i].resize(colSize,initial);
}
}
Matrix::Matrix(const char * filename){
    std::ifstream file_A(filename);//input file stream to open the file a.txt
    //task 1 
    //keeps track of the columm and row size 
    int colSize=0;
    int rowSize=0;
    std::string line_A;
    int idx=0;
    double element_A;
    double *vector_A=nullptr;
    if (file_A.is_open()&&file_A.good())
    {
        std::cout <<"File a.txt is open\n";
        while (getline(file_A,line_A)){
            rowSize+=1;
            std::stringstream stream_A(line_A);
            colSize=0;
            while(1){
                stream_A>>element_A;
                if (!stream_A){
                    break;
                }
                colSize+=1;
                double *tempArr=new double (idx+1);
                std::copy(vector_A,vector_A+idx,tempArr);
                tempArr[idx]=element_A;
                vector_A=tempArr;
                idx+=1;
            } 
        }
    }
    else std::cout<<"failed to open\n";
    int j;
    idx=0;
    data.resize(rowSize);
    for (int i=0;i<data.size();i++){
        data[i].resize(colSize);
    }
    for (int i=0;i<rowSize;i++){
        for (j=0;i<colSize;j++){
            this->data[i][j]=vector_A[idx];
            idx++;
        }
    }
    row=rowSize;
    columm=colSize;
    delete[]vector_A;//typing up loose end;
}
//copy constructor
Matrix::Matrix(const Matrix&B){
    this->columm=B.getcol();
    this->row=B.getrow();
    this->data=B.data;
}
Matrix::~Matrix(){}
//addition 
/*Matrix Matrix::operator*(Matrix& B){
    Matrix sum(columm,row,0.0);
    int i,j;
    for (i=0;i<row;i++){
        for (j=0;j<columm;j++){
            sum(i,j)=this->data[i][j]+B(i,j);
        }
    }
    return sum;
}
//Multiplicate
Matrix Matrix::operator*(Matrix&B){
    Matrix mull(row,B.getcol(),0.0);
    if (columm==B.getrow)//check row = col before mull
    {
        int i,j,k;
        double temp=0;
        for (i=0;i<row;i++){
            for (j=0;i<B.getcol();j++){
                temp=0;
                for (k=0;k<columm;k++){
                    temp+=data[i][k]*B(k,j);
                }
                mull(i,j)=temp;
                std::cout<<mull(i,j)<<" \n";
            }
        }
        return mull;
    }
    else return "Error";
}
//subtraction
Matrix Matrix::operator-(Matrix&B){
    Matrix sub(columm,row,0.0);
    int i,j;
    for (i=0;i<row;i++){
        for (j=0;j<columm;j++){
            sub(i,j)=this->data[i][j]-B(i,j);
        }
    }
    return sub;
}
*/
float& Matrix::operator()(const int &rowno,const int & colno){
    return this->data[rowno][colno];
}
int Matrix::getcol() const{
    return this->columm;
}
int Matrix::getrow() const{
    return this->row;
}
Matrix Matrix::transpose(){
    Matrix transpose(columm,row,0.0);
    for (int i=0;i<columm;i++){
        for (int j=0;j<row;j++){
            transpose(i,j)=this->data[i][j];
        }
    }
    return transpose;
}
//print matrix
void Matrix::display() const{
    std::cout<<"Matrix: \n";
    for (int i=0;i<row;i++){
        for (int j=0;j<columm;j++){
            std::cout<<"[ "<<data[i][j]<<" ]";
        }
        std::cout<<std::endl;
    }
}
/*std::tuple<Matrix, float,int >Matrix::powerIter(int rownum,float tor){
    Matrix a(rownum,1,1.0);
    for (int i=1;i<=rownum;i++){
        a(i-1,0);
    }
    int error=0;
    float difference=1.0;
    int j=0,location;
    std::vector<float>elgen;
    float eigenvalue=0.0;
    elgen.push_back(0.0);
    while(abs(difference)>tor){
        j++;
        for (int i=0;i<rownum;++i){
            if (abs(a(i,0))>=abs(eigenvalue)){
                eigenvalue=a(0,0);
                location=i;
            }
        }
        if (j>=5e5){
            std::cout<<"complex number? error"<<std::endl;
            std::cout<<"Error running code black"<<std::endl;
            error=-1;
            return std::make_tuple(a,0.0,error);
        }
        elgen.push_back(eigenvalue);
        difference=elgen[j]-elgen[j-1];
        a=a/eigenvalue;
    }
}
*/
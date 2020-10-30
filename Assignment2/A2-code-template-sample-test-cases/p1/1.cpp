#include <iostream>

const int MAXDIM = 10;

//----------------------DO NOT CHANGE ANYTHING ABOVE THIS LINE------------------

//   Write your function definitions here

void read_matrix(int matrix[][10],int& dim){
	std::cin >> dim;//read in dimension

	for(int i = 0;i < dim;i++){

		for(int j = 0;j < dim;j++){
			std::cin >> matrix[i][j];//read in element
		}

	}
}

void display_inner_cw_rotated(int matrix[][10],int dim){
	for(int i = 1;i < dim - 1;i++){

                for(int j = dim - 2;j >= 1;j--){
                        std::cout << matrix[j][i] <<" ";//output the element after rotate matrix
                }
		std::cout<<"\n";
        }

}
//----------------------DO NOT CHANGE ANYTHING BELOW THIS LINE------------------

int main()
{
  int matrix[MAXDIM][MAXDIM]{};
  int dim = 0;

  read_matrix(matrix, dim);
  display_inner_cw_rotated(matrix, dim);

  return 0;
}

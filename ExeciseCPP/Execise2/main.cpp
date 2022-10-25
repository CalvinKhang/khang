#include<iostream>
#include<vector>
#include<algorithm>

int solution(std::vector<int> &);

int main(void)
{
    std::vector<int> A1 = {10,2,5,1,9,20};
    std::vector<int> A2 = {9,6,8,7,1};
    std::vector<int> A3 = {1,2,3};
    std::vector<int> A4 = {5,9};
    std::vector<int> A5 = {6,55,1,8,9,10};
    std::vector<int> A6 = {6,8,6,4,8,1,5};

    std::cout << "Resuld A1:" << solution(A1) << std::endl;
    std::cout << "Resuld A2:" << solution(A2) << std::endl;
    std::cout << "Resuld A3:" << solution(A3) << std::endl;
    std::cout << "Resuld A4:" << solution(A4) << std::endl;
    std::cout << "Resuld A5:" << solution(A5) << std::endl;
    std::cout << "Resuld A6:" << solution(A6) << std::endl;
    return 0;
}

int solution(std::vector<int> &A)
{
    int n = A.size();
    if(n<3) return 0;
    else 
    {
        for(int P=0; P<n-2; P++)
            for(int Q = P+1; Q<n-1; Q++)
                for( int R = Q+1; R<n; R++)
                {
                    //std::cout << "P=" << P << "Q="<< Q << "R="<< R << std::endl;
                    if(A[P] + A[Q] > A[R] && A[Q]+ A[R] > A[P] && A[R]+A[P]> A[Q])
                        return 1;
                }
                
                
        return 0;
    }
}

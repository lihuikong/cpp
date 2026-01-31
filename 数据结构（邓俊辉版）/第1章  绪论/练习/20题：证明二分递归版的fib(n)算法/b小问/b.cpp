#include <iostream>

// 定义2*2矩阵
struct Matrix
{
    unsigned __int128 mat[2][2];
    Matrix()
    {
        mat[0][0] = mat[0][1] = mat[1][0] = mat[1][1] = 0;
    }
};

// 矩阵乘法：实现两个2*2矩阵相乘
Matrix multiply(Matrix A, Matrix B)
{
    Matrix C;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                C.mat[i][j] += A.mat[i][k] * B.mat[k][j];
            }
        }
    }
    return C;
}

// 矩阵平方：对应sqr逻辑
Matrix sqr(Matrix A)
{
    return multiply(A, A);
}

// 核心函数：参考power2(n)写的powerFib(n)，求得M的n-1次方然后乘第一项Fib(1)
//                                                            Fib(0) 即可
// 时间复杂度：O(logn)
Matrix powerFib(int n)
{
    Matrix M;
    M.mat[0][0] = 1;
    M.mat[0][1] = 1;
    M.mat[1][0] = 1;
    M.mat[1][1] = 0;

    if (n == 1)
        return M;

    // 递归调用n>>1,实现对数级降维
    if (n & 1)
    {                                              // 判断奇偶
        return multiply(sqr(powerFib(n >> 1)), M); // 奇数就平方后补乘一个M
    }
    else
    {
        return sqr(powerFib(n >> 1)); // 偶数直接平方
    }
}

// 获得第n项斐波那契数列
unsigned __int128 getfib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    Matrix res = powerFib(n - 1);
    return res.mat[0][0];
}

int main()
{
    int n;
    std::cin >> n;
    unsigned __int128 result = getfib(n);

    // 输出：由于 __int128 没有直接输出流，需要转换或者手动打印
    std::cout << "Fib(" << n << ")=" << (unsigned long long)result << std::endl;
    return 0;
}
/*
对形如:T(n) = aT(n/b) + f(n)的递归方程
其中(fn)是确定的正函数)有:
        o( nlogb^a )    o( nlogb^a ) > O( f(n) )
T(n)=   o( f(n)logn)   o( nlogb^a )= O( f(n))
        o( f(n) )     o( nlogb^a ) < O( f(n))


T(n)= 2T(n/2) + cn
//因为a，b都为2，所以
T(n) = O( nlogn )

*/
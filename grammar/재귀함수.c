// 함수안에 재귀함수 호출 ver.
int Factorial(int _Count)
{
    int iValue = 1;
    for (int j = 0; j < _Count - 1; ++j)
    {
        iValue *= (j + 2);
    }

    Factorial(10);

    return iValue;
    // 이렇게 재귀 함수를 잘 못 사용할 경우에 Stack overflow가 발생한다.
    // 리턴 후 함수를 재 호출하고 호출해서
}

// 팩토리얼 재귀함수 ver.
int Factorial_Re(int _Count)
{
    if (1 == _Count)
    {
        return 1;
        // 탈출 조건으로, 1이 되었을 때 팩토리얼이 역으로 돌아가면서
        // 호출된 값들을 main 함수의 호출된 곳으로 돌려준다.
    }

    return _Count * Factorial_Re(_Count - 1);
}

// 피보나치 수열 함수 ver.
// 1 1 2 3 5 8 13 21 34 55
int Fibonacci(int _Count)
{
    if (1 == _Count || 2 == _Count)
    {
        return 1;
        // 탈출 조건
    }

    int iPrev1 = 1;
    int iPrev2 = 1;
    int iValue = 0; // 값을 임시로 받아주는 역할

    for (int i = 0; i < _Count - 2; ++i)
    {
        iValue = iPrev1 + iPrev2;
        iPrev1 = iPrev2;
        iPrev2 = iValue;
        /*
          헷갈리면 그림을 그리면서 해보면 좋다.
          컴퓨터는 우리가 시킨 그대로만 실행한다.
          생각했던 것보다 내 생각과 다르게 컴파일 될 수 있다.
          디버깅을 통해서 테스트를 많이 해봐야 한다.
        */
    }

    return iValue;
}

// 피보나치 재귀함수 ver. 
int Fibonacci_Re(int _Count)
{
    if (1 == _Count || 2 == _Count)
    {
        return 1;
        // 탈출 조건
    }
    return Fibonacci_Re(_Count - 1) + Fibonacci_Re(_Count - 2);
    // 피보나치의 f(n) 합은 f(n-1), f(n-2)의 합이기 때문에
    // Ex) 피보나치의 규칙이 10번째는 8번째와 9번째의 합이기 때문이다.
}
/*
  재귀 함수는 주로 가독성이 좋고 구현하기 직관적이다.
  Stack overflow 발생 시키지 않기 위해서는 탈출할 조건이 있어야 한다.
  추후에 계층 구조를 만들 때 활용도가 높다.
  편리하긴 하지만 성능이 떨어질 수 있기 때문에 설계를 할 때 주의하자
*/

int main()
{
    int iValue = Factorial(4);
    iValue = Factorial_Re(10);

    iValue = Fibonacci(7);
    iValue = Fibonacci_Re(7)

        return 0;
}

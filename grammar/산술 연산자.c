/*  산술 연산자 순위  (참고용)  
    L -> R 왼쪽에서 오른쪽으로 연관성 
    1   ::   
   
    2   () {} type() type{} [] . -> --
            typeid
            const_cast
            dynamic_cast
            reinterpret_cast
            static_cast

    3   ! - ++ -- ! ~ (type) sizeof & * new new[] delete delete[]
    
    4   ->*     .*
   
    5   *   /   %

    6   +   -
    
    7   <<  >>

    8   <   <=  >   >=

    9   ==  !=

    10  &

    11  ^

    12  |

    13  &&

    14  ||

    15  ?:  =   *=  /=  %=  +=  -=  <<= >>= &=  |=  ^\

    16  throw

    17  ,
*/

int main()
{
    // 세미콜론->;
    // 대입 연산자->=
    // 산술 연산자 +
    //  , -, *, /, % (모듈러스, 나머지)

    int data = 0;

    data = 10 / 3;      // 나눗 값을 알 수 있다.
    data = 10 % 3;      // 나머지 값을 알 수 있다.

    // 실수표현 기준으로 나머지를 하면 문법 오류가 난다.
    data = (10.f / 3.f);

    // 실수를 상수로 적을 경우 소수점에 f를 붙이면 float 자료형으로
    // f를 붙이지 않으면 double 자료형으로 간주한다.
    return 0;
}
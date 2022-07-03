#define HUNGRY  0x1 // 16진수로 표현하면 규칙이 보인다.
#define THIRSTY 0x2
#define TIRED   0x4
#define FIRE    0x8

#define COLD    0x10
#define POISON  0x20
#define aaaaaa  0x40
#define bbbbbb  0x80

#define cccccc  0x100
#define dddddd  0x200
#define eeeeee  0x400
#define ffffff  0x800

// #define  전처리기  컴파일러가 먼저 처리해준다.
// 유지 보수에 용이하다.
// 가독성이 좋다.

int main()
{
    // 비트 연산자
    // 쉬프트 <<, >>
        unsigned char byte = 1;

    byte <<= 1;
    // byte = byte << 1;
    //  2^n 배수

    byte >>= 1;
    // 1/2로 줄어든다
    // 2^n 나눈 몫

    // 비트 곱(&)   : 모든 비트끼리 자리 수에 맞춰 둘 다 1일 때 1이고, 아니면 0 
    // 비트 합(|)   : 모든 비트끼리 자리 수에 맞춰 둘 중 하나만 1일 때 1이고, 아니면 0
    // 비트 xor (^) : 각 자리의 비트가 같으면 0 다르면 1 비트 반전(~), 각 자리 비트를 1은 0으로 0은 1로 반전시킴

                                                                                                                                                                                                                      unsigned int iStatus = 0;

    iStatus |= HUNGRY;
    iStatus |= THIRSTY;

    // 상태 확인
    if (iStatus & THIRSTY)
    {
    }
    /*
       iStatus가 어떤 값이 들어 있는지 모르지만
       1011 0011  iStatus 값이 들어 있다고 치자
       0000 0010  THIRSTY가 define에서 2로 지정 된 값이다.
                  각 자리수 마다 비트 곱을 실행하면
       0000 0010  으로 나오기 때문에 상태를 파악 할 수 있다.
    */

    // 특정 자리 비트제거
    iStatus &= ~THIRSTY;
    /*
       iStatus가 어떤 값이 들어 있는지 모르지만
       1110 1010  iStatus 값이 들어 있다고 치자\
       1111 1101  THIRSTY 값을 반전한 값이다.
                  각 자리수 마다 비트 곱을 실행하면
       1110 1000  으로 나오기 때문에 특정 자리 비트를 제거 할 수 있다.
    */

    return 0;
}
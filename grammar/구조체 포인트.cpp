typedef struct _tagMyST
{
  int    a;  // 멤버
  float  f;
}MYST;

int main()
{

  MYST s = { };      //구조체 초기화  

  MYST* pST = &s;
  
  pST->a = 100;
  //(*pST).a = 100;
  
  pST->f = 3.14f;
  //(*pST).f = 3.14f;

  // 구조체가 기본 자료형과 다르게 멤버를 여러개로 가질 수 있기 때문에
  // 포인터로 구조체 타입을 지칭 했을 경우에 멤버를 또 골라줘야한다.
  // 지금은 포인터 타입과 실제 타입을 맞춰줘서 문제가 없지만 항상 명심하자


  return 0;
}
int main()
{
    // if / else 구문
    int data = 0;
    if (100 && 200)
    {
        data = 100;
        // if가 참인 경우 수행
        // 거짓인 경우 다음 구문 수행
    }
    else if (300 && 400)
    {
        data = 200;
        // if가 거짓인 경우 수행
    }
    else
    {
        // if, else if 가 거짓인 경우 수행
    }

    int Test = 10;
    switch (Test)
   {
       case 10:
       break;

       case 20:
       break;
 
       default:
       break;
   } 

    int Test = 10;
    switch (Test)
   {
       case 10:
       break;

       case 20:
       break;
 
       default:
       break;
   } 
   
 /*
    break 주의 할 것
    조건에 break가 오타거나 없을 경우에
    이상동작이 수행하여 파악하기 힘들다.
    그래서 case를 묶어서 사용하는 경우에 주의하자

    case 10:
    case 20:
    case 30:
   
    따지고 보면 if / else if 문법이랑 비슷하다.
    조건과 상황에 맞게 사용하고 싶은 구문을 사용하면 된다.

    if (Test == 10)
    {
     
    }
    else if (Test ==20)
    {
      
    }
    else
    {
      
    }
*/


/*
  삼항 연산자
  : ?

  Test == 20 ? Test = 100 : Test = 200;
  // Test값이 20이 참이면 왼쪽(100)을 수행한다.
  // Test값이 20이 아니면 오른쪽(200)을 수행한다.

    if (Test == 20)
    {
      Test = 100;
    }
      else
    {
      Test = 200;
    }

    //  삼항 연산자와 같은 내용이다. 
    //  삼항 연산자는 가독성이 안 좋을 수 있어서
    //  이런 구문도 존재한다는 개념만 파악해주자
*/
    return 0;
}

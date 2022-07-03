// func.h
#pragma once

// 정적변수
static int g_iStatic = 0;
/*
   main 함수에도 같은 이름이 존재하지만
   정적변수라서 func.h 파일에만 선언되어 링크 후에 문제가 없다.
   이 개념을 잘 파악하고 전역변수와 정적변수의 차이를 주의하고 사용하도록 하자
*/
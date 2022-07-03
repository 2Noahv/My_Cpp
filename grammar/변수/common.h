// common.h
#pragma once

// 정적 변수
static int g_iStatic = 0;

// 외부 변수
extern int g_iExtern;
// 헤더에 배치할 때 초기 값을 넣어주면 안된다.
// 이런 변수가 있을거다 ~ 라고 알려주는 역할
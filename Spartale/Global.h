#pragma once
/*********************************************/
/* 이 파일은 코드에 사용될 전반적인 열거형을 정의*/
/**********************************************/

// 맵 상의 위치를 나타내는 간단한 구조체
struct FMapLocation
{
    int X = 0;
    int Y = 0;
};

// 게임플레이 이펙트의 적용 방식을 정의하는 열거형
enum class EEffectApplication
{
    Instant,    // 즉시 적용
    Duration,   // 지속 시간 동안 적용
    Infinite    // 영구 적용
};

// 데미지의 속성을 정의하는 열거형
enum class EDamageType
{
    None,
    Physical, // 물리
    Magical,  // 마법
    True      // 고정
};
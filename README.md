# For visual convenience, the functions are divided by each feature
시각적으로 보기 편하게하기위해서 각각의 특징별로 기능을 나눠놨음


# Readability(가독성)
<details>
<summary>Function OverLoading(함수 오버로딩)</summary>
  
### Unless fuction name is same If declaration form of parameters is different it is declaration of other function. Cause factor which thorough function called we can divide fuction
함수 호출 시 전달되는 인자를통해서 호출하고자 하는 함수의 구분이 가능하기 때문에 함수명이 같더라도 매개변수의 선언형태(인자의 개수 차이, 자료형 차이등)가 다르면 다른 함수로 정의

### Summary(요약)
함수 하나에 다양한 타입의 인자를 받을수 있게해서 가독성을 올림

### Purpose(용도)
다형성과 사용자 편의를 제공하기 위한 용도
</details>

# Convenience(편의성)
<details>
<summary>Default value for parameters(매개변수의 기본값)</summary>
  
### To specify the value of a parameter in advance
매개변수의 값을 미리 지정하는 것

#### Purpose(용도)
코드 작성의 편의성을 높이기위한 용도
</details>


# Easily confusing thing
쉽게 헷갈릴 수 있는것들

## Capsulelize vs Modulize
캡슐화 vs 모듈화

## Pointer vs Reference
포인터 vs 참조자

<details>
<summary>Pointer(포인터)</summary>
최초 생성된 후에 다른 주소를 가르킬수 있다(새 메모리주소, 새액터, 새컴포넌트 등등)
null값을 나타낼 수 있다.

예시
*AcotrPtr contents에 접근할때
ActorPtr address에 접근할때
ActorPtr = &Actor address변경 할때
*ActorPtr = Actor value를 변경할때

Ex Code)
```cpp
float Damage = 0;
float* DamagePtr = &Damage;
*DamagePtr = 5.5;
UE_LOG(LogTemp, Display, TEXT("Damage: %f, DamagePtr: %f"),Damage, *DamagePtr);
 ```
</details>

<details>
<summary>Reference(참조)</summary>
  
최초 생성해서 한번'만' 가르킬수 있다.
null값을 나타낼 수 없다(안정성이 있다)
예시
ActorRef contents에 접근할때
&ActorRef address에 접근할때
ActorRef = Actor value를 변경할

Ex Code)
```
float Damage = 0;
float& DamageRef = Damage;
DamageRef = 12.5;
UE_LOG(LogTemp, Display, TEXT("RefDamage: %f, Damage: %f"), DamageRef, Damage);
 ```
</details>

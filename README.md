# For visual convenience, the functions are divided by each feature
시각적으로 보기 편하게하기위해서 각각의 특징별로 기능을 나눠놨음

# Recyclebility(재사용성)

<details>
<summary>Enum</summary>

### Use to define constants as a group
상수들을 하나의 그룹으로 묶어서 정의하는 데 사용

<details>
<summary>Code</summary>
```cpp
enum class ECharacterState
{
    Idle,
    Walking
};

public:
    Character() : CurrentState(ECharacterState::Idle) {}

    void UpdateState(ECharacterState NewState)
    {
        CurrentState = NewState;
        switch (CurrentState)
        {
            case ECharacterState::Idle:
                // Handle idle state
                break;
            case ECharacterState::Walking:
                // Handle walking state
                break;
        }
    }

    ECharacterState GetState() const
    {
        return CurrentState;
    }
};

int main()
{
    Character myCharacter;
    myCharacter.UpdateState(ECharacterState::Running);  // 상태를 Running으로 변경
    ECharacterState currentState = myCharacter.GetState(); // 현재 상태를 가져옴

    return 0;
}
```

-------------------------------------------------

</details>

</details>


<details>
<summary>Class</summary>

### User-defined data types defined by combining data with the functions (methods) that process it
데이터와 해당 데이터를 처리하는 함수(메서드)를 함께 묶어서 정의한 사용자 정의 데이터 형식

```cpp
class Name
{
private:
    float speed;
    std::string name;

public:
    void InitMembers(const char* newName, float newSpeed);
};

void Name::InitMembers(const char* newName, float newSpeed)
{
    name = newName;
    speed = newSpeed;
}
```

-------------------------------------------------
</details>
<details>
<summary>Structure(구조체)</summary>

### Manage variables in different data formats in a single unit
다른 데이터 형식의 변수들을 하나의 단위로 묶어서 관리

```cpp
namespace Player_Var
{
    enum
    {
        ID_LEN = 20,
        CUR_ATK = 200,
        CUR_LV = 10,
        CUR_DEF = 10,
    };
}

struct Player
{
    char gamerID[Player_Var::ID_LEN];
    void ShowCarState();
};

 void ShowCarState()
{
    cout << "소유자 ID: " << gamerID << endl;
}

```

-------------------------------------------------

</details>

<details>
<summary>Function OverLoading(함수 오버로딩)</summary>
  
### Unless fuction name is same If declaration form of parameters is different it is declaration of other function. Cause factor which thorough function called we can divide fuction
함수 호출 시 전달되는 인자를통해서 호출하고자 하는 함수의 구분이 가능하기 때문에 함수명이 같더라도 매개변수의 선언형태(인자의 개수 차이, 자료형 차이등)가 다르면 다른 함수로 정의

-------------------------------------------------

</details>

<details>
<summary>Namespace</summary>

### Organize name
이름을 그룹화함

```cpp
namespace Player
{
    class PlayerCharacter
    {
    public:
        void MoveForward(float Value);
        void MoveRight(float Value);
    };
}

namespace AI
{
    class EnemyCharacter
    {
    public:
        void Patrol();
        void Chase();
    };
}

void SetupGame()
{
    Player::PlayerCharacter player;
    AI::EnemyCharacter enemy;

    player.MoveForward(1.0f);
    player.MoveRight(1.0f);
    
    enemy.Patrol();
}
```

-------------------------------------------------

</details>

# Improved performance(성능 향상)

<details>
<summary>InlineFunction(인라인 함수)</summary>

### Minimize number of calling to increase running speed
호출을 최소화하여 프로그램의 실행 속도를 높이는 함수

-------------------------------------------------

</details> 

<details>
<summary>New&Delete</summary>

### Operator used to dynamically allocate and release memory
동적으로 메모리를 할당하고 해제하는 데 사용되는 연산자

-------------------------------------------------

</details> 

<details>
<summary>Reference(참조자)</summary>

### To provide nickname for a variable so that it can be referenced
변수의 다른 이름을 제공하여 해당 변수를 참조할 수 있게하는 것

-------------------------------------------------

</details> 

# Convenience(편의성)
<details>
<summary>Default value for parameters(매개변수의 기본값)</summary>
  
### To specify the value of a parameter in advance
매개변수의 값을 미리 지정하는 것

-------------------------------------------------

</details>




# Easily confusing thing
  
쉽게 헷갈릴 수 있는것들

<details>
<summary>Capsulelize vs Modulize</summary>

캡슐화 vs 모듈화

</details>

<details>
<summary>Pointer vs Reference</summary>
  
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

-------------------------------------------------

</details>

<details>
<summary>Reference(참조)</summary>  
  
최초 생성해서 한번'만' 가르킬수 있다.  
null값을 나타낼 수 없다(안정성이 있다)  
예시  
ActorRef contents에 접근할때  
&ActorRef address에 접근할때  
ActorRef = Actor value를 변경할때  

Ex Code)
```
float Damage = 0;
float& DamageRef = Damage;
DamageRef = 12.5;
UE_LOG(LogTemp, Display, TEXT("RefDamage: %f, Damage: %f"), DamageRef, Damage);
 ```

-------------------------------------------------

</details>
</details>

# ModuleAndPlugin 과제

## 과제 개요

이번 과제에서는 언리얼 프로젝트의 모듈과 플러그인 구조를 이해하기 위해 Third Person C++ 프로젝트를 생성하고, Test 모듈과 Temporary 플러그인을 직접 추가했습니다.

## 구현 내용

### 1. Test 모듈 생성

`Source/Test` 경로에 새로운 Test 모듈을 생성했습니다.

생성한 주요 파일은 다음과 같습니다.

- `Test.Build.cs`
- `Test.h`
- `Test.cpp`
- `TestActor.h`
- `TestActor.cpp`

`Test.cpp`에는 `IMPLEMENT_MODULE(FDefaultModuleImpl, Test);`를 작성하여 Test 모듈을 언리얼 모듈 시스템에 등록했습니다.

### 2. TestActor 생성

Test 모듈 안에 `ATestActor` 클래스를 생성했습니다.

`BeginPlay()`에서 로그와 화면 메시지를 출력하도록 구현하여 Test 모듈이 정상적으로 로드되고 작동하는지 확인했습니다.

### 3. 모듈 연결

`ModuleAndPlugin.Target.cs`와 `ModuleAndPluginEditor.Target.cs`의 `ExtraModuleNames`에 `Test` 모듈을 추가했습니다.

또한 `ModuleAndPlugin.uproject`의 `Modules` 목록에 Test 모듈을 추가하고 `LoadingPhase`를 `PreDefault`로 설정했습니다.

기본 게임 모듈의 캐릭터 클래스에서 `TestActor.h`를 include하고 `SpawnActor`를 사용하여 TestActor를 생성하도록 구현했습니다.

### 4. Temporary 플러그인 생성

`Plugins/Temporary` 경로에 Temporary 플러그인을 생성했습니다.

생성한 주요 파일은 다음과 같습니다.

- `Temporary.uplugin`
- `Temporary.Build.cs`
- `Temporary.h`
- `Temporary.cpp`
- `TemporaryPluginActor.h`
- `TemporaryPluginActor.cpp`

`Temporary.uplugin` 파일에는 플러그인 메타데이터와 Temporary 모듈 정보를 작성했습니다.

### 5. 플러그인 모듈 구현

`Temporary.cpp`에서 `StartupModule()`과 `ShutdownModule()`을 구현했습니다.

플러그인이 로드될 때 `Temporary Plugin Started` 로그가 출력되고, 종료될 때 `Temporary Plugin Shutdown` 로그가 출력되도록 했습니다.

### 6. 플러그인 Actor 생성

Temporary 플러그인 안에 `ATemporaryPluginActor` 클래스를 생성했습니다.

`BeginPlay()`에서 로그와 화면 메시지를 출력하도록 구현하여 플러그인 내부 C++ 클래스가 정상적으로 작동하는지 확인했습니다.

## 확인 방법

1. 프로젝트를 빌드합니다.
2. 언리얼 에디터를 실행합니다.
3. Output Log에서 `Temporary Plugin Started` 로그를 확인합니다.
4. 게임을 실행하면 `TestActor BeginPlay - Test Module Works!` 메시지를 확인할 수 있습니다.
5. `TemporaryPluginActor`를 맵에 배치한 뒤 실행하면 `TemporaryPluginActor BeginPlay - Plugin Works!` 메시지를 확인할 수 있습니다.

## 배운 점

이번 과제를 통해 언리얼 프로젝트가 단순히 하나의 코드 묶음으로 이루어진 것이 아니라, 프로젝트, 모듈, 플러그인, 소스코드의 계층 구조로 관리된다는 점을 이해했습니다.

또한 `Build.cs`, `Target.cs`, `.uproject`, `.uplugin` 파일이 각각 모듈과 플러그인을 빌드하고 로드하는 데 중요한 역할을 한다는 것을 확인했습니다.
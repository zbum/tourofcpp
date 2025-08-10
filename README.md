# Tour of C++ 연습 프로젝트

이 프로젝트는 Bjarne Stroustrup의 "A Tour of C++" 책을 따라가며 C++ 프로그래밍을 연습하는 프로젝트입니다.

## 프로젝트 구조

```
tourofcpp/
├── README.md              # 이 파일
├── Makefile               # 메인 Makefile (모든 chapter 관리)
├── chapter1/              # Chapter 1: 기본 문법
│   ├── chapter1_8.cpp     # Chapter 1.8 연습 코드
│   └── Makefile           # Chapter 1 전용 Makefile
└── chapter3/              # Chapter 3: Classes
    ├── Vector.h            # Vector 클래스 헤더
    ├── Vector.cpp          # Vector 클래스 구현
    ├── user.cpp            # Vector 클래스 사용 예제
    └── Makefile            # Chapter 3 전용 Makefile
```

## 사용법

### 전체 관리 (루트 디렉토리에서)

```bash
# 모든 chapter 컴파일
make

# 모든 chapter 정리
make clean

# 도움말 보기
make help
```

### Chapter별 관리

#### Chapter 1 (기본 문법)
```bash
# 컴파일
make build_ch1

# 실행
make run_ch1

# 정리
make clean_ch1
```

#### Chapter 3.2 (Vector Class)
```bash
# 컴파일
make build_ch3

# 실행
make run_ch3

# 정리
make clean_ch3
```

### 개별 Chapter 디렉토리에서 직접 실행

```bash
# Chapter 1 디렉토리로 이동
cd chapter1
make run

# Chapter 3 디렉토리로 이동
cd chapter3
make run
```

## Chapter별 내용

### Chapter 1: 기본 문법
- C++ 기본 문법과 구조
- `chapter1_8.cpp`: Chapter 1.8 연습 코드

### Chapter 3.2: Classes
- Vector 클래스 구현
- 생성자, 소멸자, 복사/이동 시맨틱
- RAII 패턴과 예외 처리
- `Vector.h`, `Vector.cpp`, `user.cpp`

## 컴파일러 요구사항

- C++11 이상 지원하는 컴파일러 (g++, clang++)
- Make 유틸리티

## 추가 Chapter 추가 방법

새로운 chapter를 추가하려면:

1. `chapterN/` 디렉토리 생성
2. 소스 파일들 추가
3. `chapterN/Makefile` 생성
4. 루트 `Makefile`에 새 chapter 추가

## 라이센스

이 프로젝트는 교육 목적으로 만들어졌습니다.
# tourofcpp

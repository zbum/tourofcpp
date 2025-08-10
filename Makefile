# Tour of C++ - 메인 Makefile
# 모든 chapter를 관리하는 통합 Makefile

# C++ 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# Chapter 디렉토리들
CHAPTER1_DIR = chapter1
CHAPTER3_DIR = chapter3

# 기본 타겟 - 모든 chapter 컴파일
all:
	@echo "=== Tour of C++ - 모든 Chapter 컴파일 ==="
	@$(MAKE) -C $(CHAPTER1_DIR)
	@$(MAKE) -C $(CHAPTER3_DIR)
	@echo "=== 모든 Chapter 컴파일 완료 ==="

# Chapter 1 실행
run_ch1:
	@echo "=== Chapter 1 실행 ==="
	@$(MAKE) -C $(CHAPTER1_DIR) run

# Chapter 3 실행
run_ch3:
	@echo "=== Chapter 3.2 Vector Exercise 실행 ==="
	@$(MAKE) -C $(CHAPTER3_DIR) run

# 모든 chapter 정리
clean:
	@echo "=== 모든 Chapter 정리 ==="
	@$(MAKE) -C $(CHAPTER1_DIR) clean
	@$(MAKE) -C $(CHAPTER3_DIR) clean
	@echo "=== 정리 완료 ==="

# Chapter 1 정리
clean_ch1:
	@$(MAKE) -C $(CHAPTER1_DIR) clean

# Chapter 3 정리
clean_ch3:
	@$(MAKE) -C $(CHAPTER3_DIR) clean

# Chapter 1 컴파일
build_ch1:
	@$(MAKE) -C $(CHAPTER1_DIR)

# Chapter 3 컴파일
build_ch3:
	@$(MAKE) -C $(CHAPTER3_DIR)

# 도움말
help:
	@echo "=== Tour of C++ - 메인 Makefile 도움말 ==="
	@echo ""
	@echo "전체 관리:"
	@echo "  make              - 모든 chapter 컴파일"
	@echo "  make clean        - 모든 chapter 정리"
	@echo ""
	@echo "Chapter 1 (기본 문법):"
	@echo "  make build_ch1    - Chapter 1 컴파일"
	@echo "  make run_ch1      - Chapter 1 실행"
	@echo "  make clean_ch1    - Chapter 1 정리"
	@echo ""
	@echo "Chapter 3.2 (Vector Class):"
	@echo "  make build_ch3    - Chapter 3.2 컴파일"
	@echo "  make run_ch3      - Chapter 3.2 실행"
	@echo "  make clean_ch3    - Chapter 3.2 정리"
	@echo ""
	@echo "개별 Chapter 디렉토리에서도 make 명령어 사용 가능:"
	@echo "  cd chapter1 && make run"
	@echo "  cd chapter3 && make run"

.PHONY: all run_ch1 run_ch3 clean clean_ch1 clean_ch3 build_ch1 build_ch3 help

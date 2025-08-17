# C++ 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

# 타겟 실행 파일명
TARGET = function

# 소스 파일
SOURCES = function.cpp

# 기본 타겟
all: $(TARGET)

# 실행 파일 생성 규칙
$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

# 실행
run: $(TARGET)
	./$(TARGET)

# 정리
clean:
	rm -f $(TARGET)

# 도움말
help:
	@echo "Chapter 3.3 - Namespace - 사용 가능한 명령어:"
	@echo "  make        - 프로그램 컴파일"
	@echo "  make run    - 프로그램 컴파일 후 실행"
	@echo "  make clean  - 생성된 파일 정리"
	@echo "  make help   - 이 도움말 표시"

.PHONY: all run clean help

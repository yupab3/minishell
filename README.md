# [과제명]
minishell

# [개발자]
![미니쉘 최종본](https://github.com/yupab3/minishell/assets/100816515/0095e94a-f7ef-4eb4-a9e1-774f82f03968)
  
**@jaejilee** *<jaejilee@student.42seoul.kr>*
  
**@dongyeuk** *<dongyeuk@student.42seoul.kr>*

# [분담]
- 공동 : 함수 공부, 자료구조 설계, 플로우차트 설계
- 동엽 : 파싱 부분 구현, 포토샵
- 재진 : 실행 부분 구현, readme 수정

# [목표]
### 프로젝트 목표
- shell 구현
- 기한 : 2023.12.30 (시작) ~ 2024.01.20 (목표)
- 점수 : 125점 (보너스 전부 포함)

### 학습 목표
- 깃 & 깃허브 협업 공부
- signal 기본 개념 공부
- 멀티 프로세싱 프로그래밍 공부
- readline 기반 함수 공부

# [브랜치]
- main       : 최종 제출 버전
- release    : 배포 버전
- parsing    : 파싱 버전 (동엽)
- executing  : 실행부 버전 (재진)
- hotfix     : retry 이후 개선 버전

# [규칙]
### commit message
- 변경 : "mod filename (details)"
- 추가 : "add filename (details)"
- 삭제 : "del filename (details)"
- 긴급 : "fix filename (details)"

### syntax rule
- 변수 명	: 명사로 시작
- 함수 명	: 동사로 시작
- 매크로	: 용도별 접두어 통일
- 파일 명	: 소속된 프로젝트 명칭 앞에 붙이기

### terminal symbol
```
"alphabet" ::= 'a', 'b', ..., 'z', 'A', 'B', ..., 'Z'
"digit" ::= '0' | '1' | '2' | '3' | '4' | '5' | '6' | '7' | '8' | '9'
"constant" ::= ['-'] "digit" {"digit"}
"under_bar" ::= '_'
"variable" ::= "alphabet" | "under_bar" {"digit" | "alphabet" | "under_bar"}
"logical_op" ::= "||" | "&&"
"pipe" ::= '|'
"l_paren" ::= '('
"r_paren" ::= ')'
"re_direct" ::= '<' | '>' | ">>"
"here_doc" ::= "<<"
"hyphen" ::= '-'
"quotes" ::= '\'' | '\"'
"dollar" ::= '$'
"exclamation_mark" ::= '!'
"question_mark" ::= '?'
"wild_card" ::= '*'
"special_mark" ::= 33~47, 58~64, 91~96, 123~126
"division" ::= ' ' | '\t'
```

### non-terminal symbol
```
<DATA> ::=	<CMD>"pipe"<DATA>
		| <CMD><REDIRECT><DATA>
		| <CMD><HERE_DOC><DATA>
		| <CMD>
  
<REDIRECT> ::= "re_direct"<FILENAME>
<HERE_DOC> ::= "here_doc"<LIMITER>
  
<CMD> ::= <PARAM> | <PARAM><CMD>
<PARAM> ::= {"alphabet"}
<FILENAME> ::= {"alphabet" | "digit" | "special_mark"}
<LIMITER> ::= {"alphabet" | "digit" | "special_mark"}
```

# [진행 상황]
**2023.12.30**  과제 등록, git 공부, README 작성  
**2024.01.02**  git 복습, 허용 함수 정리  
**2024.01.03**	libft 최적화, 규칙 정립, 자료구조 선택(이진트리)  
**2024.01.05**	파싱 자료구조, 구조체 만들기, CFG 문법(BNF 표현법) 공부  
**2024.01.06**	main 함수 작성, 트리 구조 만들기, Makefile 만들기  
**2024.01.08**	parsing, excuting 브랜치에 각자  구현 시작  
# ImageProcessingBase 분석

## 목적과 현재 범위

영상 처리 관련 구현과 실험 파일을 보관하는 저장소입니다.

Windows Visual C++ 솔루션과 MFC 영상 처리 앱 소스입니다. 솔루션·프로젝트 설정, 앱·대화상자 구현과 리소스가 있으며 일반 Python 프로젝트와 같은 실행 환경으로 다룰 수 없습니다.

## 주요 구성과 역할

| 경로 | 역할 또는 확인한 내용 |
| --- | --- |
| [res/](res/) | 관련 파일 2개 |
| [ImageProcessBase.cpp](ImageProcessBase.cpp) | C++ 1개 |
| [ImageProcessBase.h](ImageProcessBase.h) | C/C++ 헤더 1개 |
| [ImageProcessBaseDlg.cpp](ImageProcessBaseDlg.cpp) | C++ 1개 |
| [ImageProcessBaseDlg.h](ImageProcessBaseDlg.h) | C/C++ 헤더 1개 |
| [Resource.h](Resource.h) | C/C++ 헤더 1개 |
| [stdafx.cpp](stdafx.cpp) | C++ 1개 |
| [stdafx.h](stdafx.h) | C/C++ 헤더 1개 |
| [targetver.h](targetver.h) | C/C++ 헤더 1개 |

파일 구성에서 확인되는 형식은 C/C++ 헤더 5개, C++ 3개입니다. 헤더와 예제·보조 코드를 포함한 파일 수이며 기능 개수나 구현 완성도를 뜻하지 않습니다.

## 설치와 사용을 확인하는 방법

Windows 솔루션·프로젝트 파일의 대상 SDK와 라이브러리 설정을 확인한 뒤 해당 개발 환경에서 빌드해야 합니다.

## 근거와 분석 범위

분석일: 2026-10-13 (Asia/Seoul). 문서 변경 전 소스 기준 커밋: `d72f2ea1bf112634527b2ad47b6f886e9d185196`.

근거는 해당 기본 브랜치의 파일 목록, [README.md](README.md) 및 위에 연결한 소스·설정입니다. Python 파일과 표에 명시한 Notebook은 코드를 실행하지 않고 정적으로 살펴봤습니다. 그 외 파일은 구성과 원래 문서를 기준으로 설명했습니다. 의존성 설치, 학습, 서버·하드웨어 실행과 외부 서비스 연결은 검증하지 않았으므로 운영 상태나 성능의 증거로 사용할 수는 없습니다.

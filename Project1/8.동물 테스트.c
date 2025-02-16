#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/ https://www.banggooso.com/gl/1034


int main()
{
	// 문항에 대한 저장(배열)
	// 자료형 배열형[] = {값1, 값2, 값3....}

	// 배열의 값 하나는 배열명[값의 위치]로 접근이 가능합니다.
	// 값의 위치(인덱스)는 0번부터 배열의 데이터의 개수(길이) -1까지 제공됩니다.

	int selected[] = { 0,0,0,0,0,0,0,0,0,0,0,0 }; // 인덱스 0 ~ 11까지 제공 중



// [시작 화면]
	system("title 숲속 동물 테스트");
	printf("어느날 잠에서 깬 당신은\n내몸이 인간의 몸이 아님을 느낍니다.\n \n솦속의 동물이 된 나는 무엇을 하고 있을까요?\n");
	int select;
	printf("1. 숲속으로 떠나기");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[0] = 1;
	}
	else if (select == 2)
	{
		selected[0] = 2;
	}
	system("cls"); // 콘솔 화면 지우기

	
// [1번 문항]
	printf("\t일어나보니 오랜만에\n\t깨끗한 하늘이 보인다면\n");
	printf("\t1. \"화창한데 오늘뭐하지?\"\n\t뭐할지 고민한다.\n");
	printf("\t2. \"기분 좋은 일들이 생길 것 같은 날이야!\"\n\t일단 기분이 좋다.\n");
	scanf("%d", &select);
	if (select == 1)
	{
		selected[1] = 1;
	}
	else if (select == 2)
	{
		selected[1] = 2;
	}
	system("cls");
// [2번 문항]
	printf("\t숲속으로 외출하기전, \n");
	printf("\t1. 생각나는 대로 챙겨 나간다.\n");
	printf("\t2. ㅈ미리 준비해둔 옷과 가방을 챙겨 나간다.\n");
	if (select == 1)
	{
		selected[2] = 1;
	}
	else if (select == 2)
	{
		selected[2] = 2;
	}
	system("cls");

// [3번 문항]
	printf("\t처음 온 숲속을 산책할 때\n");
	printf("\t1. 입구에 있는 지도를 보고\n어디갈지 무엇을 볼 지 정한다.\n");
	printf("\t2. 지도를 한번 슥 보고 발길 닿는대로 간다.\n");
	if (select == 1)
	{
		selected[3] = 1;
	}
	else if (select == 2)
	{
		selected[3] = 2;
	}
	system("cls");

// [4번 문항]
	printf("\t귀여운 다람쥐들을 만단다면\n");
	printf("\t1. \"처음 보는 동물들도 모두 친구친구!\"\n먼저 가서 반갑게 말건다.\n");
	printf("\t2. \귀여웟 심멎이지만\ 멀리서 지켜본다.\n");
	if (select == 1)
	{
		selected[4] = 1;
	}
	else if (select == 2)
	{
		selected[4] = 2;
	}
	system("cls");

// [5번 문항]
	printf("\다람쥐 친구가 피부병이 났다고 하소연을 했다.\n");
	printf("\t 피부에 좋은 친환경 제품을 써보는 건 어때?.\n");
	printf("\t 아프겠다... 어떡해 같이 아픈에 공감해준다.\n");
	if (select == 1)
	{
	selected[5] = 1;
	}
	else if (select == 2)
	{
	selected[5] = 2;
	}
	system("cls");

// [6번 문항]
	printf("\t사람들이 나무를 베어가 소중한 숲속이 황량해진것을 본다면\n");
	printf("\t 나의 정들었던 공간이 망가진 것에 슬퍼진다.\n");
	printf("\t 조만간 새 보금자리를 찾기로 마음 먹는다.\n");
	if (select == 1)
	{
		selected[6] = 1;
	}
	else if (select == 2)
	{
		selected[6] = 2;
	}
	system("cls");

// [7번 문항]
	printf("\t한 여름에 눈이 온다는 기후 변화 소식을 듣는다면\n");
	printf("\t \"우리가 개선할 수 있는게 뭘까?\"\n현실적으로 고민해본다.\n);
	printf("\t \"앞으로 숲도 지구도 다 망가지는거 아냐?\"\미래를 걱정한다.\n");
	if (select == 1)
	{
		selected[7] = 1;
	}
	else if (select == 2)
	{
		selected[7] = 2;
	}
	system("cls");

// [8번 문항]
	printf("\t한 여름에 눈이 온다는 기후 변화 소식을 듣는다면\n");
	printf("\t \"우리가 개선할 수 있는게 뭘까?\"\n현실적으로 고민해본다.\n);
		printf("\t \"앞으로 숲도 지구도 다 망가지는거 아냐?\"\미래를 걱정한다.\n");
	if (select == 1)
	{
		selected[7] = 1;
	}
	else if (select == 2)
	{
		selected[7] = 2;
	}
	system("cls");

// [9번 문항]
	printf("\t숲속 환경 문제로 급하게 동물 회의가 열렸다.\n");
	printf("\t1. 그동안 내가 보고 느낀 것들을 적극적으로 설명한다.\n");
	printf("\t2. ");
	if (select == 1)
	{
		selected[9] = 1;
	}
	else if (select == 2)
	{
		selected[9] = 2;
	}
	system("cls");

// 반복문
// 12번 반복을 진행하는 코드(i가 0에서 시작해서 작업이 끝날 때마다 1씩 i가 증가, i가 12보다 작을 동안 반복)
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		total += selected[i];
	}

	printf("숲속에서 당신은 ");
	// 12 ~ 13점
	if (total >= 12 && total <= 13)
	{
		printf("새롭고 짜릿한게 좋은 꾸러기 호랑이\n");
	}
	else if (total == 24)
	{
		printf("한껏 센치한 멜랑꼴리 늑대\n");
	}


	return 0;
}
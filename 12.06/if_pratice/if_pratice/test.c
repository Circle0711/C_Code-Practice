#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age = 10;
	
	if (age < 18)
		printf("–¢¬”NŽÒ‚Å‚·B\n");
	//else if(18<= age < 30) ‚±‚Ì‘‚«•û‚Íˆá‚¢‚Ü‚·B‘O‚Ì•¶‹åh18<=ageh‚ÌŒ‹‰Ê‚Íƒ[ƒ‚Å‚·A‚R‚O‚æ‚èƒ[ƒ‚ª­‚È‚¢‚Ì‚Å‚·‚ªA‚±‚Ì•¶‹å‚Í^‚Ì‚Å‚·B
	else if (age >= 18 && age < 30)
		printf("¬”NŽÒ‚Å‚·B\n");
	else
	{
		printf("˜V”NŽÒ‚Å‚·\n");
		printf("–Ú•W‚Ì‚¨‹q—l‚Å‚·B\n");
	}
	return 0;
}
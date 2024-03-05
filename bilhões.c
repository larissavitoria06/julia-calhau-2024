#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	long long int x, y;
	printf("Digite dois números inteiros:");
	scanf("%lld %lld", &x, &y);
	printf("O número %lld multiplicado por 4 bilhões é %lld", x, x * 4000000000LL);
	printf("O número %lld multiplicado por 4 bilhões é %lld", y, y * 4000000000LL);
	return 0;
}

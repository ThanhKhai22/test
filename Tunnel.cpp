#include <winbgim.h>

main()
{
	int n=10,d=10,i;
	
	initwindow(1000,600);
	setwritemode(XOR_PUT);
	//setbkcolor(5);
	setcolor(15); 
	while (!kbhit()){
		for (i=1;i<=n;i++){
			rectangle(500-i*d,300-i*d,500+i*d,300+i*d); delay(50);
		} 
		delay(500);
		for (i=n;i>0;i--){
			rectangle(500-i*d,300-i*d,500+i*d,300+i*d); delay(50);
		} 
		delay(500);
	}
}

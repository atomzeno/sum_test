#include "sum.h"

int sum(int n) {
	int tot = 0, i;
	for(i=1;i<=n;i++){
		tot += i;
	}
	return tot;
}


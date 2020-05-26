#include <cstdio>
#include <queue>
#include <functional>
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n), n) {
		priority_queue<int, vector<int>, greater<int> > q;
		while (n--) {
			int x;
			scanf("%d", &x);
			q.push(x);
		}
		int z = 0, sum = 0;
		while (q.size() > 1) {
			z = q.top();
			q.pop();
			z += q.top();
			q.pop();
			sum += z;
			q.push(z);
		}
		printf("%d\n",sum);
	}
}

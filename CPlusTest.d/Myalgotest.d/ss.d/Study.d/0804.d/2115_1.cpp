#include <stdio.h>
 
int N, M, C;
int map[10][10];
int val[10][10];
int visit[10][10];
int mask[5];
int arr[5];
int ans, summax;
 
void sum_max(int x, int y, int sum, int n) {
    int max=0;
    int max_pos;
    int tot =0;
    if (n == 0) {
        for (int i = 0; i < M; i++) {
            arr[i] = map[y][x+i];
            mask[i] = 0;
        }
        sum = 0;
        summax = 0;
    }
    if (n == M) {
        for (int i = 0; i < M; i++) {
            if (mask[i] == 1) {
                tot = tot + arr[i] * arr[i];
            }
        }
        summax = summax > tot ? summax : tot;
        return;
    }
 
    if (C >= sum + arr[n]) {
        mask[n] = 1;
        sum_max(x, y, sum + arr[n], n + 1);
        mask[n] = 0;
        sum_max(x, y, sum, n + 1);
    }
    else {
        sum_max(x, y, sum, n + 1);
    }
 
    return;
}
 
void findmax(int x, int y, int n, int sum) {
    if (n == 2) {
        ans = ans > sum ? ans : sum;
        return;
    }
    if (val[y][x] == 0) return;
    for (int i = y; i < N; i++) {
        for (int j = x; j <= N - M; j++) {
            if (visit[i][j] == 1) continue;
            for (int k = 0; k < M; k++) {
                visit[i][j + k] = 1;
            }
            findmax(j, i, n+1, sum + val[i][j]);
            for (int k = 0; k < M; k++) {
                visit[i][j + k] = 0;
            }
 
        }
        x = 0;
    }
 
    return;
}
 
void sol() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= N - M; j++) {
            sum_max(j, i, 0, 0);
            val[i][j] = summax;
        }
    }
 
    findmax(0, 0, 0, 0);
 
    return;
}
 
int main() {
    int T;
     
    scanf("%d", &T);
    int tc = 0;
     
    while (tc < T) {
        ans = 0;
 
        scanf("%d %d %d", &N, &M, &C);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &map[i][j]);
                val[i][j] = 0;
                visit[i][j] = 0;
            }
        }
 
        sol();
 
        printf("#%d %d\n", ++tc, ans);
    }
 
    return 0;
}

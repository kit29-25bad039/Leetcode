char* digitSum(char* s, int k) {
    int n = strlen(s);
    char* cur = malloc(n + 1);
    strcpy(cur, s);

    while (n > k) {
        char* nxt = malloc(n + 1);
        int m = 0;
        for (int i = 0; i < n; i += k) {
            int sum = 0;
            for (int j = i; j < n && j < i + k; j++)
                sum += cur[j] - '0';
            m += sprintf(nxt + m, "%d", sum);
        }
        nxt[m] = '\0';
        free(cur);
        cur = nxt;
        n = m;
    }

    return cur;
}
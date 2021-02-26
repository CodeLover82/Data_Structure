#include <cmath>

[ 수학 도구 ]

< 올림 >
ceil(1.4f); // 2

< 내림 >
floor(1.6f); // 1

< 반올림 >
floor(d + 0.5);

< 나머지 연산 >
(a + b) % MOD = (a % MOD + b % MOD) % MOD
(a - b) % MOD = (a % MOD - b % MOD + MOD) % MOD
(a * b) % MOD = ((a % MOD) * (b % MOD)) % MOD

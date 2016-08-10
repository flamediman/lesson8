#include <stdio.h>


int main() {
  int n, k, finished = 0, half_finished = 0, minutes = 0;

  scanf("%d %d", &n, &k);
  while(finished < n) {
    int not_touched = n - finished - half_finished;

    if(not_touched >= k) {
      half_finished += k;
      minutes++;
    } else {
      half_finished += not_touched;
      int free_space = k - not_touched;
      half_finished -= free_space;
      finished += free_space;
      minutes++;
    }
  }
  printf("%d\n", minutes);

  return 0;
}

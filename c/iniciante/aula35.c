#include <stdio.h>

// procedure generate(k : integer, A : array of any):
//     if k = 1 then
//         output(A)
//     else
//         // Generate permutations with kth unaltered
//         // Initially k == length(A)
//         generate(k - 1, A)

//         // Generate permutations for kth swapped with each k-1 initial
//         for i := 0; i < k-1; i += 1 do
//             // Swap choice dependent on parity of k (even or odd)
//             if k is even then
//                 swap(A[i], A[k-1]) // zero-indexed, the kth is at k-1
//             else
//                 swap(A[0], A[k-1])
//             end if
//             generate(k - 1, A)

//         end for
//     end if

int count = 1;

void generate(int k, char str[]) {
  if(k == 1) {
    printf("%d: %s\n", count++, str);
  } else {
    generate(k - 1, str);

    for(int i = 0; i < k - 1; i++) {
      char aux;

      if(k % 2) {
        aux = str[i];
        str[i] = str[k - 1];
        str[k - 1] = aux;
      } else {
        aux = str[0];
        str[0] = str[k - 1];
        str[k - 1] = aux;
      }

      generate(k - 1, str);
    }
  }
}

int main() {
  char str[] = "abcd";
  generate(4, str);
  return 0;
}
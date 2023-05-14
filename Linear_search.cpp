#include < iostream >

void linearSearch(int a[], int n) {
  int temp = -1;

  for (int i = 0; i < 5; i++) {
    if (a[i] == n) {
      std::cout << "Element found at position: " << i + 1 << std::endl;
      temp = 0;
      break;
    }
  }

  if (temp == -1) {
    std::cout << "No Element Found" << std::endl;
  }

}

int main() {
  int Store_list[5];
  int num;
  std::cout << "Please enter 5 elements of the Array" << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cin >> Store_list[i];
  }
 std::cout << "Please enter an element to search" << std::endl;
  std::cin >> num;

  linearSearch(Store_list, num);

  return 0;
}

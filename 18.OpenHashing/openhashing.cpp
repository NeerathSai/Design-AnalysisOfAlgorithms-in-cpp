#include <iostream>
using namespace std;
struct extend{
int data;
extend *next;
};
struct main_arr {
int index;
int data;
main_arr *next;
extend *branch;
};
// f(x) = 2x + 3
int hash_fn(int n) {
return 2 * n + 3;
}
main_arr* init_arr(main_arr *curr_node, int index, int max_index) {
main_arr *temp = new main_arr;
temp -> index = index;
temp -> branch = NULL;
if(index == max_index) {
temp -> next = NULL;
}
else
temp -> next = init_arr(temp -> next, index + 1, max_index);
curr_node = temp;
return curr_node;
}
//test initialisation of the main array
void print_ind(main_arr *head) {
if(head == NULL)
return;
cout << head -> index << " ";
print_ind(head -> next);
}
int main() {
int n, size = 5, num[100];
cout << "Enter the number of integers to insert: ";
cin >> n;
cout << "Enter the integers: ";
for(int i = 0; i < n; i++) {
cin >> num[i];
}
main_arr *head = NULL;
head = init_arr(head, 0, size - 1);
print_ind(head);
cout << endl;
return 0;
}

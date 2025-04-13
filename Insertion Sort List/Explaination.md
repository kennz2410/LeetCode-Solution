# Explaination

## English
Main idea:Insertion sort
We create another pointer to new Linked List. So we take element from given list and find it correct position and insert(linked list). Iniatialize a pointer to new sorted list and call sub-insert function. this sorted list's pointer is the result. In the sub-insert function, if the value of sorted array  is bigger than newNode, insert it in the front of sorted array. Else, loop through the sorted array to find the correct position and update. Finally, return the sorted array as the result array.

## Viet Nam
Ý tưởng chính: Insertion sort
Tạo ra 1 con trỏ mới trỏ đến ll mới. Lấy phần tử từ ll đã cho, duyệt và chèn vào vị trí hợp lệ ở ll mới, trả về kết quả là con trỏ dẫn đến ll mới. Gọi hàm sub-insert(insert phụ) để tìm kiếm vị trí hợp lệ, nếu giá trị đầu tiên hàm sorted lớn hơn, chèn vào đầu. Nếu không thì chạy while để tìm kiếm vị trí hợp lệ(hợp lệ là vị trí nhỏ hơn curr->next và lớn hơn curr) sau đó cập nhật vị trí. Trả về kết quả là con trỏ dẫn đến ll đã sắp xếp.
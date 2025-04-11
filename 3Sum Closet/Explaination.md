#Explaination of 3Sum Closet
##English
Main idea: Using 2 pointers.
Initialize 2 different sum value, closetSum and currentSum, 2 pointer left and right. Loop through the given array. If currentSum closer to the target, update closetSum = currentSum. If currentSum is lower or greater, update 2 pointer. If currentSum = target, return sum directly.
Finally return closetSum.

##Tiếng Việt
Ý tưởng chính: Sử dụng 2 con trỏ.
Khởi tạo 2 giá trị sum khác nhau closetSum và currentSum để lưu giá trị gần nhất và giá trị hiện tại. Chạy vòng lặp để tính giá trị currentSum, nếu currentSum bằng target thì trả về currentSum và kết thúc hàm. Nếu currentSum gần target hơn closetSum, cập nhật lại closetSum = currentSum. Nếu currentSum nhỏ hơn hoặc lớn hơn target, cập nhật 2 con trỏ.
Nếu chạy hết vòng lặp mà không tìm thấy kết quả = target, trả về closetSum.

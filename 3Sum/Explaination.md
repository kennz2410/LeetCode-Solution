#Explaination of 3Sum
##English
Main idea: Using 2 pointer.
Initialize x, y, z as triplets. Lock x then problem turn to 2Sum. y, z is left and right pointer. Sort the given array at first. Loop until left and right is equal. Calculate the sum during each loop.
If sum == 0, push to result array and bypass the duplicate numbers. ++ left and right pointer. If sum < 0, left++. If sum > 0, right--.
Finally, return result array.

##Tiếng Việt
Ý tưởng chính: Sử dụng 2 con trỏ.
Khởi tạo bộ 3 giá trị x, y, z. Cố định x(làm cho x cố định mỗi vòng lặp), bài toán trở thành bài toán 2Sum. Đầu tiên, sắp xếp mảng đã cho. Coi giá trị y, z thay đổi theo 2 con trỏ left và right. Chạy vòng lặp cho đến khi left == right.
Nếu sum == 0, đẩy vào mảng kết quả, sau đó cập nhật left và right(left tăng right giảm) bên cạnh đó bỏ qua các phần tử trùng lặp. Nếu sum < 0 thì tăng left, ngược lại thì giảm right.
Trả về mảng kết quả result.
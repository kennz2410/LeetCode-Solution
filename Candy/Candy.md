# Explaination

## English
Main idea: Traverse from 2 side and check what ratings-index is higher.
Initialize an array to store given candies(default value is 1) and a sum variable. Traverse from 2 side, if current ratings is greater than another compared one, current candies is sum of compared one + 1. From the end to the begin traversal, we find max between current candies and compared one + 1(as 1 loop has been finished). Count all the candies and return as a result.

## Tiếng Việt
Ý tưởng chính: Kiểm tra từ 2 đầu để xem rating của ai cao hơn.
Khởi tạo 1 mảng chứa giá trị kẹo(giá trị ban đầu = 1) và biến sum để tính tổng(cũng là giá trị trả về của hàm). Kiểm tra từ 2 đầu, nếu rating cao hơn thì cập nhật rating hiện tại bằng tổng của rating được so sánh + 1. Ở lần kiểm tra thứ 2, ta thực hiện logic tương tự nhưng khi cập nhật giá trị, ta so sánh giá trị hiện tại với giá trị giả định sẽ cập nhật(vì đã kiểm tra 1 vòng trước rồi). Cộng tất cả phần từ từ mảng giá trị kẹo vào sum và trả về sum.

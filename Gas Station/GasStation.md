# Explaination

## English
Main idea: Calculate and compare total gas and cost.
Initialize 2 variable-currGas and totalGas-to check the remaining gas. If totalTank < 0, there's no solution. If currGas < 0, reset the index by add 1 and currGas = 0. Return the index.

## Tiếng Việt
Ý tưởng chính: Tính toán và so sánh tổng gas và cost
Khởi tạo 2 biến lưu 2 giá trị-currGas và totalGas-mục đích để kiểm tra xem liệu có tồn tại lời giải nào không. Nếu totalTank < 0 thì không thể tồn tại 1 đường nào từ bất kỳ 1 điểm nào. Ngược lại, nếu totalTank >= 0 thì chắc chắn sẽ tồn tại 1 đường đi. Lúc này ta sẽ kiểm tra currGas và cập nhật index nếu cần thiết. Trả về index.
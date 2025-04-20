# Explaination

## English
Main idea: every anagram string will be sorted and push to hashmap.
Initialize unordered_map to stored sorted string.Sort the string and push to unordered_map. Same sorted string go to the same key.Finally, push it back to result array.

## Tiếng Việt
Ý tưởng chính: Các chuỗi anagram sau khi sort sẽ giống nhau.
Khởi tạo 1 hashmap để lưu trữ những chuỗi đã được sắp xếp. Sắp xếp chuỗi và đẩy vào hashmap(chuỗi anagram đi vào cùng 1 key). Chạy qua hashmap để đẩy vào lại mảng kết quả.
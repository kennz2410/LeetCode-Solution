# Explaination

## English
Main idea: Use Dijkstra and return the max element.
Initialize 2D vector(pair int) to store adjacents, priority queue(min-heap) to store the minimum time to reach a vertex. Loop through the adjacents vector, if dist[u] + weight(cost) smaller than dist[v], update priority queue and dist[v]. Find max element in dist array and return.

## Tiếng Việt
Ý tưởng chính: Thuật toán dijkstra và trả về phần tử lớn nhất.
Khởi tạo 2D vector để lưu cạnh liền kề và weight của chúng, hàng đợi ưu tiên để giữ các cặp giá trị, vector lưu giá trị khoảng cách từ đỉnh bắt đầu. Chạy vòng lặp qua mảng adjs để tính toán khoảng cách ngắn nhất, nếu dist[u] + weight(cost) < dist[v] cập nhật lại trong priority queue. Tìm phần tử lớn nhất trong mảng dist. Trả về kết quả.

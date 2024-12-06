Project-BattleShipGame-20241

## Mô tả dự án
BattleShipGame là một trò chơi chiến thuật theo lượt dựa trên giao thức mạng, được phát triển cho môn học **IT4062**. 
Người chơi sẽ tương tác thông qua giao diện đồ họa để đặt tàu, tấn công đối thủ và chiến thắng khi toàn bộ tàu của đối thủ bị đánh chìm. 
Trò chơi được xây dựng trên Qt Framework và sử dụng giao thức TCP/IP để kết nối.

---

## Tính năng
- **Giao diện người chơi**: Hiển thị bàn chơi và cho phép người chơi thực hiện các lượt tấn công.
- **Kết nối mạng**: Giao tiếp giữa hai người chơi thông qua giao thức TCP/IP.
- **Logic trò chơi**:
  - Đặt tàu và kiểm tra va chạm.
  - Tấn công và phản hồi kết quả.
  - Kiểm tra kết thúc trò chơi (thắng/thua).
- **Hiệu ứng hình ảnh**: Hiển thị hiệu ứng bắn và nổ trên bàn chơi.

---

## Cấu trúc dự án

### Thư mục
- `src/`: Chứa mã nguồn chính của dự án.
  - `gamemanager.cpp`, `gamemanager.h`: Quản lý logic trò chơi.
  - `networkmanager.cpp`, `networkmanager.h`: Xử lý kết nối TCP/IP.
  - `main.cpp`: Điểm bắt đầu của chương trình.
- `ui/`: Chứa giao diện người dùng.
  - `mainwindow.ui`: Thiết kế giao diện chính bằng Qt Designer.
- `resources/`: Tài nguyên như hình ảnh và âm thanh.
- `docs/`: Tài liệu liên quan đến dự án.
- `Makefile`: File cấu hình để biên dịch dự án.

### Công nghệ sử dụng
- **Ngôn ngữ**: C++ (C++11).
- **Framework**: Qt (Widgets và Network).
- **Thư viện bổ sung**: SQLite (nếu có cơ sở dữ liệu).

---

## Cách cài đặt và chạy

### Yêu cầu hệ thống
1. Qt Framework (>= 5.9).
2. Trình biên dịch C++ (g++ hoặc tương tự).
3. Thư viện SQLite (nếu sử dụng).

### Hướng dẫn cài đặt
1. **Clone dự án**:
   ```bash
   git clone <repository-url>
   cd IT4062-Project-BattleShipGame
   ```
2. **Biên dịch dự án**:
   Sử dụng lệnh sau để biên dịch:
   ```bash
   qmake BattleshipGame.pro
   make
   ```
3. **Chạy ứng dụng**:
   ```bash
   ./BattleShipGame
   ```

---

## Hướng dẫn chơi
1. Mở ứng dụng.
2. Kết nối với đối thủ thông qua mạng (chọn "Host" hoặc "Join").
3. Đặt tàu trên bàn cờ của bạn.
4. Bắt đầu lượt tấn công, nhấp vào ô trên bàn cờ của đối thủ.
5. Kết thúc trò chơi khi một người chơi chìm toàn bộ tàu của đối thủ.

---

## Đóng góp
- Nếu bạn muốn đóng góp, hãy tạo một Pull Request hoặc liên hệ qua email.

---

## Thông tin liên hệ
- **Tên dự án**: IT4062-Project-BattleShipGame.
- **Tác giả**: [Tên nhóm hoặc cá nhân].
- **Email**: [Email liên hệ].

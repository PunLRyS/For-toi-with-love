hướng dẫn làm việc với git

tải và cài đặt git theo đường dẫn https://github.com/git-for-windows/git/releases/download/v2.47.0.windows.1/Git-2.47.0-64-bit.exe

mở terminal bằng "windows + R" gõ "cmd" bấm "enter" rồi ghi các lệnh

git clone "đường dẫn git" //clone đến repositories chung của nhóm

git checkout develop //di chuyển đến nhánh develop do nhánh main sử dụng để chốt project khi hoàn thành

git pull origin develop //pull dữ liệu từ nhánh develop về máy

git checkout -b feature/somthing //checkout sang nhánh mới từ nhánh develop (feature/somthing có thể thay bằng tên khác tùy ý)

sau khi làm xong:

git add .

git commit -m "update"

git push origin feature/somthing //thay feature/something thành tên nhánh đã checkout ở bước trên


Hướng dẫn biên dịch và chạy chương trình

mở terminal

di chuyển đến thư mục clone project // ví dụ của tôi đường dẫn là "D:\Ricado\For-toi-with-love\src" thì

cd D:\Ricado\For-toi-with-love\src

g++ -Iinclude -Iquanly main.cpp src/*.cpp -o main

nếu dùng terminal trên cmd thì ghi: main

dùng terminal bằng powershell hoặc trên vscode thì ghi: ./main

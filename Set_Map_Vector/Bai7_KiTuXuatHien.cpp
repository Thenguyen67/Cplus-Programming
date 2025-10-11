#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

void solve() {
    std::string s;
    std::cin >> s;

    // 1. Đếm tần suất
    // Mảng để lưu tần suất của 26 kí tự từ 'a' đến 'z'
    std::vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'a']++;
    }

    // 2. Tìm kí tự có tần suất lớn nhất, thứ tự từ điển nhỏ nhất
    int max_freq = -1;
    char char_max = ' ';
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            char_max = (char)(i + 'a');
        }
    }
    std::cout << char_max << " " << max_freq << std::endl;

    // 3. Tìm kí tự có tần suất nhỏ nhất, thứ tự từ điển lớn nhất
    int min_freq = 1e9; // Gán một giá trị rất lớn ban đầu
    char char_min = ' ';
    for (int i = 0; i < 26; ++i) {
        // Chỉ xét những kí tự có xuất hiện trong xâu
        if (freq[i] > 0) {
            // Dùng <= để nếu tần suất bằng nhau, kí tự sau (lớn hơn) sẽ được chọn
            if (freq[i] <= min_freq) {
                min_freq = freq[i];
                char_min = (char)(i + 'a');
            }
        }
    }
    std::cout << char_min << " " << min_freq << std::endl;

    // 4. Tìm số lượng kí tự khác nhau
    int distinct_chars = 0;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 0) {
            distinct_chars++;
        }
    }
    std::cout << distinct_chars << std::endl;
}

int main() {
    // Tăng tốc độ nhập xuất
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
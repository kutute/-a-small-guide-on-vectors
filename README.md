# -a-small-guide-on-vectors
    During my studies, I compiled a small guide on vector methods in C++. For more details, see the README.

# 📘 C++ Vector Guide

## 🇬🇧 About

Hi everyone! 👋

While learning C++ vectors, I decided to create a small personal guide to better understand how vector methods work. During the process, I realized that this might also be useful for other beginners.

So I’m sharing this simple guide that covers the basic and most important vector methods in C++.

It’s not a complete reference, but a beginner-friendly explanation with examples that helped me understand the topic better.

I hope it helps you too 🚀

---

## 🇷🇺 Описание

Всем привет! 👋

Пока я изучал векторы в C++, решил сделать для себя небольшое пособие, чтобы лучше разобраться в методах `vector`. В процессе понял, что это может быть полезно и другим новичкам.

Поэтому делюсь этим небольшим гайдом с базовыми и самыми важными методами `vector` в C++.

Это не полный справочник, а простое и понятное объяснение с примерами, которые помогли мне самому разобраться.

Надеюсь, тебе тоже будет полезно 🚀
---
<img src="https://commons.wikimedia.org/wiki/Special:FilePath/Cplusplus-original.svg" width="80"
style="filter: hue-rotate(200deg) saturate(3);"/>
---

## ⚙️ short example

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}


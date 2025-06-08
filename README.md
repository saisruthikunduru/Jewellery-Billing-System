📦 Jewellery Billing System in C
A console-based Jewellery Store Billing System developed in the C language. This project helps simulate a billing system for a jewellery shop, including support for various item types, GST calculation, and customer billing summaries. Ideal for educational and small retail use-cases.

🔧 Features
👤 Customer name input and welcome interface

💍 Support for multiple jewellery types (Gold, Silver, Platinum, Diamond)

📊 Weight and quantity-based price calculation

🧾 GST (18%) auto-calculated and added

📅 Timestamped final bill

💾 Bill history saved to file (bills.txt)

💳 Supports payment method entry (Cash/Card)

🔐 Optional admin login (can be added)

🧩 Clean, modular code (easy to expand)

🛠️ Tech Stack
Language: C

Tools: GCC, Code::Blocks or Dev-C++

Standard: C90/C99 compatible

📂 Folder Structure
css
Copy
Edit
JewelleryBillingSystem/
├── src/
│   └── main.c
├── data/
│   └── bills.txt
├── README.md
├── LICENSE
├── project-report.pdf
🚀 How to Run
bash
Copy
Edit
gcc src/main.c -o jewellery
./jewellery
📌 Future Enhancements
GUI interface using C graphics or Python

Search old bills by name/date

Export bill as PDF or CSV

Admin dashboard with analytics

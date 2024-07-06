# BharatTrade

BharatTrade is a simple command-line stock trading simulator implemented in C and Python. It allows users to perform basic actions such as adding money, investing, withdrawing, and viewing account balance. Additionally, users can view real-time stock data for a given stock symbol.

[Watch the project demo on YouTube](https://www.youtube.com/watch?v=1R9IS1HSJWQ)

## Features

- **Add Money**: Users can add money to their account balance.
- **Invest Money**: Users can invest a specified amount in a stock.
- **Withdraw Money**: Users can withdraw money from their account balance.
- **View Balance**: Users can view their current account balance.
- **View Stock Data**: Users can view real-time stock data for a given stock symbol. Ensure Python and the necessary libraries (`yfinance`) are installed to run the Python script.

## Usage

1. Compile the C program `BharatTrade_main.c` using a C compiler.
2. Run the compiled executable.
3. Follow the on-screen instructions to navigate through the menu and perform actions.

## File Handling

The project also includes file handling functionalities:

- **Stock Data Storage**: Stock data retrieved from the Python script can be stored in external files for future reference or analysis.
- **Account Information**: Account information, such as balance and transaction history, can be stored in files to maintain user data across sessions.

Ensure appropriate permissions and file paths are set to enable file handling functionalities.

## Python Script

The Python script `stock_data.py` retrieves real-time stock data for a given stock symbol using the `yfinance` library. Users can input a stock symbol, and the script will display information such as the current price, change, and percent change in the stock price.

## How to Run the Python Script

1. Ensure Python is installed on your system.
2. Install the required Python library `yfinance` using pip:
```
pip install yfinance
```
3. Run the Python script:
```
python stock_data.py
```
4. Follow the on-screen instructions to input a stock symbol and view the stock data.

## Disclaimer

BharatTrade is a project developed for educational purposes and should not be used for actual stock trading. The stock data provided in this project may not be accurate and is for demonstration purposes only.

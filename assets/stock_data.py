import yfinance as yf
symbol = input("Enter the stock symbol (e.g- TCS): ")
symbol_nse = symbol + ".NS"
try:
    stock_data = yf.download(symbol_nse, progress=False)
    if stock_data.empty:
        print("Sorry, information for this stock symbol could not be retrieved.")
    else:
   
        stock_data['Yesterday Close'] = stock_data['Close'].shift(1)
        yesterday_close = stock_data["Yesterday Close"].iloc[-1]
        
     
        current_price = stock_data["Close"].iloc[-1]

  
        change = current_price - yesterday_close
    
        percent_change = (change / yesterday_close) * 100

   
        print(f"\n\nStock Symbol: {symbol}")
        print(f"Current Price: {current_price:.2f}")
        print(f"Change: {change:.2f}")
        print(f"Percent Change: {percent_change:.2f}%")
except (KeyError, ValueError) as e:
    print("Invalid symbol or data unavailable.")

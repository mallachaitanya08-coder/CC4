<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Smart Currency Converter</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>

    <div class="converter-box">
        <h2>Currency Converter</h2>
        <form>
            <div class="amount">
                <p>Enter Amount</p>
                <input type="number" value="1" min="1">
            </div>
            
            <div class="drop-list">
                <div class="from">
                    <p>From</p>
                    <div class="select-box">
                        <select id="fromCurrency">
                            <option value="USD">USD</option>
                            <option value="EUR">EUR</option>
                            <option value="GBP">GBP</option>
                            <option value="INR" selected>INR</option>
                        </select>
                    </div>
                </div>
                
                <div class="icon">⇌</div>

                <div class="to">
                    <p>To</p>
                    <div class="select-box">
                        <select id="toCurrency">
                            <option value="USD" selected>USD</option>
                            <option value="EUR">EUR</option>
                            <option value="GBP">GBP</option>
                            <option value="INR">INR</option>
                        </select>
                    </div>
                </div>
            </div>

            <div class="exchange-rate">Getting exchange rate...</div>
            <button type="button" id="getBtn">Convert</button>
        </form>
    </div>

    <script src="script.js"></script>
</body>
</html>
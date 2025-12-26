* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Poppins', sans-serif;
}

body {
    display: flex;
    align-items: center;
    justify-content: center;
    min-height: 100vh;
    background: #4f46e5;
}

.converter-box {
    width: 370px;
    padding: 30px;
    border-radius: 15px;
    background: #fff;
    box-shadow: 0 10px 25px rgba(0,0,0,0.1);
}

.converter-box h2 {
    font-size: 24px;
    font-weight: 600;
    text-align: center;
    margin-bottom: 20px;
}

form input, button, select {
    width: 100%;
    outline: none;
    border-radius: 5px;
    border: 1px solid #ddd;
}

.amount p, .from p, .to p {
    font-size: 14px;
    margin-bottom: 5px;
}

.amount input {
    height: 45px;
    padding: 0 15px;
    font-size: 17px;
}

.drop-list {
    display: flex;
    margin-top: 20px;
    align-items: center;
    justify-content: space-between;
}

.drop-list .select-box {
    display: flex;
    height: 45px;
    width: 115px;
    align-items: center;
    justify-content: center;
}

.select-box select {
    padding: 0 10px;
    cursor: pointer;
}

.icon {
    font-size: 22px;
    margin-top: 25px;
    cursor: pointer;
}

.exchange-rate {
    font-size: 17px;
    margin: 20px 0 30px;
    text-align: center;
}

button {
    height: 50px;
    background: #4f46e5;
    color: #fff;
    border: none;
    font-size: 17px;
    cursor: pointer;
    transition: 0.3s ease;
}

button:hover { background: #3b31d1; }
acc_id=1
accounts={}
def open_account(name:str ,initial_deposit:float)->str:
    global acc_id
    account_id=f"xyz no {acc_id}"
    acc_id = acc_id + 1
    accounts[account_id]={
        "name":name,
        "initial_deposit":initial_deposit
    }
    return account_id

a=input("Enter your name:")
b=float(input("Enter your initial deposit:"))
account_id=open_account(a,b)
print(f"New account created with ID: {account_id}")
print(accounts[account_id])
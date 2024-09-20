from duckgpt import DuckGPT

client = DuckGPT(model="gpt-4o-mini")
models = client.Models()
response = client.Chat("Hello, world!", [])
print(response)
import asyncio
import aiohttp

async def _main():
    url="https://open.spotify.com/search"
    async with aiohttp.request("GET",url=url) as response:
        print(await response.text())

asyncio.run(_main())
# Define here the models for your scraped items
#
# See documentation in:
# https://docs.scrapy.org/en/latest/topics/items.html

import scrapy


class Game(scrapy.Item):
    # define the fields for your item here like:
    summoner_name = scrapy.Field()
    mmr = scrapy.Field()
    ladder_rank = scrapy.Field()
    win_ratio = scrapy.Field()
    lp = scrapy.Field()
    wins = scrapy.Field()
    losses = scrapy.Field()
    champion_info = scrapy.Field()

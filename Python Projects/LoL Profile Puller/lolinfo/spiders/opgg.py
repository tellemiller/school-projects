import scrapy

from ..constants import XPATHS
from ..items import Game


class OpggSpider(scrapy.Spider):
    name = 'opgg'
    allowed_domains = ['op.gg']
    profiles = ['RenatarW', 'TernetPipp', 'GripJulks', 'Snoozing', 'Yebinouma', 'TeIle']

    start_urls = ['https://www.op.gg/summoners/na/' + username for username in profiles]

    # https://na.op.gg/summoner/userName=RenatarW

    def parse(self, response):
        summoners = response.xpath(XPATHS['summoner_name']).get()
        mmr = response.xpath(XPATHS['mmr']).get()
        ladder_rank = response.xpath(XPATHS['ladder_rank']).get()
        win_ratio = response.xpath(XPATHS['win_ratio']).get()
        lp = response.xpath(XPATHS['lp']).get()
        wins = response.xpath(XPATHS['wins']).get()
        losses = response.xpath(XPATHS['losses']).get()
        champion_info = response.xpath(XPATHS['champions']).extract()

        formatted_champion_info = [entry.translate(str.maketrans({'\n': '', '\t': ''})) for entry in champion_info]
        formatted_champion_info = list(filter(None, formatted_champion_info))

        item = Game()
        item['summoner_name'] = summoners
        item['mmr'] = mmr
        item['ladder_rank'] = ladder_rank
        item['win_ratio'] = win_ratio
        item['lp'] = lp.strip()
        item['wins'] = wins
        item['losses'] = losses
        item['champion_info'] = formatted_champion_info

        yield item

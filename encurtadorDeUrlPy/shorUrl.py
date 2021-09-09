import pyshorteners

url = "https://www.amazon.com.br/gp/css/order-history/?ref=hud_2_gw_profile&pf_rd_r=V15MFKP5C6VD7WC33P9D&pf_rd_p=bef77ec8-8562-4b62-bfa3-ced941dcd21a&pd_rd_r=e155a4d7-2727-4245-ae9f-50a212746d3e&pd_rd_w=KQCGQ&pd_rd_wg=KTzjz&ref_=pd_gw_unk"

shortener = pyshorteners.Shortener()
short_url = shortener.tinyurl.short(url)
print(short_url)

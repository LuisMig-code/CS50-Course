from PIL import Image , ImageFilter

antes = Image.open("imgs/me.JPG")
depois = antes.filter(ImageFilter.BoxBlur(100))
depois.save("imgs/me_depois.JPG")
from gtts import gTTS
test=""
language="en"
obj=gTTS(text=test,lang=language,tld='com.mx',slow=True)
obj.save("sudhanshu.mp3")
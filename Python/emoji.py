def emoji_converter(message):
  words = message.split(" ")
  emojis = {
  ":)" : " with smile",
  ":(" : "sad"
  }
  output = ""
  for word in words:
   output += emojis.get(word,word)+" "
  return output


message = input(">")
result = emoji_converter(message)
print(result)   
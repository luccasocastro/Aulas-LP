import pywhatkit as Kit

messageOne = f'Ola\nMeu nome eh Luccas!\n'
messageTwo = f'Tenho 19 anos!\nE faco Ciencia da Computacao'
Kit.text_to_handwriting(messageOne + messageTwo)


from telegram.ext import Updater, CommandHandler, MessageHandler, Filters
updater = Updater(token='TOKEN', use_context=True) #Replace TOKEN with your token string
dispatcher = updater.dispatcher

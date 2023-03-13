import os

from cs50 import SQL
from flask import Flask, render_template, request , redirect
from flask_mail import Mail,Message

app = Flask(__name__)

# db = SQL("sqlite:///registrants.db")
app.config["MAIL_DEFAULT_SENDER"] = os.getenv("MAIL_DEFAULT_SENDER")
app.config["MAIL_PASSWORD"] = os.getenv("MAIL_PASSWORD")
app.config["MAIL_PORT"] = 587
app.config["MAIL_SERVER"] = "smtp.gmail.com"
app.config["MAIL_USER_TLS"] = True
app.config["MAIL_USERNAME"] = os.getenv("MAIL_USERNAME")
mail = Mail(app)


CLUBS = [
    "Games",
    "Anime",
    "Football",
    "Basketball",
    "Music",
    "Programing",
    "Literature"
]


@app.route("/")
def index():
    return render_template("index.html" , clubs=CLUBS)

@app.route("/register" , methods=["POST"])
def register():
    name = request.form.get("name")
    email = request.form.get("email")
    if not email:
        return render_template("error.html" , message="Missing email!")
    club = request.form.get("club")
    if not club:
        return render_template("error.html" , message="Missing Club")
    if club not in CLUBS:
        return render_template("error.html" , message="Select a valid Club!")
        
    db.execute("INSERT INTO registrants (name , club) VALUES(?,?)", name , club)
    
    #message = Message("You are registered!", recipients=[email])
    #mail.send(message)
    
    #return render_template("sucess.html")

    return redirect("/registrants")


@app.route("/registrants")
def registrants():
    registrants = db.execute("SELECT * FROM registrants")
    return render_template("registrants.html" , registrants = registrants)
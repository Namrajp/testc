from flask import Flask, render_template, request, url_for

app = Flask(__name__)

# @app.route("/")
# def index():
#     return render_template("index.html")
# with app.test_request_context():
#     print(url_for('index'))

@app.route("/", methods=["GET","POST"])
def index():
    if request.method == "GET":
        return render_template("index.html")
    elif request.method == "POST":
        return render_template("greet.html", name=request.form.get("name", "world"))
    
# def greet():
#     return render_template("greet.html", name=request.args.get("name", "world"))

@app.route("/register", methods=["GET","POST"])    
def register():
    return render_template("success.html", name=request.args.get("name", "world"))
var WINDOW_WIDTH = 800;
var WINDOW_HEIGHT = 600;
var RADIUS = 8;
var MARGIN_TOP = 60;
var MARGIN_LEFT = 30;

var endTime = new Date(2015, 1, 22, 18, 47, 52);
var curShowTimeSeconds = 0;

window.onload = function () {
    WINDOW_WIDTH = document.body.clientWidth;
    WINDOW_HEIGHT = document.body.clientHeight;

    MARGIN_LEFT = Math.round(WINDOW_WIDTH / 10);
    RADIUS = Math.round(WINDOW_WIDTH * 4 / 5 / 108) - 1;

    MARGIN_TOP = Math.round(WINDOW_HEIGHT / 5);
    time();
};

function render(cxt) {
    var curTime = new Date();
    cxt.clearRect(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
    cxt.fillStyle = "black";
    cxt.fillRect(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);  //�����ɫ x y���� �� ��
    cxt.strokeRect(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);  //���߿� x y���� �� ��

    var hours = parseInt(curTime.getHours());
    var minutes = parseInt(curTime.getMinutes());
    var seconds = parseInt(curTime.getSeconds());

    renderDigit(MARGIN_LEFT, MARGIN_TOP, parseInt(hours / 10), cxt);
    renderDigit(MARGIN_LEFT + 15 * (RADIUS + 1), MARGIN_TOP, parseInt(hours % 10), cxt);
    renderDigit(MARGIN_LEFT + 30 * (RADIUS + 1), MARGIN_TOP, 10, cxt);
    renderDigit(MARGIN_LEFT + 39 * (RADIUS + 1), MARGIN_TOP, parseInt(minutes / 10), cxt);
    renderDigit(MARGIN_LEFT + 54 * (RADIUS + 1), MARGIN_TOP, parseInt(minutes % 10), cxt);
    renderDigit(MARGIN_LEFT + 69 * (RADIUS + 1), MARGIN_TOP, 10, cxt);
    renderDigit(MARGIN_LEFT + 78 * (RADIUS + 1), MARGIN_TOP, parseInt(seconds / 10), cxt);
    renderDigit(MARGIN_LEFT + 93 * (RADIUS + 1), MARGIN_TOP, parseInt(seconds % 10), cxt);
}

function renderDigit(x, y, num, cxt) {
    for (var i = 0; i < digit[num].length; i++) {
        for (var j = 0; j < digit[num][i].length; j++) {
            if (digit[num][i][j] == 1) {
                cxt.fillStyle = "red";
            } else {
                cxt.fillStyle = "rgb(20,20,20)";
            }
            cxt.beginPath();
            cxt.arc(x + j * 2 * (RADIUS + 1) + (RADIUS + 1), y + i * 2 * (RADIUS + 1) + (RADIUS + 1), RADIUS, 0, 2 * Math.PI);
            cxt.closePath();
            cxt.fill();
        }
    }
}

function time() {
    var canvas = document.getElementById('canvas');
    var context = canvas.getContext("2d");
    canvas.width = WINDOW_WIDTH;
    canvas.height = WINDOW_HEIGHT;
    setInterval(
        function () {
            render(context);
        },
        1000
    );
}

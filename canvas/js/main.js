  window.onload = function() {
      var canvas = document.getElementById("canvas");
      canvas.width = 600;
      canvas.height = 600;
      var context = canvas.getContext("2d");

      for (var i = 0; i <= 49; i++) {
          drawWhiteRect(context, 100 + 10 * i, 100 + 10 * i, 400 - 20 * i, 400 - 20 * i);
          drawBlackRect(context, 105 + 10 * i, 105 + 10 * i, 390 - 20 * i, 390 - 20 * i);
      }

      context.beginPath();
      context.rect(296, 296, 5, 5);
      context.fillStyle = "black";
      context.lineWidth = 5;

      context.fill();
      context.stroke();
  };

      function drawBlackRect(cxt, x, y, width, height) {
          cxt.beginPath();
          cxt.rect(x, y, width, height);

          cxt.lineWidth = 5;
          cxt.strokeStyle = "black";

          cxt.stroke();
      }

      function drawWhiteRect(cxt, x, y, width, height) {
          cxt.beginPath();
          cxt.rect(x, y, width, height);

          cxt.lineWidth = 5;
          cxt.strokeStyle = "white";

          cxt.stroke();
      }

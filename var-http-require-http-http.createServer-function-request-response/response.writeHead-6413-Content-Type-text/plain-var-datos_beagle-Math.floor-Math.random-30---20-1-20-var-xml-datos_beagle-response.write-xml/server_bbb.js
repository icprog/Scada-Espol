var http = require("http");

http.createServer(function(request, response) {
  //response.writeHead(6413, {"Content-Type": "text/plain"});
  var datos_beagle = Math.floor(Math.random() * (30 - 20 + 1)) + 20;
  var xml="|"+datos_beagle+"|";
  response.write(xml);
  //console.log(datos_beagle);
  response.end();
}).listen(6413);


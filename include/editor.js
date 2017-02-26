var editor = ace.edit("editor");
editor.setTheme("ace/theme/dawn");
editor.getSession().setMode("ace/mode/javascript");
	
function evalCode(){
	var code = "";
	var lines = document.getElementsByClassName("ace_line");
	for (var i = 0; i < lines.length; i++){
		code = code + lines[i].outerText;
		console.log(code);
	}
	eval(code);
}
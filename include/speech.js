	var resultLine = "";
	var SpeechRecognition = SpeechRecognition || webkitSpeechRecognition;
	var SpeechGrammarList = SpeechGrammarList || webkitSpeechGrammarList;
	var SpeechRecognitionEvent = SpeechRecognitionEvent || webkitSpeechRecognitionEvent;
	
	var recognition = new SpeechRecognition();
	var speechRecognitionList = new SpeechGrammarList();
	recognition.grammars = speechRecognitionList;
	recognition.lang = 'en-US';
	recognition.interimResults = false;
	recognition.maxAlternatives = 1;

	function startRecord() {
	  recognition.start();
	  console.log('Ready to receive a color command.');
	}
	
	var diagnostic = document.getElementById('result');
	recognition.onresult = function(event) {

	  var last = event.results.length - 1;
	  var phrase = event.results[last][0].transcript;

	  resultLine = phrase + '?';
	  console.log('Confidence: ' + event.results[0][0].confidence);
	}

	recognition.onspeechend = function() {
	  recognition.stop();
	}

	recognition.onnomatch = function(event) {
	  diagnostic.textContent = "I didn't understand you.";
	}

	recognition.onerror = function(event) {
	  diagnostic.textContent = 'Error occurred in recognition: ' + event.error;
	}
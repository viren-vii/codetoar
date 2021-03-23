window.onload = function() {addIfBlockRef = document.getElementById("ifBlocks");handleOnChange();changeArduino()}
var body = document.getElementsByTagName('body')[0];
var idCount = 0;
function addIfBlock(){

    var ifDiv = document.createElement("div");
    idCount+=1;
    ifDiv.id = "if"+idCount;
    ifDiv.innerHTML = createIfBlock(idCount);
    addIfBlockRef.appendChild(ifDiv);
    stringify();

}

var addedIf = {}, addedIfString = "";
// oninput=\"handleOnChange();\" required
function createIfBlock(idCount){
    //code if
    addedIf[idCount]=`
        if(S1 ==  and S2 ==  and S3 ==  and S4 ==  and S5 == ){
		    ();
	}`;

    return [
    "\
    if(S1 == <input class=\"SS\" id=\"S1if"+idCount+"\" type=\"text\" oninput=\"checkIfValues();this.style.width = ((this.value.length + 1) * 8) + 'px';\" required/> && S2 == <input class=\"SS\" id=\"S2if"+idCount+"\" type=\"text\" oninput=\"checkIfValues();this.style.width = ((this.value.length + 1) * 8) + 'px';\" required/> && S3 == <input class=\"SS\" id=\"S3if"+idCount+"\" type=\"text\" oninput=\"checkIfValues();this.style.width = ((this.value.length + 1) * 8) + 'px';\" required/> && S4 == <input class=\"SS\" id=\"S4if"+idCount+"\" type=\"text\" oninput=\"checkIfValues();this.style.width = ((this.value.length + 1) * 8) + 'px';\" required/> && S5 == <input class=\"SS\" id=\"S5if"+idCount+"\" type=\"text\" oninput=\"checkIfValues();this.style.width = ((this.value.length + 1) * 8) + 'px';\" required/>){<br>\
        <input id=\"Fnif"+idCount+"\" type=\"text\" oninput=\"checkIfValues();this.style.width = ((this.value.length + 1) * 8) + 'px';\" required/>();<br>\
    }<button type=\"button\" id=\"delBtn"+idCount+"\"onclick=\"deleteIfBlock(this);\">-</button>"
    ].join('\n');
}
function deleteIfBlock(e){
    id = e.getAttribute("id");
    id = id.split("n").pop();
    delDiv = document.getElementById("if"+id);
    delDiv.remove();

    delete addedIf[id];

    stringify();

    idCount--;
}
// String("S"+j+"if"+i)
function checkIfValues(){
    
    var status = [];
    for(var i=1; i<=idCount; i++){
        inputs = document.getElementById("ifBlocks").getElementsByTagName("input");
        
        pushStatus = {}
        pushStatus[1] = inputs[0+i*6].value;
        pushStatus[2] = inputs[1+i*6].value;
        pushStatus[3] = inputs[2+i*6].value;
        pushStatus[4] = inputs[3+i*6].value;
        pushStatus[5] = inputs[4+i*6].value;     
        pushStatus[6] = inputs[5+i*6].value;
        status.push(pushStatus);
    }
    console.log(status);
    var j = 1;
    status.forEach(function(x){
        console.log(x);
        addedIf[j] = `
        if(S1 == `+x[1]+` and S2 == `+x[2]+` and S3 == `+x[3]+` and S4 == `+x[4]+` and S5 == `+x[5]+`){
            `+x[6]+` ();
        }`;
        j++;
    }
    );
    stringify();
}

var visibleUS = false;
var usBlock = "";

function toggleUS(){
    var usBlockRef = document.getElementById("ultrasonicBlock");
    visibleUS = !visibleUS;
    console.log(visibleUS);
    style = "";
    if(visibleUS){
        usBlock = `if(dist()<`+vDist+`){
            stop_bot();
            delay(10);
            }`;
            style = "block";
    }else{
        usBlock = "";
        style = "none";
    }
    usBlockRef.style.display = style;
    handleOnChange();
}

var vTRIGGER_PIN, vECHO_PIN, vDist;
var vIR1, vIR2, vIR3, vIR4, vIR5, vENA, vENB, vRM1, vRM2, vLM1, vLM2, vSP_ENA, vSP_ENB;
var vfRM1, vfRM2, vfLM1, vfLM2,
    vrRM1, vrRM2, vrLM1, vrLM2, vrENA, vrENB,
    vlRM1, vlRM2, vlLM1, vlLM2, vlENA, vlENB,
    vd360RM1, vd360RM2, vd360LM1, vd360LM2, vd360ENA, vd360ENB;
var vS1if0, vS2if0, vS3if0, vS4if0, vS5if0, vFnif0;
function handleOnChange(){
    vTRIGGER_PIN = document.getElementById("TRIGGER_PIN").value;
    vECHO_PIN = document.getElementById("ECHO_PIN").value;
    vDist = document.getElementById("dist").value;

    vIR1 = document.getElementById("IR1").value;
    vIR2 = document.getElementById("IR2").value;
    vIR3 = document.getElementById("IR3").value;
    vIR4 = document.getElementById("IR4").value;
    vIR5 = document.getElementById("IR5").value;

    vRM1 = document.getElementById("RM1").value;
    vRM2 = document.getElementById("RM2").value;
    vLM1 = document.getElementById("LM1").value;
    vLM2 = document.getElementById("LM2").value;

    vSP_ENA = document.getElementById("SP_ENA").value;
    vSP_ENB = document.getElementById("SP_ENB").value;

    vENA = document.getElementById("ENA").value;
    vENB = document.getElementById("ENB").value;

    vfRM1 = document.getElementById("fRM1").value;
    vfRM2 = document.getElementById("fRM2").value;
    vfLM1 = document.getElementById("fLM1").value;
    vfLM2 = document.getElementById("fLM2").value;

    vrRM1 = document.getElementById("rRM1").value;
    vrRM2 = document.getElementById("rRM2").value;
    vrLM1 = document.getElementById("rLM1").value;
    vrLM2 = document.getElementById("rLM2").value;
    vrENA = document.getElementById("rENA").value;
    vrENB = document.getElementById("rENB").value;

    vlRM1 = document.getElementById("lRM1").value;
    vlRM2 = document.getElementById("lRM2").value;
    vlLM1 = document.getElementById("lLM1").value;
    vlLM2 = document.getElementById("lLM2").value;
    vlENA = document.getElementById("lENA").value;
    vlENB = document.getElementById("lENB").value;

    vd360RM1 = document.getElementById("d360RM1").value;
    vd360RM2 = document.getElementById("d360RM2").value;
    vd360LM1 = document.getElementById("d360LM1").value;
    vd360LM2 = document.getElementById("d360LM2").value;
    vd360ENA = document.getElementById("d360ENA").value;
    vd360ENB = document.getElementById("d360ENB").value;
    
    vS1if0 = document.getElementById("S1if0").value;
    vS2if0 = document.getElementById("S2if0").value;
    vS3if0 = document.getElementById("S3if0").value;
    vS4if0 = document.getElementById("S4if0").value;
    vS5if0 = document.getElementById("S5if0").value;
    vFnif0 = document.getElementById("Fnif0").value;

    changeArduino();
}
function stringify(){
    addedIfString = "";
    for(x in addedIf){
        addedIfString += addedIf[x];
    }
    changeArduino();
}
//`+vv+`
function changeArduino(){
    code = `//looking at bot from front : IRs are numbered from left to right
#define TRIGGER_PIN `+vTRIGGER_PIN+`
#define ECHO_PIN `+vECHO_PIN+`
#define IR1 `+vIR1+`
#define IR2 `+vIR2+`
#define IR3 `+vIR3+`
#define IR4 `+vIR4+`
#define IR5 `+vIR5+`
#define ENA `+vENA+`
#define ENB `+vENB+`
#define RM1 `+vRM1+`
#define RM2 `+vRM2+`
#define LM1 `+vLM1+`
#define LM2 `+vLM2+`
float SP_ENA = `+vSP_ENA+`;
float SP_ENB = `+vSP_ENB+`;


void forward(){
	Serial.print("Forwards Triggered");
	digitalWrite(RM1,`+vfRM1+`);
	digitalWrite(RM2,`+vfRM2+`);
	digitalWrite(LM1,`+vfLM1+`);
	digitalWrite(LM2,`+vfLM2+`);
	analogWrite(ENA,SP_ENA);
	analogWrite(ENB,SP_ENB);
}

void right(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,`+vrRM1+`);
	digitalWrite(RM2,`+vrRM2+`);
	digitalWrite(LM1,`+vrLM1+`);
	digitalWrite(LM2,`+vrLM2+`);
	analogWrite(ENA,`+vrENA+`);
	analogWrite(ENB,`+vrENB+`);
}

void left(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,`+vlRM1+`);
	digitalWrite(RM2,`+vlRM2+`);
	digitalWrite(LM1,`+vlLM1+`);
	digitalWrite(LM2,`+vlLM2+`);
	analogWrite(ENA,`+vlENA+`);
	analogWrite(ENB,`+vlENB+`);
}

void deg360(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,`+vd360RM1+`);
	digitalWrite(RM2,`+vd360RM2+`);
	digitalWrite(LM1,`+vd360LM1+`);
	digitalWrite(LM2,`+vd360LM2+`);
	analogWrite(ENA,`+vd360ENA+`);
	analogWrite(ENB,`+vd360ENB+`);
}

void stop(){
	Serial.print("Right Triggered");
	digitalWrite(RM1,LOW);
	digitalWrite(RM2,LOW);
	digitalWrite(LM1,LOW);
	digitalWrite(LM2,LOW);
	analogWrite(ENA,0);
	analogWrite(ENB,0);
}

void setup(){
	Serial.begin(9600);
	// MOTOR AND ENABLES
	pinMode (RM1, OUTPUT);
	pinMode (RM2, OUTPUT);
	pinMode (LM1, OUTPUT);
	pinMode (LM2, OUTPUT);
	pinMode (ENA, OUTPUT);
	pinMode (ENB, OUTPUT);
	// IR ARRAY
	pinMode (IR1, INPUT);
	pinMode (IR2, INPUT);
	pinMode (IR3, INPUT);
	pinMode (IR4, INPUT);
	pinMode (IR5, INPUT);
}
int dist(){
        digitalWrite(TRIGGER_PIN,LOW);
        delayMicroseconds(2);
        digitalWrite(TRIGGER_PIN,HIGH);
        delayMicroseconds(10);
        digitalWrite(TRIGGER_PIN,LOW);
        int dur=pulseIn(ECHO_PIN, HIGH);
        c=dur*0.0294/2;
        return c;
}
void loop(){
	int S1 = digitalRead(IR1);
	int S2 = digitalRead(IR2);
	int S3 = digitalRead(IR3);
	int S4 = digitalRead(IR4);
        int S5 = digitalRead(IR5);
    
        `+usBlock+`

	if(S1 == `+vS1if0+` and S2 == `+vS2if0+` and S3 == `+vS3if0+` and S4 == `+vS4if0+` and S5 == `+vS5if0+`){
            `+vFnif0+`();
	}
    `+addedIfString+`
}
    `;
    document.getElementById("arduinoCodeDiv").innerText = code;
    console.log("TRIGGERED");
}



function copyToCB(containerid){
    if (document.selection) {
        var range = document.body.createTextRange();
        range.moveToElementText(document.getElementById(containerid));
        range.select().createTextRange();
        document.execCommand("copy");
      } else if (window.getSelection) {
        var range = document.createRange();
        range.selectNode(document.getElementById(containerid));
        window.getSelection().addRange(range);
        document.execCommand("copy");
        alert("Text has been copied, now paste in the text-area")
      }
}


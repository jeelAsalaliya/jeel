var currentHour = 0;
var currentMin = 0;
var currentSec = 0;
var currentMilisec = 0;

var outputHour = document.getElementById("outputHour");
var outputMinute = document.getElementById("outputMinute");
var outputSec = document.getElementById("outputSec");
var outputMilisec = document.getElementById("outputMilisec");

var  startBtn = document.getElementById("startBtn");
var  stopBtn = document.getElementById("stopBtn");

var stopwatch;

function startclock()
{
    startBtn.style.display = "none";
    stopBtn.style.display = "inline-block";

    stopwatch = setInterval(myclock,10);

}


function stopclock()
{
    startBtn.style.display = "inline-block";
    stopBtn.style.display = "none";

    clearInterval(stopwatch);
}

function resetclock()
{
    stopclock();
    outputMilisec.innerHTML = "00";
    outputsec.innerHTML = "00";
    outputMinute.innerHTML = "00";
    outputHour.innerHTML = "00";

    currentHour = 0;
    currentMin = 0;         
    currentSec = 0;
    currentMilisec = 0;
    
}

function myclock
()
{
    currentMilisec++;
    if(currentMilisec == 100)
    {
        currentMilisec = 0;
        currentSec++;
        if(currentSec == 60)
        {
            currentSec = 0;
            currentMin++;
            if(currentMin == 60)
            {
                 currentMin = 0;
                 currentHour++;
                 if(currentHour == 24)
                 {
                    currentHour = 0;
                 }
                 outputHour.innerHTML = FormatTime(currentHour);
            }
            outputMinute.innerHTML = FormatTime(currentMin);
        }
        outputSec.innerHTML = FormatTime(currentSec);
    }
    outputMilisec.innerHTML = FormatTime(currentMilisec);
}

function FormatTime(time)
{
    if(time<10)
    {
        return "0" +time.toString(); 
    }
    else{
        return time.toString(); 
    }
}

else if(isNaN(gnum)){
     window.alert(`You have not intered the NUMBER!
${username},PLEASE! inter the valid number.`)
}
else{

if(gnum>randomnum)
     {
     attempts++;
window.alert(`TOO HIGH ${username}
     Please try again.`)
}
     else if(gnum<randomnum){
          attempts++;
          window.alert(`TOO LOW ${username}
     Please try again.`)
     }
     else{
          window.alert(`CONGLATULATION!${username},
     The correct number was ${randomnum};and it took you ${attempts} attempts to gues correct number.`)
          window.alert(`*******GAME OVER******************
                         -thank you for your time-
                          --sisco created--`)
     choise=false;
          }

}


}



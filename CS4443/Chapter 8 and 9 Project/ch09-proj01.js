const symbolPlay = '⯈';
const symbolPause = '❚ ❚';
const files = ['Nature-8399','River-655','Waterfall-941','Wave-2737'];

document.addEventListener('DOMContentLoaded', function() {

let currentVideo = document.getElementById('vidPlayer');

    //Creating the clickable image carosel

    for (let i=0; i<files.length; i++){
        const newImgElement = document.createElement('img');
        newImgElement.src = 'images/' + files[i] + '.jpg'
        newImgElement.addEventListener("click", function(){
            selection = files[i];
            setVidPlayer(selection)
        })
        document.querySelector('aside').appendChild(newImgElement);
    }

    //Changing the current video

    function setVidPlayer(selection){
    currentVideo.pause();
    resetPlayButton();
    document.querySelector('source').src = 'videos/'+selection+'.mp4';
    currentVideo.load();
    }

    //Play/Pause Button Changing 
    function changePlayButton(){
    if (playBtn.textContent == symbolPlay)
        playBtn.textContent = symbolPause
    else
        playBtn.textContent = symbolPlay
    }

    function resetPlayButton(){
        playBtn.textContent = symbolPlay;
    }

    function setProgress(c){
        progInd.style.width += c;
    }

    // Playback Buttons the .getAttribute does not work for some reason even though it returns the correct data...
    let playbackButtons = document.getElementsByTagName('button');
    let playBtn = document.getElementById('play');
    playbackButtons[0].addEventListener("click", function(){
        let skipBack = playbackButtons[0].getAttribute('data-skip');
        currentVideo.currentTime += -5; //skipBack; 
    })
    playbackButtons[1].addEventListener("click", function(){
        changePlayButton();
    if (currentVideo.paused)
        currentVideo.play();
    else  
        currentVideo.pause();
    })
    playbackButtons[2].addEventListener("click", function(){
        let skipForward = playbackButtons[2].getAttribute('data-skip');
        currentVideo.currentTime += 5; //skipForward;
    })
    playbackButtons[3].addEventListener("click", function(){
        currentVideo.pause();
        resetPlayButton();
        currentVideo.currentTime = 0;
    })

    //Progress Indicator
    
    const progInd = document.getElementById('progress');
    currentVideo.addEventListener('timeupdate', function(){
        const percCompl = (currentVideo.currentTime/currentVideo.duration) * 100;
        console.log(percCompl);
        setProgress(percCompl);
    })

})









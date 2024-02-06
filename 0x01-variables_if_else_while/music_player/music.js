let now_playing = document.querySelector('.now_playing');
let track_art = document.querySelector('.track_art');
let track_name = document.querySelector('.track_name');
let track_artist = document.querySelector('.track_artist');

let playpause_btn = document.querySelector('.playpause-track');
let next_btn = document.querySelector('.next-track');
let prev_btn = document.querySelector('.prev-track');

let seek_slider = document.querySelector('.seek_slider');
let volume_slider = document.querySelector('.volume_slider');
let curr_time = document.querySelector('.current_time');
let total_duration = document.querySelector('.total_duration');
let wave = document.querySelector('wave');
let radomIcon = document.querySelector('.fa_random');
let curr_track = document.querySelector('current_track');

let track_index = 0;
let isplaying = false;
let isRandom = false;
let updateTime;

const music_list = [
    {
        img: 'images/unstoppable.jpg',
        name: 'unstoppable',
        music: 'music/unstoppable.mp3'
    },
    {
        img: 'images/full of stars.jpg',
        name: 'full of stars',
        artist: 'cold play',
        music: 'music/full of stars.mp3'
    },
    {
        img: 'images/rihhanna.jpg',
        name: 'rihanna',
        artist: 'rihanna',
        music: 'music/we found love.mp3'
    },
];

loadTrack(track_index);

function loadTrack(track_index){
    clearinterval(updateTimer);
    reset();
    
    curr_track.src = music_list(track_index).music;
    curr_track.load();

    track_art.style.backgroundImage = "url(" + music_list[track_index].img + ")";
    track_name.textContent = music_list[track_index].name;
    track_artist.textContent = music_list[track_index].artist;
    now_playing.textContent = "playing music " + [track_index + 1] + " of " + music_list.length;

    updateTimer = setInterval(setUpdate, 1000);

    curr_track.addEventListener('ended', nextTrack);
    random_bg_color();
}

let now_paying = document.querySelector('.now_playing');
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
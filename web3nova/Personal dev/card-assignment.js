
// const button = document.getElementById('button');
// const container = document.getElementById('card-container');
// const container2 = document.getElementById('card-container-2');
// const content = document.getElementById('content');
// const content2 = document.getElementById('content-2');

// button.addEventListener('click', function () {
//     document.body.style.backgroundColor = 'black';
//     document.body.style.transition = 'background-color 0.5s ease';
//     container.style.backgroundColor = 'lightgrey';
//     container.style.transition = 'all 0.5s ease';
//     container2.style.backgroundColor = 'lightgrey';
//     container2.style.transition = 'all 0.5s ease';
//     content.textContent = 'Email: tanitoluwakeshinro@gmail.com \nPhone: 09078637040';
//     content2.textContent = 'Email: joseph07092006@gmail.com \nPhone: 09139996817';
//     button.textContent = 'About Me';
//     resetbtn.textContent = 'About Me';
// });

// const resetbtn = document.getElementById('resetbtn');
// resetbtn.addEventListener('click', function () {
//     document.body.style.backgroundColor = '';
//     container.style.backgroundColor = '';
//     container2.style.backgroundColor = '';
//     content.textContent = 'Frontend Developer passionate about building excellent software that improves the lives of those around me.';
//     content2.textContent = 'Backend Developer specializing in Node.js and database management';
//     button.textContent = 'Contact';
//     resetbtn.textContent = 'Contact';
// });
// End of code and the beginning of a new line of code
const button = document.querySelector('#button');
const resetbtn = document.querySelector('#resetbtn');
const container = document.querySelector('#card-container');
const container2 = document.querySelector('#card-container-2');
const content = document.querySelector('#content');
const content2 = document.querySelector('#content-2');

button.addEventListener ('click', () => {
    document.body.classList.add('dark-mode');
    container.classList.toggle('card-active');
    container2.classList.add('card-active');

    content.textContent = 'Email: tanitoluwakeshinro@gmail.com \nPhone: 09078637040';
    content2.textContent = 'Email: joseph07092006@gmail.com \nPhone: 09139996817';

    button.textContent = 'About Me';
    resetbtn.textContent = 'About Me';
});

resetbtn.addEventListener ('click', () => {
    document.body.classList.remove('dark-mode');
    container.classList.remove('card-active');
    container2.classList.remove('card-active');

    content.textContent = 'Frontend Developer passionate about building excellent software that improves the lives of those around me.';
    content2.textContent = 'Backend Developer specializing in Node.js and database management';

    button.textContent = 'Contact';
    resetbtn.textContent = 'Contact';
});
const cards = document.querySelectorAll('.card');

cards.forEach(card => {
    card.addEventListener('click', () => {
        card.classList.toggle('card-active');
    });
});
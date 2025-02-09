const color = [
    "#1230AE",
    '#6C48C5',
    '#16423C',
    '#BF2EF0',
    '00712D',
    'A02334',
]

const card = document.querySelector('.color')
const button = document.querySelector('button')

button.addEventListener('click', function(){
    const rand = Math.floor(Math.random() * color.length)
    card.style.backgroundColor = color[rand]
})
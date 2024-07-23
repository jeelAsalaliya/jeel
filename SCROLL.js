let scrollToTop = document.getElementById('scrollToTop');

window.addEventListener('scroll', () => {
    if (window.scrollY > 100) {
        scrollToTop.classList.add('active');
    } else {
        scrollToTop.classList.remove('active');
    }
})
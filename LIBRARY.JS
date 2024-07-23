
const books = [
    { title: "Book 1", author: "Author 1", description: "Description 1" },
    { title: "Book 2", author: "Author 2", description: "Description 2" },
    { title: "Book 3", author: "Author 3", description: "Description 3" }
];
function displayBookDetails(book) {
    const bookDetailsSection = document.getElementById('book-details');
    bookDetailsSection.innerHTML = `
        <h2>${book.title}</h2>
        <p><strong>Author:</strong> ${book.author}</p>
        <p><strong>Description:</strong> ${book.description}</p>
    `;
}
function displayBookList() {
    const bookListSection = document.getElementById('book-list');
    bookListSection.innerHTML = '';

    books.forEach((book, index) => {
        const bookElement = document.createElement('div');
        bookElement.classList.add('book');
        bookElement.textContent = book.title;
        bookElement.addEventListener('click', () => {
            displayBookDetails(book);
        });
        bookListSection.appendChild(bookElement);
    });
}
displayBookList();

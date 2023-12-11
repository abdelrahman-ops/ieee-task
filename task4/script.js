function submitForm(event) {
    event.preventDefault();

    
    document.getElementById("contactForm").reset();
    document.getElementById("successMessage").classList.remove("hidden");

    // Hide success message after 3 seconds (3000 milliseconds)
    setTimeout(function () {
        document.getElementById("successMessage").classList.add("hidden");
    }, 3000);
}

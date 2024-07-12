document.addEventListener('DOMContentLoaded', function() {
    let btnSubmit = document.getElementById('btnSubmit');
    
    btnSubmit.addEventListener('click', function() {
        let name = document.getElementById('name').value.trim();
        let email = document.getElementById('email').value.trim();
        let password = document.getElementById('password').value.trim();
        let confirmPassword = document.getElementById('confirmpassword').value.trim();
        let gender = document.querySelector('input[name="gender"]:checked');
        let address = document.getElementById('address').value.trim();
        let number = document.getElementById('number').value.trim();

        // Validation for name
        if (name.length < 4) {
            alert("Enter a valid name (at least 4 characters)");
            return;
        }

        // Validation for email
        if (email === "") {
            alert("Enter an email address");
            return;
        } else {
            let emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
            if (!emailRegex.test(email)) {
                alert("Enter a valid email address");
                return;
            }
        }

        // Validation for password
        let strongRegex = new RegExp("^(?=.*[a-z])(?=.*[A-Z])(?=.*[0-9])(?=.*[!@#$%^&*])(?=.{8,})");
        if (!strongRegex.test(password)) {
            alert("Password must contain at least 8 characters including uppercase, lowercase, number, and special character (!@#$%^&*)");
            return;
        }

        // Validation for confirm password
        if (password !== confirmPassword) {
            alert("Passwords do not match");
            return;
        }

        // Validation for gender
        if (!gender) {
            alert("Please select a gender");
            return;
        }

        // Validation for address
        if (address === "") {
            alert("Enter an address");
            return;
        }

        // Validation for phone number
        let phoneRegex = /^[6-9]\d{9}$/;
        if (!phoneRegex.test(number)) {
            alert("Enter a valid 10-digit phone number starting with 6, 7, 8, or 9");
            return;
        }

        // If all validations pass, you can submit the form or perform further actions
        alert("Form validated successfully!");
        // Example: Uncomment the line below to submit the form
        // document.getElementById("registrationForm").submit();
    });
});

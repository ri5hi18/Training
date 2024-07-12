let btn=document.getElementById('btn');
btn.addEventListener('click',()=>
{
    let name=document.getElementById('name');
    let email=document.getElementById('email');
    let pass=document.getElementById('password');
    let cpass=document.getElementById('confirmpassword');
    let gender=document.getElementsByName('gender');
    let address=document.getElementById('address');
    let  number=document.getElementById('number');
    let genderchecked=false;

    if(name.length<4)
    {
        alert("Enter a valid name");
        return false;
    }
    if(!email)
    {
        alert("Enter a email address");
        return false;
    }

    if(!pass==cpass)
    {
        alert("The passwords does not match");
        return false;
    }
    
    for(var i=0;i<gender.length;i++)
    {
        if(gender[i].checked)
        {
            genderchecked=true;
            break;
        }
    }

    if(!genderchecked)
    {
        alert("Please check a gender");
        return false;
    }

    if(number.length!=10)
    {
        alert("Please enter a valid number");
        return;
    }


})
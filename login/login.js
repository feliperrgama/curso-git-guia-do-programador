const fa_lock = document.querySelector(".locker");

fa_lock.addEventListener('mouseover', () => {
   const divI = document.querySelector(".i");
   divI.classList.toggle("teste");
})

fa_lock.addEventListener('mouseout', () => {
   const divI = document.querySelector(".i");
   divI.classList.toggle("teste");
})

fa_lock.addEventListener('click', () => {
   const password = document.querySelector("#password");
   const fa = document.querySelector(".locker");

   fa.classList.toggle("fa-lock");
   fa.classList.toggle("fa-lock-open");

   if(fa.classList.contains("fa-lock-open")) {
      password.setAttribute("type", "text");
   } else {
      password.setAttribute("type", "password");
   }
})
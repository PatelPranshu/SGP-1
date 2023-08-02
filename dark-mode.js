
            function DarkMode() {
            let element = document.body;
            element.classList.toggle("dark-mode");

            let elementsecondh1 = document.getElementById("secondh1");
            elementsecondh1.classList.toggle("dark-mode-secondh");
            
            let elementsecondh2 = document.getElementById("secondh2");
            elementsecondh2.classList.toggle("dark-mode-secondh");

            let elementsecondh3 = document.getElementById("secondh3");
            elementsecondh3.classList.toggle("dark-mode-secondh");

            let elementsecondh4 = document.getElementById("secondh4");
            elementsecondh4.classList.toggle("dark-mode-secondh");
            
            let elementimg = document.getElementById("imgClickAndChange");
            elementimg.classList.toggle("dark-mode-light");

            let elementBimg = document.getElementById("index");
            elementBimg.classList.toggle("DarkIndex");
            
            let elementdarkBox = document.getElementById("LBox");
            elementdarkBox.classList.toggle("darkLBox");
            
            // let imgs = document.getElementById('Aimg');
            // if (imgs.src.match("images/index background image.jpg")) {
            //     imgs.src = "images/login index background image.jpg";
            // }
            // else {
            //     imgs.src = "images/index background image.jpg";
            // }
            // event.preventDefault();
            // let elementsecondh2Box = document.getElementById("box1");
            // elementsecondh2Box.classList.toggle("dark-mode-border");
            // if (document.getElementById("imgClickAndChange").src == "mages/icons/darkmode.png"){
            //     document.getElementById("imgClickAndChange").src = "images/icons/light-mode.png";
            // } else 
            // {
            //     document.getElementById("imgClickAndChange").src = "images/icons/light-mode.png";
            // }
            }
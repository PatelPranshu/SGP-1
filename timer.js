setTimeout(function(){
    window.location.href = 'css page.html';
    var executed = false;
    return function() {
        if (!executed) {
            executed = true;
        }
    };
 }, 3000);
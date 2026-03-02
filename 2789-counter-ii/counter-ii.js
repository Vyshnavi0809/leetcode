/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let number=init;
    return {
        increment: function(){
            number++;
            return number;
        },
        decrement: function(){
            number--;
            return number;
        },
        reset: function(){
            number = init;
            return number;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
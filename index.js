const { Stemming } = require('./build/Release/addon.node');


module.exports = {
    Stemming : (text) => {
        return Stemming(text);
    }
}
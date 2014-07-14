var arr  = ['hello','goodbye','varza','hello','varza','hello',1,2,3,4,5,6,7,8,9,0,1,2,3];
var hash = [];

for (var n=arr.length; n--; ){
   if (typeof hash[arr[n]] === 'undefined') hash[arr[n]] = [];
   hash[arr[n]].push(n);
}

var duplicates = [];
for (var key in hash){
    if (hash.hasOwnProperty(key) && hash[key].length > 1){
        duplicates.push(key);
    }
}

alert(duplicates);
// By generating common forms:

// Time complexity: O(nm²)
// Space complexity: O(nm²)

function transformationSequenceLength(beginWord, endWord, wordList) {
    if (wordList.length == 0 || !wordList.includes(endWord)) return 0;
    let lenWord = wordList[0].length;
    let forms = {};
    for (let word of wordList) {
        for (let i = 0; i < lenWord; i++) {
            let form = word.substring(0, i) + '*' + word.substring(i + 1);
            if (forms[form] === undefined) forms[form] = [];
            forms[form].push(word);
        }
    }
    let visited = new Set([]);
    let queue = [[beginWord, 0]];
    let i = 0;
    while (i < queue.length) {
        let word = queue[i][0];
        let level = queue[i][1];
        i++;
        if (word == endWord) {
            return level + 1;
        } else {
            for (let j = 0; j < lenWord; j++) {
                let form = word.substring(0, j) + '*' + word.substring(j + 1);
                if (forms[form] !== undefined) {
                    for (let transformation of forms[form]) {
                        if (!visited.has(transformation)) {
                            queue.push([transformation, level + 1]);
                            visited.add(transformation);
                        }
                    }
                }
            }
        }
    }
    return 0;
}

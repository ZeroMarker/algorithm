let array = ['张三','李四','王五'];
array.sort((a, b) => a.localeCompare(b, 'zh-Hans-CN', {sensitivity: 'accent'}));

console.log(array);

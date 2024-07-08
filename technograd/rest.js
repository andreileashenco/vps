const express = require('express')
const app = express()
const port = 3000

app.get ('/', (reg,res) => {
    res.end('<h1>Hello all</h1>')
})
app.listen(port, () => console.log(`http://localhost:${port}`))
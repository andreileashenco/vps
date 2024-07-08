// const http = require('http')

// const hostname = 'locallhost'
// const port = 3000//или 3000

// const server = http.createServer((reg,res) => {
// res.statusCode = 200
// res.setHeader('Content-Type', text/plain)
// res.end('Hello')

// })

// server.listen(port, hostname, () => {

//     console.log(`http://${hostname}:${port}`)

// })

const express = require('express')
const app = express()
const port = 3000

app.get ('/', (reg,res) => {
    res.end('Hello')
})
app.listen(port, () => console.log(`http://localhost:${port}`))

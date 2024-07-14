import { useState } from 'react'
import './App.css'
import AddTodo from './components/AddTodo'
import Todos from './components/Todos'

function App() {

  return (
    <>
      <h1>learn about reduxtoolkit
        <AddTodo />
        <Todos />
      </h1>

    </>
  )
}

export default App

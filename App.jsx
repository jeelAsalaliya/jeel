import { useEffect, useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import axios from 'axios'

function App() {
  // const [products, error, loading] = customReactQuery('/api/products')

  const customReactQuery = () => {
    const [products, setProducts] = useState([])
    const [error, setError] = useState(false)
    const [loading, setLoading] = useState(false)
    const [search, setSearch] = useState('')

    useEffect(async () => {
      const controller = new AbortController()
        ; (async () => {
          try {
            setLoading(true)
            setError(false)
            const response = await axios.get('/api/products?search = ' + search, {
              signal: controller.signal
            })
            console.log(response.data);
            setProducts(response.data)
            setLoading(false)
          } catch (error) {
            if (axios.isCancel(error)) {
              log('request cancelled', error.message)
              return
            }
            setError(true)
            setLoading(false)
          }
        })()
      return () => {
        controller.abort()
      }
    }, [search])
  }

  return (
    <>
      <h1>chai aur api in react</h1>
      <input type='text' placeholder='search' value={search}
        onChange={(e) => setSearch(e.target.value)}></input>
      {loading && <h1>Loading...</h1>}
      {error && <h1>something went wrong..</h1>}
      <h2>Number Of Products Are:{products.length}</h2>
    </>
  )
}

export default App



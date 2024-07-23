
import './App.css';
import Nav from './components/Nav';
import { BrowserRouter, Route, Routes } from 'react-router-dom';
import Footer from './components/Footer';
import SignUp from './components/SignUp';
import privatecomponent from './components/privatecomponent';
import login from './components/login';
import addproduct from './components/addproduct';
import productList from './components/productList';
import updateproduct from './components/updateproduct';

function App() {
  return (
    <div className="App">
      <BrowserRouter>
        <Nav />
        <Routes>
          <Route element={<privatecomponent />}>
            <Route path='/' element={<productList />} />
            <Route path='/Add' element={<addproduct>add products</addproduct>} />
            <Route path='/Update/:id' element={<updateproduct />} />
            <Route path='/logout' element={<h1>logout Component</h1>} />
            <Route path='/Profile' element={<h1>Profile Component</h1>} />
          </Route> 
          <Route path='/signup' element={<SignUp />} />
          <Route path='/login' element={<login />} />
        </Routes>
      </BrowserRouter>
      <Footer />
    </div >
  );
}

export default App;

import styled from 'styled-components';
const HeaderComponent=styled.div`
    height: 20px;
    //width:  100vw;
    padding: 10px;
    background: gray;
    display: flex;
    justify-content: center;
`
const TitleComponent=styled.div`
  height: 20px;
  width: 50%;
  border-radius: 4px;
  padding: 0 20px;
  background: lightgray;
  font-weight: bold;
  display: flex;
  align-items: center;
  justify-content: center;
  white-space: pre;
  word-spacing: 2px;
  transition: 500ms ease;
  &:hover {
    word-spacing: 8px;
    font-size: larger;
  }
`
const Header = ()=>{
    return  <HeaderComponent>
        <TitleComponent>T e a m    B o a r d</TitleComponent>
    </HeaderComponent>

}
export default  Header;
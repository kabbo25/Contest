import styled from 'styled-components';
const CardComponent=styled.div`
  background: gray;
  font-size: 11px;
  line-height: 4px;
  padding: 10px 10px;
  border-radius: 4px;
`

export type ICardProp = {
    title: string,
    description: string,
    priority: "High" | "Medium" | "Low",
    status: "To-do" | "In-Progress" | "Done"
}
const Card = ({title,description,priority,status}:ICardProp)=>{
    console.log(title)
    return  <CardComponent>
        <p> Title : {title}</p>
        <p> Description: {description}</p>
        <p> Priority: {priority}</p>
        <p> Status: {status}</p>
    </CardComponent>

}
export default  Card;
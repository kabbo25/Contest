import styled from 'styled-components';
import Card from './card';
import {ICardProp} from "./card";

const ColumnComponent = styled.div`
  width: 30vw;
  padding: 4px;
  height: 80vh;
  margin-top: 4px;
  background: lightgray;
`

const Column = (tasks: ICardProp[]) => {
    {
        console.log(tasks.length)
    }
    return <ColumnComponent>
        <Card {...tasks[0]}></Card>
        <Card {...tasks[0]}></Card>
        <Card {...tasks[0]}></Card>

    </ColumnComponent>;

}
export default Column;
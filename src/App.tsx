import styled from 'styled-components';
import Header from "./header.tsx";
import Column from "./Column.tsx";
import { ICardProp } from "./card.tsx";

const RootComponent = styled.div`
    height: 100vh;
    width:  100vw;
    background: white;
`

const dummyTask: ICardProp[] = [{
    title: "Gym",
    description: "Go to Gym 7am",
    priority: "High",
    status: "In-Progress"
}, {
    title: "Gym",
    description: "Go to Gym 7pm",
    priority: "High",
    status: "In-Progress"
}, {
    title: "Gym",
    description: "Go to Gym 7pm",
    priority: "High",
    status: "In-Progress"
}, {
    title: "Gym",
    description: "Go to Gym 7pm",
    priority: "High",
    status: "In-Progress"
}];

const App = () => {
    return (
        <RootComponent>
            <Header />
            <Column {...dummyTask} /> {/* Pass dummyTask array as 'tasks' prop */}
        </RootComponent>
    );
}

export default App;

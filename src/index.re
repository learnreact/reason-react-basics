[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";

/* day 2: Hello World, with JSX */
ReactDOMRe.renderToElementWithId(<h1 className="some-class"> (ReasonReact.stringToElement({j|Hello 🎄|j})) </h1>, "root");

register_service_worker();

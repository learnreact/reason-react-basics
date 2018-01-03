[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";

/* day 1: Hello World, no JSX */
/* utilizes quote strings: https://reasonml.github.io/guide/language/string-and-char/#quoted-string */
/* utilizes uncapitalized tag: https://reasonml.github.io/guide/language/jsx#uncapitalized-tag */
ReactDOMRe.renderToElementWithId(([@JSX] h1(~className="some-class", ~children=[(ReasonReact.stringToElement({j|Hello 🎄|j}))], ())), "root");

register_service_worker();

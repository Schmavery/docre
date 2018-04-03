
let head = name => Printf.sprintf({|
<!doctype html>
<meta charset=utf8>
<style>
body {
  font-family: system-ui;
  font-weight: 200;
  max-width: 600px;
  margin: 48px auto;
}
.body {
  margin-left: 24px;
  margin-bottom: 48px;
  line-height: 1.5em;
  font-size: 20px;
  letter-spacing: 1px;
}
.body-empty,
.include-body .body {
  margin-bottom: 16px;
}
.missing {
  font-style: italic;
  font-size: 16px;
  color: #777;
}
h1, h2 {
  margin-top: 24px;
}
h4.item {
  font-family: sf mono, monospace;
  font-weight: 400;
  padding-top: 8px;
  border-top: 1px solid #ddd;
  white-space: pre;
}
h4.module {
  font-size: 110%%;
  font-weight: 600;
}
.module-body {
  border-left: 5px solid #ddd;
  padding-left: 24px;
}

p code {
  padding: 1px 4px;
  background: #eee;
  border-radius: 3px;
  font-family: 'sf mono', monospace;
  font-size: 0.9em;
}

a {
  text-decoration: none;
}
a:hover, a:focus {
  text-decoration: underline;
}

.doc-item {
  font-size: 16px;
}

#error-message {
  display: none;
  background-color: #fde6e6;
  padding: 8px 16px;
  border-radius: 4px;
  box-shadow: 0px 1px 3px #d8a2a2;
  margin-bottom: 32px;
}

</style>
<script>
var checkHash = () => {
  var id = window.location.hash.slice(1)
  if (id && !document.getElementById(id)) {
    document.getElementById("error-message").style.display = 'block'
    var parts = id.split('-')
    document.querySelector('#error-message span').textContent = parts[0]
    document.querySelector('#error-message code').textContent = parts[1]
  }
}
window.onload = () => {
  checkHash()
}
window.onhashchange = checkHash
</script>
<title>%s</title>
<body>
<div id='error-message'>
  ⚠️ Oops! This page doesn't appear to define a <span>type</span> called <code>_</code>.
</div>
|}, name);

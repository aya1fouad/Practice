async function getPromise() {
    const url = "https://jsonplaceholder.typicode.com/users"
    try {
        let response = await fetch(url, { method: 'GET' });
        let data = await response.json();
        console.log(data);

        data.forEach(user => {
          $("#mytable").append(`<tr>

          <td>${user.id}</td>
          <td>${user.name}</td>
          <td>${user.username}</td>
          <td>${user.email}</td> 
          <td><b>city:</b>${user.address.city}<br>
          <b>street:</b>${user.address.street}<br>
          <b>zipcode:</b>${user.address.zipcode}<br>
          <b>suite:</b>${user.address.suite}<br>
          <b>geo lat:</b>${user.address.geo.lat}<br>
          <b>geo lng:</b>${user.address.geo.lng}</td>
          <td>${user.phone}</td>
          <td>${user.website}</td>
          <td> <b>bs:</b> ${user.company.bs}<br>
          <b>name:</b> ${user.company.name}<br>
          <b>catchPhrase:</b> ${user.company.catchPhrase}</td>
         
          </tr>`)
        });

    }
     catch (err) {
        console.log(err)
    }
}
function init() {
	var saveInfo = document.getElementById('save-info');
	var modal = document.getElementById('modal');
	var container = document.getElementsByClassName('container')[0];
	var welcome = document.getElementById('welcome');
	var gender;
	var surname = document.getElementsByName('surname')[0];
	var name = document.getElementsByName('name')[0];
	saveInfo.onclick = function() {
		modal.style.display = "none";
		document.getElementsByTagName('form')[0].style.display = "none";
		container.style.display = "block";
		if (document.getElementById('female').checked == true) {
			gender = "Mrs. ";
		} else if (document.getElementById('male').checked == true) {
			gender = "Mr. ";
		}
		greeting.innerHTML = "Hi, " + gender + " " + name.value + " " + surname.value;
	}
	var saveInfo2 = document.getElementById("save-info2");
	var savedForms = document.getElementById("saved-forms");
	var div = document.createElement("div");
	var p1 = document.createElement("p");
	var p2 = document.createElement("p");
	var p3 = document.createElement("p");
	var p4 = document.createElement("p");
	var p5 = document.createElement("p");
	var p6 = document.createElement("p");
	saveInfo2.onclick = function() {
		savedForms.append(div);
		div.style.border = "2px solid #a3a3a3";
		div.style.padding = "5px";
		div.style.backgroundColor= "#fff";
		div.style.marginBottom = "5px";
		div.append(p1);
		p1.className = "name";
		document.getElementsByClassName("name")[0].innerHTML = "Name: " + document.getElementsByName("name")[0].value;
		div.append(p2);
		p2.className = "surname";
		document.getElementsByClassName("surname")[0].innerHTML = "Surname: " + document.getElementsByName("surname")[0].value;
		div.append(p3);
		p3.className = "phone";
		document.getElementsByClassName("phone")[0].innerHTML = "Phone: " + document.getElementsByName("phone")[0].value;
		div.append(p4);
		p4.className = "country";
		document.getElementsByClassName("country")[0].innerHTML = "Country: " + document.getElementsByName("country")[0].value;
		div.append(p5);
		p5.className = "city";
		document.getElementsByClassName("city")[0].innerHTML = "City: " + document.getElementsByName("city")[0].value;
		div.append(p6);
		p6.className = "address";
		document.getElementsByClassName("address")[0].innerHTML = "Address: " + document.getElementsByName("address")[0].value;
	}
}
window.onload = init;
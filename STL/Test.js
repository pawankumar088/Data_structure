< !DOCTYPE html >
    <html lang="en" dir="ltr">

        <head>
            <meta charset="utf-8">
                <title>
                    How to take array input using JavaScript
                </title>
        </head>

        <body style="text-align: center;">
            <form>
                <h1>Please enter data</h1>
                <br>
                    <label for="Name">Name</label>
                    <input id="name" type="text">
                        <br>

                            <br>
                                <label for="Age">Age</label>
                                <input id="age" type="text">
                                    <br>
                                        <br>
                                            <label for="city">City</label>
                                            <input id="City" type="text">
                                                <br>

                                                    <br>
                                                        <input type="button" value="Save" onclick="savedata()">
                                                            <input type="button" value="Show data" onclick="displayData()">
                                                                <br>
                                                                </form>
                                                                <div id="display"></div>

                                                                <script type="text/javascript">
                                                                    var arrCitys=new Array();
                                                                    var arrNames=new Array();
                                                                    var arrAges=new Array();

                                                                    function savedata(){
    var name = document.getElementById('name').value;
                                                                    var city = document.getElementById('City').value;
                                                                    var age = document.getElementById('age').value;
                                                                    arrCitys[arrCitys.length]=city;
                                                                    arrNames[arrNames.length]=name;
                                                                    arrAges[arrAges.length]=age;
  }


                                                                    function displayData()
                                                                    {
  var content="<b>Data Entered by User :</b><br>";
                                                                        content+= [...arrNames]+"</br>";
                                                                    content+=[...arrCitys]+"</br>";
                                                                content+=[...arrAges]+"</br>";

                                                            document.getElementById('display').innerHTML = content;
}


                                                        </script>

                                                    </body>
                                                </html>
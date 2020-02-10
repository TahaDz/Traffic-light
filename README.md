# Traffic-light

we realize an intelligent traffic light including:
the main road which has as traffic light “feu1”:
- Normally has a green light.
Sensor:
- A car on the side road triggers the sensor.
• The road light: green => yellow => red,
• Side road light “feu2”: red => green => yellow.

If a car triggers the sensor it sends its speed to the "traffic light" of the main road,
the latter calculates the time it takes for the car to reach the intersection:
- If there is enough time for one or more cars to pass, then the light remains green for a period less than or equal to that which the car will take to arrive at the intersection, then it will turn yellow then red and the traffic light for the side road "feu2" will turn green.
- Otherwise “feu1” will go directly to yellow after red and feu2 becomes green for a period equal to the period of arrival at the intersection + the period for the car to pass the intersection.

We suppose that :

- The sensor is located 50 meters from “feu2”.
- the maximum period for a car to pass the intersection is "4" seconds

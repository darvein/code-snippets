// Package weather forecasts current weather conditions.
package weather

// CurrentCondition represents current condition.
var CurrentCondition string

// CurrentLocation represents current location.
var CurrentLocation string

// Forecast returns current location weather condition.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}

#include "length.h"

//Imperial Conversions
double footToInch(double foot) { return foot * 12.0; }
double footToYard(double foot) { return foot / 3.0; }
double footToMile(double foot) { return foot / 5280.0; }

double inchToFoot(double inch) { return inch / 12.0; }
double yardToFoot(double yard) { return yard * 3.0; }
double mileToFoot(double mile) { return mile * 5280.0; }

//Metric Conversions
double meterToMillimeter(double meter) { return meter * 1000.0; }
double meterToCentimeter(double meter) { return meter * 100.0; }
double meterToKilometer (double meter) { return meter / 1000.0; }

double millimeterToMeter(double millimeter) { return millimeter / 1000.0; }
double centimeterToMeter(double centimeter) { return centimeter / 100.0; }
double kilometerToMeter (double kilometer)  { return kilometer * 1000.0; }

//Imperial to Metric Conversions
double footToMeter(double foot)  { return foot / 3.28084; }
double meterToFoot(double meter) { return meter * 3.28084; }

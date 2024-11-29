#include "Auto.h"
#include "Engine/Electric.h"
#include "Engine/V8Engine.h"
#include "Engine/I4Engine.h"
#include "Suspension/Soft.h"
#include "Suspension/Sportive.h"
#include "Suspension/Terrain.h"
#include <iostream>

int main() {
    // Beispiel: Porsche Taycan mit elektrischem Motor und sportlichem Fahrwerk
    Electric electricEngine;
    Soft softSuspension;

    electricEngine.showType();
    softSuspension.showType();

    return 0;
}

#include "intro.h"

const char* const introParagraphs[] = {
    "They called it the MagnetoDynamic Induction Bomb: the MDIB.\n\n"
    "Though nowadays it's just known as that which brought the WYRMs upon us.",

    "As modern warfare increasingly centred upon missile silos buried beneath fortified bunker complexes,\n"
    "a method was devised to destroy such targets by generating a rapidly oscillating magnetic field on a scale never before attempted.",

    "The resulting pulses induced immense eddy currents in all metal across several miles,\n"
    "superheating steel reinforcement, rupturing pipelines, warping machinery and turning the target's own infrastructure against it.",

    "The first fullscale device was tested deep underground.\n\n"
    "The surrounding rock was supposed to contain the effect.",

    "Instead, the pulse coupled with the conductive core of the Earth, destabilising the planet's magnetic field.",

    "Then came the solar wind.",

    "Within days, satellites, power grids, communications networks, and exposed electronic systems began to fail.\n\n"
    "Repeated solar storms destroyed what remained and prevented any lasting recovery.",

    "The machines did not all fail in the storms.\n\n"
    "The civilisation required to maintain them did.",

    "Trying to protect advanced equipment from the solar wind was pointless.\n"
    "If a single specialised component failed, there was no functioning advanced industry left capable of replacing it.",

    "New machinery was eventually developed that could survive the solar radiation, trading complex electronics for mechanical controls - nanometric silicon for robust iron, oil and steam.",

    "Scrambling for solutions, a new generation of machine was developed to reclaim civilisation from chaos:",

    "The WaYfaring Reclamation Machine:\n\n"
    "The WYRM.",

    "Relying solely on hydraulic controls and primitive diesel engines,\n"
    "the WYRMs' long articulated bodies could crawl through ravaged terrain that ordinary vehicles could not.",

    "Their armour consisted of replaceable plates, allowing damaged sections to be replaced with whatever materials remained available.",

    "Their most powerful tool was the hydraulic breaching stroke, which drove the machine's armoured body into concrete and wreckage with immense force.\n\n"
    "Governments began to mass-produce them in the thousands.",

    "But reclamation never came.",

    "As the last remnants of centralised civilisation died out, the WYRMs were abandoned, stolen, and scattered into private hands.",

    "They quickly became powerful weapons of war, turning their breaching strokes against one another.",

    "Ownership was a near-guarantee of safety in a terminally hostile world.",

    "You heard rumours of one of the last undiscovered depots\n"
    "of government-issue WYRMs.",

    "And you got there first.",

    "Now, one of the great machines of the old world is yours.",

    "After climbing inside, you inspect the user manual:\nit explains that you can choose any of the 3 outermost plates to attack with, selecting them with the machine's inbuilt dpad.",
    "And that every plate has two main attributes:\n\nIntegrity (I):\nhow much damage it can withstand\n\nPower (P):\nhow much damage it can deal",

    "But there's no time for reading right now...\n\n",
    "A rival managed to track you down using a WYRM of their own.",

    "You prepare to attack!"
    ""
};

size_t GetIntroParagraphCount(void) {
    return sizeof(introParagraphs) / sizeof(introParagraphs[0]);
}

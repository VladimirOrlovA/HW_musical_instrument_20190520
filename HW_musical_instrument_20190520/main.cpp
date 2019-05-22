#include"drum.h"
#include"stringed.h"
#include"wind.h"
#include"orchestra.h"

void main()
{
	orchestra r("Relax");
	//r.addInstrument(new percussion("wood", "leader", "drum", "hourglass",22));
	r.addInstrument(new drum("wood", "leader", "drum", "hourglass", 22));
	r.addInstrument(new guitar("wood", "steel", "giutar", "spanish", 7));
	r.addInstrument(new saxophone("brass", "steel", "saxophone", "tenor"));
	r.info();

	system("pause");
}
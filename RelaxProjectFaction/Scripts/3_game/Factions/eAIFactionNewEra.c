[eAIRegisterFaction(eAIFactionNewEra)]
class eAIFactionNewEra : eAIFaction
{
	void eAIFactionNewEra()
	{
		// The name of your Faction
		m_Name = "NewEra";

		// The name of the loadout your Faction will use by DEFAULT
		// used if the server doesn't specify a loadout
		m_Loadout = "NewEraLoadout";
		
		// Is this Faction meant to behave like Guards
		m_IsGuard = true;
	}

	// Used to check if the target Faction should be considered Friendly
	override bool IsFriendly(notnull eAIFaction other)
	{
		// If you dont want your own Faction to kill each others make them friendly to their own Faction
		if (other.IsInherited(eAIFactionNewEra)) return true;

		return false;
	}
};
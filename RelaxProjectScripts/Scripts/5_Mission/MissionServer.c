/**
 * MissionServer.c
 *
 * DayZ Expansion Mod
 * www.dayzexpansion.com
 * © 2022 DayZ Expansion Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License.
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 *
*/

/**@class		MissionServer
 * @brief		
 **/

modded class MissionServer
{
	ExpansionRespawnHandlerModule m_RespawnHandlerModule;

	// ------------------------------------------------------------
	// MissionServer Constructor
	// ------------------------------------------------------------
	void MissionServer()
	{
#ifdef EXPANSIONTRACE
		auto trace = CF_Trace_0(ExpansionTracing.GLOBAL, this, "MissionServer");
#endif

		//! 3_Game cannot call classes from 4_World - This 2 lines are not mandatory for any systems to work properly. Just to make it to generate on server startup
		ExpansionHumanLoadout.Init();

		CF_Modules<ExpansionRespawnHandlerModule>.Get(m_RespawnHandlerModule);
	}

	// ------------------------------------------------------------
	// EquipCharacter
	// ------------------------------------------------------------
	override void EquipCharacter(MenuDefaultCharacterData char_data)
	{
		if (GetExpansionSettings().GetSpawn().StartingClothing.EnableCustomClothing)
		{
			m_RespawnHandlerModule.ExpansionEquipCharacter(m_player);
		} else
		{
			super.EquipCharacter(char_data);
		}
	}
}
    
override PlayerBase OnClientNewEvent(PlayerIdentity identity, vector pos, ParamsReadContext ctx){
PlayerBase player = super.OnClientNewEvent(identity, pos, ctx);

    #ifdef TBRevivePlayerClient
    // Check if the player is in an emergency
	TBREmergency emergency = TBREmergencies.Get().GetEmergency(identity.GetId());
	if (emergency) {
    	// If the player is in an emergency, spawn him in the hospital or on the position of the emergency dont us the spawn selection mod
		return player;
	}
		#endif
		
		... here comes the content of your Spawn Selection Mod
		
		return player;
    }

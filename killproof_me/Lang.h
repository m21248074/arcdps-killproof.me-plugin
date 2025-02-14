#pragma once

#include "extension/arcdps_structs.h"

#include <magic_enum.hpp>

#include "extension/ExtensionTranslations.h"
#include "extension/Localization.h"

template<size_t A, size_t B> struct TAssertEquality {
  static_assert(A==B, "Not equal");
  static constexpr bool _cResult = (A==B);
};

constexpr auto enumMax = magic_enum::detail::max_v<ExtensionTranslation, magic_enum::as_common<>>;

static constexpr bool _cIsEqual = 
  TAssertEquality<enumMax, 47>::_cResult;
// static_assert(enumMax == 48);

enum KillproofMeTranslations {
	KMT_AccountName = enumMax + 1,
	KMT_CharacterName,
	KMT_KillproofId,
	KMT_SubgroupText,
	KMT_Li_Short,
	KMT_Ld_Short,
	KMT_LiLd_Short,
	KMT_Uce_Short,
	KMT_Ufe_Short,
	KMT_Vg_Short,
	KMT_Vg_Long,
	KMT_Gorse_Short,
	KMT_Gorse_Long,
	KMT_Sabetha_Short,
	KMT_Sabetha_Long,
	KMT_Sloth_Short,
	KMT_Matthias_Short,
	KMT_Matthias_Long,
	KMT_Escort_Short,
	KMT_Kc_Short,
	KMT_Kc_Long,
	KMT_Xera_Short,
	KMT_Cairn_Short,
	KMT_Cairn_Long,
	KMT_Mo_Short,
	KMT_Mo_Long,
	KMT_Samarog_Short,
	KMT_Deimos_Short,
	KMT_Desmina_Short,
	KMT_Desmina_Long,
	KMT_River_Short,
	KMT_River_Long,
	KMT_Statues_Short,
	KMT_Dhuum_Short,
	KMT_Ca_Short,
	KMT_Ca_Long,
	KMT_Twins_Short,
	KMT_Twins_Long,
	KMT_Qadim_Short,
	KMT_Sabir_Short,
	KMT_Adina_Short,
	KMT_Qadim2_Short,
	KMT_Qadim2_Long,
	KMT_BoneskinnerVial_Short,
	KMT_BoneskinnerVial_Long,
	KMT_Ankka_Short,
	KMT_Ankka_Long,
	KMT_MinisterLi_Short,
	KMT_MinisterLi_Long,
	KMT_Harvest_Short,
	KMT_Harvest_Long,
	KMT_MaiTrin_Short,
	KMT_MaiTrin_Long,
	KMT_MaiTrinCM_Short,
	KMT_MaiTrinCM_Long,
	KMT_AnkkaCM_Short,
	KMT_AnkkaCM_Long,
	KMT_MinisterLiCM_Short,
	KMT_MinisterLiCM_Long,
	KMT_HarvestCM_Short,
	KMT_HarvestCM_Long,
	KMT_OLC_Short,
	KMT_OLC_Long,
	KMT_OLCCM_Short,
	KMT_OLCCM_Long,
	KMT_CO_Short,
	KMT_CO_Long,
	KMT_COCM_Short,
	KMT_COCM_Long,
	KMT_FEBE_Short,
	KMT_FEBE_Long,
	KMT_Bananas,
	KMT_KpWindowNameDefault,
	KMT_AppearAsInOptionDefault,
	KMT_SettingsShowPrivateText,
	KMT_SettingsShowControls,
	KMT_SettingsShowLinkedByDefault,
	KMT_SettingsShowCommander,
	KMT_SettingsBlockedText,
	KMT_ShowLinkedTotals,
	KMT_UnofficialExtrasNotInstalled,
	KMT_AddPlayerTooltip,
	KMT_AddPlayerText,
	KMT_ClearText,
	KMT_ClearTooltip,
	KMT_CopyKpIdText,
	KMT_Overall,
	KMT_Killproofs,
	KMT_Coffers,
	KMT_SettingsDisableESCText,
	KMT_SettingsCofferValue,
	KMT_SettingsHideExtrasMessage,
	KMT_SettingsClearCacheText,
	KMT_SettingsClearCacheTooltip,
	KMT_LanguageAsIngameTooltip,
	KMT_LanguageGermanTooltip,
	KMT_LanguageFrenchTooltip,
	KMT_LanguageSpanishTooltip,
	KMT_Raids,
	KMT_Fractals,
	KMT_Strikes,
	KMT_Misc,
	KMT_LanguageChineseTooltip
};

constexpr std::array KILLPROOF_ME_TRANSLATION_ENGLISH = std::to_array({
	u8"Account", // KMT_AccountName
	u8"Character", // KMT_CharacterName
	u8"ID", // KMT_KillproofId
	u8"Group", // KMT_SubgroupText
	u8"LI", // KMT_Li_Short
	u8"LD", // KMT_Ld_Short
	u8"LI+LD", // KMT_LiLd_Short
	u8"UCE", // KMT_Uce_Short
	u8"UFE", // KMT_Ufe_Short
	u8"VG", // KMT_Vg_Short
	u8"Vale Guardian", // KMT_Vg_Long
	u8"Gorse", // KMT_Gorse_Short
	u8"Gorseval the Multifarious", // KMT_Gorse_Long
	u8"Sabetha", // KMT_Sabetha_Short
	u8"Sabetha the Saboteur", // KMT_Sabetha_Long
	u8"Sloth", // KMT_Sloth_Short
	u8"Matthias", // KMT_Matthias_Short
	u8"Matthias Gabrel", // KMT_Matthias_Long
	u8"Escort", // KMT_Escort_Short
	u8"KC", // KMT_Kc_Short
	u8"Keep Construct", // KMT_Kc_Long
	u8"Xera", // KMT_Xera_Short
	u8"Cairn", // KMT_Cairn_Short
	u8"Cairn the Indomitable", // KMT_Cairn_Long
	u8"MO", // KMT_Mo_Short
	u8"Mursaat Overseer", // KMT_Mo_Long
	u8"Samarog", // KMT_Samarog_Short
	u8"Deimos", // KMT_Deimos_Short
	u8"Desmina", // KMT_Desmina_Short
	u8"Soulless Horror (Desmina)", // KMT_Desmina_Long
	u8"River", // KMT_River_Short
	u8"River of Souls", // KMT_River_Long
	u8"Statues", // KMT_Statues_Short
	u8"Dhuum", // KMT_Dhuum_Short
	u8"CA", // KMT_Ca_Short
	u8"Conjured Amalgamate", // KMT_Ca_Long
	u8"Twins", // KMT_Twins_Short
	u8"Twin Largos", // KMT_Twins_Long
	u8"Qadim", // KMT_Qadim_Short
	u8"Sabir", // KMT_Sabir_Short
	u8"Adina", // KMT_Adina_Short
	u8"Qadim2", // KMT_Qadim2_Short
	u8"Qadim the Peerless", // KMT_Qadim2_Long
	u8"Vial", // KMT_BoneskinnerVial_Short
	u8"Boneskinner Ritual Vial", // KMT_BoneskinnerVial_Long
	u8"Ankka", // KMT_Ankka_Short
	u8"Xunlai Jade Junkyard (Ankka)", // KMT_Ankka_Long
	u8"KO", // KMT_MinisterLi_Short
	u8"Kaineng Overlook (Minister Li)", // KMT_MinisterLi_Long
	u8"HT", // KMT_Harvest_Short
	u8"Harvest Temple (Dragonvoid)", // KMT_Harvest_Long
	u8"Mai", // KMT_MaiTrin_Short
	u8"Aetherblade Hideout (Mai Trin)", // KMT_MaiTrin_Long
	u8"Mai CM", // KMT_MaiTrinCM_Short
	u8"Aetherblade Hideout (Mai Trin) CM", // KMT_MaiTrinCM_Long
	u8"Ankka CM", // KMT_AnkkaCM_Short
	u8"Xunlai Jade Junkyard (Ankka) CM", // KMT_AnkkaCM_Long
	u8"KO CM", // KMT_MinisterLiCM_Short
	u8"Kaineng Overlook (Minister Li) CM", // KMT_MinisterLiCM_Long
	u8"HT CM", // KMT_HarvestCM_Short
	u8"Harvest Temple (Dragonvoid) CM", // KMT_HarvestCM_Long
	u8"OLC", // KMT_OLC_Short
	u8"Old Lion's Court (Assault Knights)", //KMT_OLC_Long
	u8"OLC CM", // KMT_OLCCM_Short
	u8"Old Lion's Court CM (Assault Knights)", // KMT_OLCCM_Long,
	u8"CO", // KMT_CO_Short,
	u8"Cosmic Observatory (Dagda)", // KMT_CO_Long,
	u8"CO CM", // KMT_COCM_Short,
	u8"Cosmic Observatory (Dagda) CM", // KMT_COCM_Long,
	u8"Febe", // KMT_FEBE_Short,
	u8"Temple of Febe (Cerus)", // KMT_FEBE_Long,
	u8"Bananas", // KMT_Bananas
	u8"Killproof.me", // KMT_KpWindowNameDefault
	u8"Killproof.me", // KMT_AppearAsInOptionDefault
	u8"Private accounts", // KMT_SettingsShowPrivateText
	u8"Show controls", // KMT_SettingsShowControls
	u8"Show linked accounts by default", // KMT_SettingsShowLinkedByDefault
	u8"Show Commander Tag", // KMT_SettingsShowCommander
	u8"Text to display when data is unavailable/private", // KMT_SettingsBlockedText
	u8"Show linked totals directly", // KMT_ShowLinkedTotals
	u8"Unofficial extras plugin is not installed.\nInstall it to enable tracking of players on other instances.", // KMT_UnofficialExtrasNotInstalled
	u8"Accountname, killproof.me ID or Charactername to search and add to the list", // KMT_AddPlayerTooltip
	u8"Add", // KMT_AddPlayerText
	u8"Clear", // KMT_ClearText
	u8"Remove all manually added users", // KMT_ClearTooltip
	u8"Copy own KP ID", // KMT_CopyKpIdText
	u8"Overall", // KMT_Overall
	u8"Killproofs", // KMT_Killproofs
	u8"Coffers", // KMT_Coffers
	u8"Do NOT close killproof.me window on ESC", // KMT_SettingsDisableESCText
	u8"Killproofs per coffer", // KMT_SettingsCofferValue
	u8"Hide Unofficial Extras Message", // KMT_SettingsHideExtrasMessage
	u8"Clear Cache", // KMT_SettingsClearCacheText
	u8"Clear the cache and reload killproof.me data for all players", // KMT_SettingsClearCacheTooltip
	u8"Only works if Unofficial Extras is installed. Will fall back to English.", // KMT_LanguageAsIngameTooltip
	u8"Rough German translation, please report any wrong translations.", // KMT_LanguageGermanTooltip
	u8"Translated with deepl.com. Please report any wrong translations.", // KMT_LanguageFrenchTooltip
	u8"Translated with deepl.com. Please report any wrong translations.", // KMT_LanguageSpanishTooltip
	u8"Raids", // KMT_Raids
	u8"Fractals", // KMT_Fractals
	u8"Strikes", // KMT_Strikes
	u8"Miscellaneous", // KMT_Misc
	u8"Translated by Cavey.6432. Please report any wrong translations.", // KMT_LanguageChineseTooltip
});

constexpr std::array KILLPROOF_ME_TRANSLATION_GERMAN = std::to_array({
	u8"Account", // KMT_AccountName
	u8"Charakter", // KMT_CharacterName
	u8"ID", // KMT_KillproofId
	u8"Gruppe", // KMT_SubgroupText
	u8"LI", // KMT_Li_Short
	u8"LD", // KMT_Ld_Short
	u8"LI+LD", // KMT_LiLd_Short
	u8"UCE", // KMT_Uce_Short
	u8"UFE", // KMT_Ufe_Short
	u8"VG", // KMT_Vg_Short
	u8"Talwächter", // KMT_Vg_Long
	u8"Gorse", // KMT_Gorse_Short
	u8"Gorseval der Facettenreiche", // KMT_Gorse_Long
	u8"Sabetha", // KMT_Sabetha_Short
	u8"Sabetha die Saboteurin", // KMT_Sabetha_Long
	u8"Faulterion", // KMT_Sloth_Short
	u8"Matthias", // KMT_Matthias_Short
	u8"Matthias Gabrel", // KMT_Matthias_Long
	u8"Escort", // KMT_Escort_Short
	u8"KC", // KMT_Kc_Short
	u8"Festenkonstrukt", // KMT_Kc_Long
	u8"Xera", // KMT_Xera_Short
	u8"Cairn", // KMT_Cairn_Short
	u8"Cairn der Unbeugsame", // KMT_Cairn_Long
	u8"MO", // KMT_Mo_Short
	u8"Mursaat-Aufseher", // KMT_Mo_Long
	u8"Samarog", // KMT_Samarog_Short
	u8"Deimos", // KMT_Deimos_Short
	u8"Desmina", // KMT_Desmina_Short
	u8"Seelenloser Schrecken (Desmina)", // KMT_Desmina_Long
	u8"River", // KMT_River_Short
	u8"Fluss der Seelen", // KMT_River_Long
	u8"Statues", // KMT_Statues_Short
	u8"Dhuum", // KMT_Dhuum_Short
	u8"CA", // KMT_Ca_Short
	u8"Beschworene Verschmelzung", // KMT_Ca_Long
	u8"Twins", // KMT_Twins_Short
	u8"Largos-Assassinen", // KMT_Twins_Long
	u8"Qadim", // KMT_Qadim_Short
	u8"Sabir", // KMT_Sabir_Short
	u8"Adina", // KMT_Adina_Short
	u8"Qadim2", // KMT_Qadim2_Short
	u8"Qadim der Unvergleichliche", // KMT_Qadim2_Long
	u8"Phiole", // KMT_BoneskinnerVial_Short
	u8"Knochenhäuter-Ritual-Phiole", // KMT_BoneskinnerVial_Long
	u8"Ankka", // KMT_Ankka_Short
	u8"Xunlai-Jade-Schrottplatz (Ankka)", // KMT_Ankka_Long
	u8"KO", // KMT_MinisterLi_Short
	u8"Kaineng-Aussichtspunkt (Minister Li)", // KMT_MinisterLi_Short
	u8"Erntetempel", // KMT_Harvest_Short
	u8"Erntetempel (Drachenleere)", // KMT_Harvest_Long
	u8"Mai", // KMT_MaiTrin_Short
	u8"Ätherklinger-Unterschlupf (Mai Trin)", // KMT_MaiTrin_Long
	u8"Mai CM", // KMT_MaiTrinCM_Short
	u8"Ätherklinger-Unterschlupf (Mai Trin) CM", // KMT_MaiTrinCM_Long
	u8"Ankka CM", // KMT_AnkkaCM_Short
	u8"Xunlai-Jade-Schrottplatz (Ankka) CM", // KMT_AnkkaCM_Long
	u8"KO CM", // KMT_MinisterLiCM_Short
	u8"Kaineng-Aussichtspunkt (Minsiter Li) CM", // KMT_MinisterLiCM_Long
	u8"Erntetempel CM", // KMT_HarvestCM_Short
	u8"Erntetempel (Drachenleere) CM", // KMT_HarvestCM_Long
	u8"OLC", // KMT_OLC_Short
	u8"Alter Löwenhof (Sturmritter)", //KMT_OLC_Long
	u8"OLC CM", // KMT_OLCCM_Short
	u8"Alter Löwenhof CM (Sturmritter)", // KMT_OLCCM_Long,
	u8"CO", // KMT_CO_Short,
	u8"Kosmisches Observatorium (Dagda)", // KMT_CO_Long,
	u8"CO CM", // KMT_COCM_Short,
	u8"Kosmisches Observatorium (Dagda) CM", // KMT_COCM_Long,
	u8"Febe", // KMT_FEBE_Short,
	u8"Tempel von Febe (Cerus)", // KMT_FEBE_Long,
	u8"Bananen", // KMT_Bananas
	u8"Killproof.me", // KMT_KpWindowNameDefault
	u8"Killproof.me", // KMT_AppearAsInOptionDefault
	u8"Private Accounts", // KMT_SettingsShowPrivateText
	u8"Zeige Bedienelemente", // KMT_SettingsShowControls
	u8"Zeige verknüpfte Account Standardmäßig", // KMT_SettingsShowLinkedByDefault
	u8"Zeige Kommandeurssymbol", // KMT_SettingsShowCommander
	u8"Anzeigetext, wenn Daten nicht verfügbar/privat sind", // KMT_SettingsBlockedText
	u8"Zeige verknüpfte Gesamtwerte direkt", // KMT_ShowLinkedTotals
	u8"Das \"Unofficial extras plugin\" ist nicht installiert.\nInstalliere es, um Spiler auf anderen Instanzen sehen zu können.", // KMT_UnofficialExtrasNotInstalled
	u8"Suche nach Accountname, killproof.me ID oder Charaktername und füge es der Tabelle hinzu", // KMT_AddPlayerTooltip
	u8"Hinzufügen", // KMT_AddPlayerText
	u8"Löschen", // KMT_ClearText
	u8"Entferne alle manuell hinzugefügten Einträge", // KMT_ClearTooltip
	u8"Kopiere die eigene ID", // KMT_CopyKpIdText
	u8"Gesamt", // KMT_Overall
	u8"Killproofs", // KMT_Killproofs
	u8"Koffer", // KMT_Coffers
	u8"Schließe das killproof.me Fenster NICHT mit ESC", // KMT_SettingsDisableESCText
	u8"Killproofs pro Koffer", // KMT_SettingsCofferValue
	u8"Verstecke die \"Unofficial Extras\" Fehlernachricht", // KMT_SettingsHideExtrasMessage
	u8"Lösche Cache", // KMT_SettingsClearCacheText
	u8"Lösche den Cache und lade alle Spieler neu", // KMT_SettingsClearCacheTooltip
	u8"Funktioniert nur, wenn das \"Unofficial Extras Addon\" installiert ist. Falls nicht, wird Englisch verwendet.", // KMT_LanguageAsIngameTooltip
	u8"Grobe Deutsche Übersetzung. Bitte melde alle falschen/schlechten Übersetzungen.", // KMT_LanguageGermanTooltip
	u8"Übersetzt mit deepl.com. Bitte melde alle falschen/schlechten Übersetzungen.", // KMT_LanguageFrenchTooltip
	u8"Übersetzt mit deepl.com. Bitte melde alle falschen/schlechten Übersetzungen.", // KMT_LanguageSpanishTooltip
	u8"Schlachtzüge", // KMT_Raids
	u8"Fraktale", // KMT_Fractals
	u8"Angriffsmissionen", // KMT_Strikes
	u8"Sonstiges", // KMT_Misc
	u8"Übersetzt von Cavey.6432. Bitte melde alle falschen/schlechten Übersetzungen.", // KMT_LanguageChineseTooltip
});

constexpr std::array KILLPROOF_ME_TRANSLATION_FRENCH = std::to_array({
	u8"Compte", // KMT_AccountName
	u8"Personnage", // KMT_CharacterName
	u8"ID", // KMT_KillproofId
	u8"Groupe", // KMT_SubgroupText
	u8"LI", // KMT_Li_Short
	u8"LD", // KMT_Ld_Short
	u8"LI+LD", // KMT_LiLd_Short
	u8"UCE", // KMT_Uce_Short
	u8"UFE", // KMT_Ufe_Short
	u8"VG", // KMT_Vg_Short
	u8"Gardien de la Vallée", // KMT_Vg_Long
	u8"Gorse", // KMT_Gorse_Short
	u8"Gorseval le Disparate", // KMT_Gorse_Long
	u8"Sabetha", // KMT_Sabetha_Short
	u8"Sabetha la saboteuse", // KMT_Sabetha_Long
	u8"Paressor", // KMT_Sloth_Short
	u8"Matthias", // KMT_Matthias_Short
	u8"Matthias Gabrel", // KMT_Matthias_Long
	u8"Escorte", // KMT_Escort_Short
	u8"KC", // KMT_Kc_Short
	u8"Titan du fort", // KMT_Kc_Long
	u8"Xera", // KMT_Xera_Short
	u8"Cairn", // KMT_Cairn_Short
	u8"Cairn l'Indomptable", // KMT_Cairn_Long
	u8"MO", // KMT_Mo_Short
	u8"Surveillant mursaat", // KMT_Mo_Long
	u8"Samarog", // KMT_Samarog_Short
	u8"Deimos", // KMT_Deimos_Short
	u8"Desmina", // KMT_Desmina_Short
	u8"Horreur sans âme (Desmina)", // KMT_Desmina_Long
	u8"Rivière", // KMT_River_Short
	u8"Rivière des âmes", // KMT_River_Long
	u8"Statues", // KMT_Statues_Short
	u8"Dhuum", // KMT_Dhuum_Short
	u8"CA", // KMT_Ca_Short
	u8"Amalgame conjuré", // KMT_Ca_Long
	u8"Jumeaux", // KMT_Twins_Short
	u8"Jumeaux Largos", // KMT_Twins_Long
	u8"Qadim", // KMT_Qadim_Short
	u8"Sabir", // KMT_Sabir_Short
	u8"Adina", // KMT_Adina_Short
	u8"Qadim2", // KMT_Qadim2_Short
	u8"Qadim l'incomparable", // KMT_Qadim2_Long
	u8"Fiole", // KMT_BoneskinnerVial_Short
	u8"Fiole du rituel du désosseur", // KMT_BoneskinnerVial_Long
	u8"Ankka", // KMT_Ankka_Short
	u8"Décharge de Xunlai Jade (Ankka)", // KMT_Ankka_Long
	u8"KO", // KMT_MinisterLi_Short
	u8"Belvédère de Kaineng (Ministère  Li)", // KMT_MinisterLi_Long
	u8"Temple des moissons", // KMT_Harvest_Short
	u8"Temple des moissons (Dragonvoid)", // KMT_Harvest_Short
	u8"Mai", // KMT_MaiTrin_Short
	u8"Cachette des Étherlames (Mai Trin)", // KMT_MaiTrin_Long
	u8"Mai CM", // KMT_MaiTrinCM_Short
	u8"Cachette des Étherlames (Mai Trin) CM", // KMT_MaiTrinCM_Long
	u8"Ankka CM", // KMT_AnkkaCM_Short
	u8"Décharge de Xunlai Jade (Ankka) CM", // KMT_AnkkaCM_Long
	u8"KO CM", // KMT_MinisterLiCM_Short
	u8"Belvédère de Kaineng (Ministère Li) CM", // KMT_MinisterLiCM_Long
	u8"Temple des moissons CM", // KMT_HarvestCM_Short
	u8"Temple des moissons (Dragonvoid) CM", // KMT_HarvestCM_Long
	u8"OLC", // KMT_OLC_Short
	u8"Cour du vieux Lion (chevaliers d'assaut)", //KMT_OLC_Long
	u8"OLC CM", // KMT_OLCCM_Short
	u8"Cour du vieux Lion CM (chevaliers d'assaut)", // KMT_OLCCM_Long,
	u8"CO", // KMT_CO_Short,
	u8"Observatoire cosmique (Dagda)", // KMT_CO_Long,
	u8"CO CM", // KMT_COCM_Short,
	u8"Observatoire cosmique (Dagda) CM", // KMT_COCM_Long,
	u8"Febe", // KMT_FEBE_Short,
	u8"Temple de Febe (Cerus)", // KMT_FEBE_Long,
	u8"Bananes", // KMT_Bananas
	u8"Killproof.me", // KMT_KpWindowNameDefault
	u8"Killproof.me", // KMT_AppearAsInOptionDefault
	u8"Comptes privés", // KMT_SettingsShowPrivateText
	u8"Afficher les contrôles", // KMT_SettingsShowControls
	u8"Afficher les comptes liés par défaut", // KMT_SettingsShowLinkedByDefault
	u8"Afficher le marqueur du Commandant", // KMT_SettingsShowCommander
	u8"Texte à afficher lorsque les données sont indisponibles/privées", // KMT_SettingsBlockedText
	u8"Afficher directement les totaux liés", // KMT_ShowLinkedTotals
	u8"Le plugin d'extras non officiels n'est pas installé.\nInstallez-le pour permettre le suivi des joueurs sur d'autres instances.", // KMT_UnofficialExtrasNotInstalled
	u8"Nom de compte, ID de killproof.me ou Nom de personnage pour rechercher et ajouter à la liste", // KMT_AddPlayerTooltip
	u8"Ajouter", // KMT_AddPlayerText
	u8"Effacer", // KMT_ClearText
	u8"Supprimer tous les utilisateurs ajoutés manuellement", // KMT_ClearTooltip
	u8"Copier votre propre KP ID", // KMT_CopyKpIdText
	u8"En général", // KMT_Overall
	u8"Killproofs", // KMT_Killproofs
	u8"Coffres", // KMT_Coffers
	u8"Ne PAS fermer la fenêtre killproof.me en appuyant sur ESC.", // KMT_SettingsDisableESCText
	u8"Killproofs par coffre", // KMT_SettingsCofferValue
	u8"Cacher le message des extras non officiels", // KMT_SettingsHideExtrasMessage
	u8"Effacer le cache", // KMT_SettingsClearCacheText
	u8"Videz le cache et rechargez les données de killproof.me pour tous les joueurs.", // KMT_SettingsClearCacheTooltip
	u8"Ne fonctionne que si Unofficial Extras est installé. Retour à l'anglais.", // KMT_LanguageAsIngameTooltip
	u8"Traduction allemande approximative, veuillez signaler toute traduction erronée.", // KMT_LanguageGermanTooltip
	u8"Traduit avec deepl.com. Veuillez signaler toute traduction erronée.", // KMT_LanguageFrenchTooltip
	u8"Traduit avec deepl.com. Veuillez signaler toute traduction erronée.", // KMT_LanguageSpanishTooltip
	u8"Raids", // KMT_Raids
	u8"Fractales", // KMT_Fractals
	u8"Missions d'attaque", // KMT_Strikes
	u8"Divers", // KMT_Misc
	u8"Traduit par Cavey.6432. Veuillez signaler toute traduction erronée.", // KMT_LanguageChineseTooltip
});

constexpr std::array KILLPROOF_ME_TRANSLATION_SPANISH = std::to_array({
	u8"Cuenta", // KMT_AccountName
	u8"Carácter", // KMT_CharacterName
	u8"ID", // KMT_KillproofId
	u8"Grupo", // KMT_SubgroupText
	u8"LI", // KMT_Li_Short
	u8"LD", // KMT_Ld_Short
	u8"LI+LD", // KMT_LiLd_Short
	u8"UCE", // KMT_Uce_Short
	u8"UFE", // KMT_Ufe_Short
	u8"VG", // KMT_Vg_Short
	u8"Guardián del valle", // KMT_Vg_Long
	u8"Gorse", // KMT_Gorse_Short
	u8"Gorseval el Múltiple", // KMT_Gorse_Long
	u8"Sabetha", // KMT_Sabetha_Short
	u8"Sabetha la Saboteadora", // KMT_Sabetha_Long
	u8"Perezón", // KMT_Sloth_Short
	u8"Matías", // KMT_Matthias_Short
	u8"Matías Gabrel", // KMT_Matthias_Long
	u8"Escolta", // KMT_Escort_Short
	u8"KC", // KMT_Kc_Short
	u8"Ensamblaje de la Fortaleza", // KMT_Kc_Long
	u8"Xera", // KMT_Xera_Short
	u8"Cairn", // KMT_Cairn_Short
	u8"Cairn el Indomable", // KMT_Cairn_Long
	u8"MO", // KMT_Mo_Short
	u8"Dirigente mursaat", // KMT_Mo_Long
	u8"Samarog", // KMT_Samarog_Short
	u8"Deimos", // KMT_Deimos_Short
	u8"Desmina", // KMT_Desmina_Short
	u8"Horror sin alma", // KMT_Desmina_Long
	u8"Río", // KMT_River_Short
	u8"Río de Almas", // KMT_River_Long
	u8"Estatuas", // KMT_Statues_Short
	u8"Dhuum", // KMT_Dhuum_Short
	u8"CA", // KMT_Ca_Short
	u8"Amalgamado conjurado", // KMT_Ca_Long
	u8"Gemelos", // KMT_Twins_Short
	u8"Largos gemelos", // KMT_Twins_Long
	u8"Qadim", // KMT_Qadim_Short
	u8"Sabir", // KMT_Sabir_Short
	u8"Adina", // KMT_Adina_Short
	u8"Qadim2", // KMT_Qadim2_Short
	u8"Qadim el Simpar", // KMT_Qadim2_Long
	u8"Vial", // KMT_BoneskinnerVial_Short
	u8"Vial del ritual del pelahuesos", // KMT_BoneskinnerVial_Long
	u8"Ankka", // KMT_Ankka_Short
	u8"Chatarreria de Xunlay Jade (Ankka)", // KMT_Ankka_Long
	u8"KO", // KMT_MinisterLi_Short
	u8"Mirador de Kaineng (Ministro Li)", // KMT_MinisterLi_Long
	u8"Templo de la Cosecha", // KMT_Harvest_Short
	u8"Templo de la Cosecha", // KMT_Harvest_Long
	u8"Mai", // KMT_MaiTrin_Short
	u8"Escondite Filoetéreo (Mai Trin)", // KMT_MaiTrin_Long
	u8"Mai CM", // KMT_MaiTrinCM_Short
	u8"Escondite Filoetéreo (Mai Trin) CM", // KMT_MaiTrinCM_Long
	u8"Ankka CM", // KMT_AnkkaCM_Short
	u8"Chatarreria de Xunlay Jade (Ankka) CM", // KMT_AnkkaCM_Long
	u8"KO CM", // KMT_MinisterLiCM_Short
	u8"Mirador de Kaineng (Ministro Li) CM", // KMT_MinisterLiCM_Long
	u8"Templo de la Cosecha CM", // KMT_HarvestCM_Short
	u8"Templo de la Cosecha CM", // KMT_HarvestCM_Long
	u8"OLC", // KMT_OLC_Short
	u8"Vieja Corte del León (caballeras de asalto)", //KMT_OLC_Long
	u8"OLC CM", // KMT_OLCCM_Short
	u8"Vieja Corte del León CM (caballeras de asalto)", // KMT_OLCCM_Long,
	u8"CO", // KMT_CO_Short,
	u8"Observatorio Cósmico (Dagda)", // KMT_CO_Long,
	u8"CO CM", // KMT_COCM_Short,
	u8"Observatorio Cósmico (Dagda) CM", // KMT_COCM_Long,
	u8"Febe", // KMT_FEBE_Short,
	u8"Templo de Febe (Cerus)", // KMT_FEBE_Long,
	u8"Plátanos", // KMT_Bananas
	u8"Killproof.me", // KMT_KpWindowNameDefault
	u8"Killproof.me", // KMT_AppearAsInOptionDefault
	u8"Cuentas privadas", // KMT_SettingsShowPrivateText
	u8"Mostrar controles", // KMT_SettingsShowControls
	u8"Mostrar las cuentas vinculadas por defecto", // KMT_SettingsShowLinkedByDefault
	u8"Mostrar etiqueta de comandante", // KMT_SettingsShowCommander
	u8"Texto a mostrar cuando los datos no están disponibles/privados", // KMT_SettingsBlockedText
	u8"Mostrar directamente los totales vinculados", // KMT_ShowLinkedTotals
	u8"El plugin de extras no oficiales no está instalado.\nInstálalo para permitir el seguimiento de los jugadores en otras instancias.", // KMT_UnofficialExtrasNotInstalled
	u8"Nombre de la cuenta, ID de killproof.me o nombre del personaje para buscar y añadir a la lista", // KMT_AddPlayerTooltip
	u8"Añadir", // KMT_AddPlayerText
	u8"Borrar", // KMT_ClearText
	u8"Eliminar todos los usuarios añadidos manualmente", // KMT_ClearTooltip
	u8"Copiar el propio KP ID", // KMT_CopyKpIdText
	u8"En general", // KMT_Overall
	u8"Killproofs", // KMT_Killproofs
	u8"Cofres", // KMT_Coffers
	u8"NO cerrar la ventana de killproof.me con ESC", // KMT_SettingsDisableESCText
	u8"Killproofs por cofre", // KMT_SettingsCofferValue
	u8"Ocultar el mensaje de los extras no oficiales", // KMT_SettingsHideExtrasMessage
	u8"Borrar caché", // KMT_SettingsClearCacheText
	u8"Borrar la caché y recargar los datos de killproof.me para todos los jugadores", // KMT_SettingsClearCacheTooltip
	u8"Sólo funciona si se instalan los Extras no oficiales. Volverá a funcionar en inglés.", // KMT_LanguageAsIngameTooltip
	u8"Traducción aproximada al alemán, por favor informe de cualquier traducción errónea.", // KMT_LanguageGermanTooltip
	u8"Traducido con deepl.com. Por favor, informe de cualquier traducción incorrecta.", // KMT_LanguageFrenchTooltip
	u8"Traducido con deepl.com. Por favor, informe de cualquier traducción incorrecta.", // KMT_LanguageSpanishTooltip
	u8"Incursión", // KMT_Raids
	u8"Fractales", // KMT_Fractals
	u8"Misión de ataque", // KMT_Strikes
	u8"Varios", // KMT_Misc
	u8"Traducido por Cavey.6432. Por favor, informe de cualquier traducción incorrecta.", // KMT_LanguageChineseTooltip
});

constexpr std::array KILLPROOF_ME_TRANSLATION_CHINESE = std::to_array({
	u8"帳號", // KMT_AccountName
	u8"角色", // KMT_CharacterName
	u8"ID", // KMT_KillproofId
	u8"小隊", // KMT_SubgroupText
	u8"傳奇見解(Legendary Insight, LI)", // KMT_Li_Short
	u8"傳奇預言(Legendary Divination, LD)", // KMT_Ld_Short
	u8"傳奇見解與預言(LI+LD)", // KMT_LiLd_Short
	u8"不穩定宇宙精華(Unstable Cosmic Essence, UCE)", // KMT_Uce_Short
	u8"不穩定碎層精華(Unstable Fractal Essence, UFE)", // KMT_Ufe_Short
	u8"山谷守護者(VG)", // KMT_Vg_Short
	u8"山谷守護者(Vale Guardian)", // KMT_Vg_Long
	u8"戈瑟瓦爾(Gorse)", // KMT_Gorse_Short
	u8"多變藤 戈瑟瓦爾(Gorseval the Multifarious)", // KMT_Gorse_Long
	u8"薩蓓莎(Sabetha)", // KMT_Sabetha_Short
	u8"破壞者 薩蓓莎(Sabetha the Saboteur)", // KMT_Sabetha_Long
	u8"斯洛薩索(Slothasor)", // KMT_Sloth_Short
	u8"馬蒂亞斯(Matthias)", // KMT_Matthias_Short
	u8"馬蒂亞斯·加布瑞爾(Matthias Gabrel)", // KMT_Matthias_Long
	u8"護送(Escort)", // KMT_Escort_Short
	u8"要塞構造體(KC)", // KMT_Kc_Short
	u8"要塞構造體(Keep Construct)", // KMT_Kc_Long
	u8"琦拉(Xera)", // KMT_Xera_Short
	u8"凱玲(Cairn)", // KMT_Cairn_Short
	u8"不屈的凱玲(Cairn the Indomitable)", // KMT_Cairn_Long
	u8"末世魔監工(MO)", // KMT_Mo_Short
	u8"末世魔監工(Mursaat Overseer)", // KMT_Mo_Long
	u8"薩瑪洛格(Samarog)", // KMT_Samarog_Short
	u8"戴莫斯(Deimos)", // KMT_Deimos_Short
	u8"德斯米娜(Desmina)", // KMT_Desmina_Short
	u8"無魂懼魔(德斯米娜)(Soulless Horror, Desmina)", // KMT_Desmina_Long
	u8"魂河(River)", // KMT_River_Short
	u8"魂河(River of Souls)", // KMT_River_Long
	u8"三雕像(寒冰、死亡、黑暗)(Statues)", // KMT_Statues_Short
	u8"虛空之聲 德姆(Dhuum)", // KMT_Dhuum_Short
	u8"咒術融合體(CA)", // KMT_Ca_Short
	u8"咒術融合體(Conjured Amalgamate)", // KMT_Ca_Long
	u8"孿生蝶翼人(Twins)", // KMT_Twins_Short
	u8"孿生蝶翼人(Twin Largos)", // KMT_Twins_Long
	u8"卡迪姆(Qadim)", // KMT_Qadim_Short
	u8"基石守護者 薩比爾(Sabir)", // KMT_Sabir_Short
	u8"基石守護者 艾迪娜(Adina)", // KMT_Adina_Short
	u8"無可匹敵的卡迪姆(Qadim2)", // KMT_Qadim2_Short
	u8"無可匹敵的卡迪姆(Qadim the Peerless, QtP)", // KMT_Qadim2_Long
	u8"骸骨剝皮怪儀式瓶(Vial)", // KMT_BoneskinnerVial_Short
	u8"骸骨剝皮怪儀式瓶(Boneskinner Ritual Vial)", // KMT_BoneskinnerVial_Long
	u8"安卡(Ankka)", // KMT_Ankka_Short
	u8"桑萊廢料場 安卡(Xunlai Jade Junkyard, Ankka)", // KMT_Ankka_Long
	u8"凱寧瞭望台(KO)", // KMT_MinisterLi_Short
	u8"凱寧瞭望台 李部長(Kaineng Overlook, Minister Li)", // KMT_MinisterLi_Long
	u8"豐收神殿(HT)", // KMT_Harvest_Short
	u8"豐收神殿 巨龍虛空(Harvest Temple, Dragonvoid)", // KMT_Harvest_Long
	u8"美琴(Mai)", // KMT_MaiTrin_Short
	u8"以太之刃的藏身處 美琴(Aetherblade Hideout, Mai Trin)", // KMT_MaiTrin_Long
	u8"美琴 挑戰模式(Mai CM)", // KMT_MaiTrinCM_Short
	u8"以太之刃的藏身處 美琴 挑戰模式(Aetherblade Hideout, Mai Trin CM)", // KMT_MaiTrinCM_Long
	u8"安卡 挑戰模式(Ankka CM)", // KMT_AnkkaCM_Short
	u8"桑萊廢料場 安卡 挑戰模式(Xunlai Jade Junkyard ,Ankka CM)", // KMT_AnkkaCM_Long
	u8"凱寧瞭望台 挑戰模式(KO CM)", // KMT_MinisterLiCM_Short
	u8"凱寧瞭望台 李部長 挑戰模式(Kaineng Overlook, Minister Li CM)", // KMT_MinisterLiCM_Long
	u8"豐收神殿 挑戰模式(HT CM)", // KMT_HarvestCM_Short
	u8"豐收神殿 巨龍虛空 挑戰模式(Harvest Temple, Dragonvoid CM)", // KMT_HarvestCM_Long
	u8"舊雄獅廣場(OLC)", // KMT_OLC_Short
	u8"舊雄獅廣場 守望騎士三人小組(Old Lion's Court, Assault Knights)", //KMT_OLC_Long
	u8"舊雄獅廣場 挑戰模式(OLC CM)", // KMT_OLCCM_Short
	u8"舊雄獅廣場 守望騎士三人小組 挑戰模式(Old Lion's Court, Assault Knights CM)", // KMT_OLCCM_Long,
	u8"宇宙觀測台(CO)", // KMT_CO_Short,
	u8"宇宙觀測台 德格達(Cosmic Observatory ,Dagda)", // KMT_CO_Long,
	u8"宇宙觀測台 挑戰模式(CO CM)", // KMT_COCM_Short,
	u8"宇宙觀測台 德格達 挑戰模式(Cosmic Observatory ,Dagda CM)", // KMT_COCM_Long,
	u8"菲勃神殿(Febe)", // KMT_FEBE_Short,
	u8"菲勃神殿 塞魯斯(Temple of Febe ,Cerus)", // KMT_FEBE_Long,
	u8"香蕉(Bananas)", // KMT_Bananas
	u8"Killproof.me", // KMT_KpWindowNameDefault
	u8"Killproof.me", // KMT_AppearAsInOptionDefault
	u8"私人帳號", // KMT_SettingsShowPrivateText
	u8"顯示控制列(Show controls)", // KMT_SettingsShowControls
	u8"預設顯示連結帳號", // KMT_SettingsShowLinkedByDefault
	u8"顯示指揮官標誌", // KMT_SettingsShowCommander
	u8"資料無法取得時顯示的文字", // KMT_SettingsBlockedText
	u8"直接顯示連結帳號的總計", // KMT_ShowLinkedTotals
	u8"未安裝 Unofficial Extras 插件。\n安裝它以啟用對其他地圖上玩家的追蹤。", // KMT_UnofficialExtrasNotInstalled
	u8"輸入帳號、killproof.me ID或角色名來搜尋並加入至列表", // KMT_AddPlayerTooltip
	u8"新增", // KMT_AddPlayerText
	u8"清除", // KMT_ClearText
	u8"刪除所有手動新增的玩家", // KMT_ClearTooltip
	u8"複製自己的KP ID", // KMT_CopyKpIdText
	u8"Overall", // KMT_Overall
	u8"徽記(Tokens)", // KMT_Killproofs
	u8"寶箱(Coffers)", // KMT_Coffers
	u8"按Esc不要關閉 killproof.me 視窗", // KMT_SettingsDisableESCText
	u8"個徽記等於1個寶箱", // KMT_SettingsCofferValue
	u8"隱藏要求安裝 Unofficial Extras 訊息", // KMT_SettingsHideExtrasMessage
	u8"清除快取", // KMT_SettingsClearCacheText
	u8"清除快取並重新載入所有玩家的 killproof.me 數據", // KMT_SettingsClearCacheTooltip
	u8"僅在安裝了 Unofficial Extras 後才有效。否則將回到英語。", // KMT_LanguageAsIngameTooltip
	u8"粗略的德語翻譯，如有錯誤請回報。", // KMT_LanguageGermanTooltip
	u8"由 deepl.com 翻譯。 如有錯誤請回報。", // KMT_LanguageFrenchTooltip
	u8"由 deepl.com 翻譯。 如有錯誤請回報。", // KMT_LanguageSpanishTooltip
	u8"大型地下城(Raids)", // KMT_Raids
	u8"迷霧碎層(Fractals, FOTM)", // KMT_Fractals
	u8"進攻任務(Strikes)", // KMT_Strikes
	u8"雜項", // KMT_Misc
	u8"由Cavey.6432中文翻譯，若有任何錯誤翻譯，歡迎回報。", // KMT_LanguageChineseTooltip
	});

static_assert(KILLPROOF_ME_TRANSLATION_ENGLISH.size() == magic_enum::enum_count<KillproofMeTranslations>());
static_assert(KILLPROOF_ME_TRANSLATION_ENGLISH.size() == KILLPROOF_ME_TRANSLATION_GERMAN.size());
static_assert(KILLPROOF_ME_TRANSLATION_ENGLISH.size() == KILLPROOF_ME_TRANSLATION_FRENCH.size());
static_assert(KILLPROOF_ME_TRANSLATION_ENGLISH.size() == KILLPROOF_ME_TRANSLATION_SPANISH.size());
static_assert(KILLPROOF_ME_TRANSLATION_ENGLISH.size() == KILLPROOF_ME_TRANSLATION_CHINESE.size());

inline void LoadAdditionalTranslations() {
	Localization& localization = Localization::instance();
	localization.Load(GWL_ENG, KILLPROOF_ME_TRANSLATION_ENGLISH);
	localization.Load(GWL_GEM, KILLPROOF_ME_TRANSLATION_GERMAN);
	localization.Load(GWL_FRE, KILLPROOF_ME_TRANSLATION_FRENCH);
	localization.Load(GWL_SPA, KILLPROOF_ME_TRANSLATION_SPANISH);
	localization.Load(GWL_CN, KILLPROOF_ME_TRANSLATION_CHINESE);
}

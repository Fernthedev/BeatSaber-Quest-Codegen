#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CampaignProgressModel)
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CampaignProgressModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CampaignProgressModel);
// Type: ::CampaignProgressModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4455))
// CS Name: ::CampaignProgressModel*
class CORDL_TYPE CampaignProgressModel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _playerDataModel offset 0x18
 __declspec(property(get=__get__playerDataModel, put=__set__playerDataModel)) ::GlobalNamespace::PlayerDataModel*  _playerDataModel;

/// @brief Field _missionIds offset 0x20
 __declspec(property(get=__get__missionIds, put=__set__missionIds)) ::System::Collections::Generic::HashSet_1<::StringW>*  _missionIds;

/// @brief Field _finalMissionId offset 0x28
 __declspec(property(get=__get__finalMissionId, put=__set__finalMissionId)) ::StringW  _finalMissionId;

/// @brief Field _numberOfClearedMissionsDirty offset 0x30
 __declspec(property(get=__get__numberOfClearedMissionsDirty, put=__set__numberOfClearedMissionsDirty)) bool  _numberOfClearedMissionsDirty;

/// @brief Field _numberOfClearedMissions offset 0x34
 __declspec(property(get=__get__numberOfClearedMissions, put=__set__numberOfClearedMissions)) int32_t  _numberOfClearedMissions;

 __declspec(property(get=get_numberOfClearedMissions)) int32_t  numberOfClearedMissions;

constexpr void __set__playerDataModel(::GlobalNamespace::PlayerDataModel*  value) ;

constexpr ::GlobalNamespace::PlayerDataModel* __get__playerDataModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> __get__playerDataModel() const;

constexpr void __set__missionIds(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* __get__missionIds() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> __get__missionIds() const;

constexpr void __set__finalMissionId(::StringW  value) ;

constexpr ::StringW& __get__finalMissionId() ;

constexpr ::StringW const& __get__finalMissionId() const;

constexpr void __set__numberOfClearedMissionsDirty(bool  value) ;

constexpr bool& __get__numberOfClearedMissionsDirty() ;

constexpr bool const& __get__numberOfClearedMissionsDirty() const;

constexpr void __set__numberOfClearedMissions(int32_t  value) ;

constexpr int32_t& __get__numberOfClearedMissions() ;

constexpr int32_t const& __get__numberOfClearedMissions() const;

/// @brief Method get_numberOfClearedMissions addr 0x23525a4 size 0x28 virtual false final false
inline int32_t get_numberOfClearedMissions() ;

/// @brief Method Awake addr 0x2352764 size 0x74 virtual false final false
inline void Awake() ;

/// @brief Method IsMissionRegistered addr 0x23527d8 size 0x58 virtual false final false
inline bool IsMissionRegistered(::StringW  missionId) ;

/// @brief Method RegisterMissionId addr 0x2352830 size 0x64 virtual false final false
inline void RegisterMissionId(::StringW  missionId) ;

/// @brief Method IsMissionCleared addr 0x2352894 size 0x30 virtual false final false
inline bool IsMissionCleared(::StringW  missionId) ;

/// @brief Method IsMissionFinal addr 0x23528c4 size 0xc virtual false final false
inline bool IsMissionFinal(::StringW  missionId) ;

/// @brief Method SetFinalMissionId addr 0x23528d0 size 0x8 virtual false final false
inline void SetFinalMissionId(::StringW  missionId) ;

/// @brief Method WillFinishGameAfterThisMission addr 0x23528d8 size 0x48 virtual false final false
inline bool WillFinishGameAfterThisMission(::StringW  missionId) ;

/// @brief Method SetMissionCleared addr 0x2352920 size 0x8 virtual false final false
inline void SetMissionCleared(::StringW  missionId) ;

/// @brief Method __SetMissionCleared addr 0x2352928 size 0x4c virtual false final false
inline void __SetMissionCleared(::StringW  missionId, bool  cleared) ;

/// @brief Method UpdateNumberOfClearedMissions addr 0x23525cc size 0x198 virtual false final false
inline int32_t UpdateNumberOfClearedMissions() ;

static inline ::GlobalNamespace::CampaignProgressModel* New_ctor() ;

/// @brief Method .ctor addr 0x2352974 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CampaignProgressModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CampaignProgressModel(CampaignProgressModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CampaignProgressModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CampaignProgressModel(CampaignProgressModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CampaignProgressModel()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CampaignProgressModel, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CampaignProgressModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CampaignProgressModel*, "", "CampaignProgressModel");

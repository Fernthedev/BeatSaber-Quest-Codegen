#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerMissionStatsData)
// Forward declare root types
namespace GlobalNamespace {
class PlayerMissionStatsData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerMissionStatsData);
// Type: ::PlayerMissionStatsData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4633))
// CS Name: ::PlayerMissionStatsData*
class CORDL_TYPE PlayerMissionStatsData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _missionId offset 0x10
 __declspec(property(get=__get__missionId, put=__set__missionId)) ::StringW  _missionId;

/// @brief Field _cleared offset 0x18
 __declspec(property(get=__get__cleared, put=__set__cleared)) bool  _cleared;

 __declspec(property(get=get_missionId)) ::StringW  missionId;

 __declspec(property(get=get_cleared, put=set_cleared)) bool  cleared;

constexpr void __set__missionId(::StringW  value) ;

constexpr ::StringW& __get__missionId() ;

constexpr ::StringW const& __get__missionId() const;

constexpr void __set__cleared(bool  value) ;

constexpr bool& __get__cleared() ;

constexpr bool const& __get__cleared() const;

/// @brief Method get_missionId addr 0x23727ac size 0x8 virtual false final false
inline ::StringW get_missionId() ;

/// @brief Method get_cleared addr 0x23727b4 size 0x8 virtual false final false
inline bool get_cleared() ;

/// @brief Method set_cleared addr 0x23727bc size 0xc virtual false final false
inline void set_cleared(bool  value) ;

static inline ::GlobalNamespace::PlayerMissionStatsData* New_ctor(::StringW  missionId, bool  cleared) ;

/// @brief Method .ctor addr 0x23727c8 size 0x30 virtual false final false
inline void _ctor(::StringW  missionId, bool  cleared) ;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMissionStatsData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerMissionStatsData(PlayerMissionStatsData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerMissionStatsData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerMissionStatsData(PlayerMissionStatsData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlayerMissionStatsData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerMissionStatsData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerMissionStatsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerMissionStatsData*, "", "PlayerMissionStatsData");

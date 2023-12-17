#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
CORDL_MODULE_EXPORT(GameCoreSceneSetupData)
// Forward declare root types
namespace GlobalNamespace {
class GameCoreSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameCoreSceneSetupData);
// Type: ::GameCoreSceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15408))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6049))
// CS Name: ::GameCoreSceneSetupData*
class CORDL_TYPE GameCoreSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::GlobalNamespace::SceneSetupData)]{};

static inline ::GlobalNamespace::GameCoreSceneSetupData* New_ctor() ;

/// @brief Method .ctor addr 0x231c40c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetupData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameCoreSceneSetupData(GameCoreSceneSetupData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetupData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameCoreSceneSetupData(GameCoreSceneSetupData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GameCoreSceneSetupData()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameCoreSceneSetupData, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameCoreSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameCoreSceneSetupData*, "", "GameCoreSceneSetupData");

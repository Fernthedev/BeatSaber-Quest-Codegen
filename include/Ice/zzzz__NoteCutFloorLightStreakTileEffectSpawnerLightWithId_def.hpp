#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(NoteCutFloorLightStreakTileEffectSpawnerLightWithId)
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawner;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Ice {
class NoteCutFloorLightStreakTileEffectSpawnerLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId);
// Type: Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16172))
// CS Name: ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*
class CORDL_TYPE NoteCutFloorLightStreakTileEffectSpawnerLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _noteCutFloorLightStreakTileEffectSpawner offset 0x30
 __declspec(property(get=__get__noteCutFloorLightStreakTileEffectSpawner, put=__set__noteCutFloorLightStreakTileEffectSpawner)) ::Ice::NoteCutFloorLightStreakTileEffectSpawner*  _noteCutFloorLightStreakTileEffectSpawner;

constexpr void __set__noteCutFloorLightStreakTileEffectSpawner(::Ice::NoteCutFloorLightStreakTileEffectSpawner*  value) ;

constexpr ::Ice::NoteCutFloorLightStreakTileEffectSpawner* __get__noteCutFloorLightStreakTileEffectSpawner() ;

constexpr ::cordl_internals::to_const_pointer<::Ice::NoteCutFloorLightStreakTileEffectSpawner*> __get__noteCutFloorLightStreakTileEffectSpawner() const;

/// @brief Method ColorWasSet addr 0x12a0050 size 0x20 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x12a0070 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawnerLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoteCutFloorLightStreakTileEffectSpawnerLightWithId(NoteCutFloorLightStreakTileEffectSpawnerLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoteCutFloorLightStreakTileEffectSpawnerLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoteCutFloorLightStreakTileEffectSpawnerLightWithId(NoteCutFloorLightStreakTileEffectSpawnerLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoteCutFloorLightStreakTileEffectSpawnerLightWithId()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId, 0x38>, "Size mismatch!");

} // namespace end def Ice
NEED_NO_BOX(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::Ice::NoteCutFloorLightStreakTileEffectSpawnerLightWithId*, "Ice", "NoteCutFloorLightStreakTileEffectSpawnerLightWithId");

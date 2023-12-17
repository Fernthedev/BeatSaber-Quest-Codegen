#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OffsetByBeatmapObjectSpawnCenter)
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
// Forward declare root types
namespace GlobalNamespace {
class OffsetByBeatmapObjectSpawnCenter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter);
// Type: ::OffsetByBeatmapObjectSpawnCenter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4694))
// CS Name: ::OffsetByBeatmapObjectSpawnCenter*
class CORDL_TYPE OffsetByBeatmapObjectSpawnCenter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _spawnCenter offset 0x18
 __declspec(property(get=__get__spawnCenter, put=__set__spawnCenter)) ::GlobalNamespace::BeatmapObjectSpawnCenter*  _spawnCenter;

constexpr void __set__spawnCenter(::GlobalNamespace::BeatmapObjectSpawnCenter*  value) ;

constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter* __get__spawnCenter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectSpawnCenter*> __get__spawnCenter() const;

/// @brief Method Start addr 0x2376610 size 0xa4 virtual false final false
inline void Start() ;

/// @brief Method HandleSpawnCenterDistanceWasFound addr 0x23766b4 size 0x68 virtual false final false
inline void HandleSpawnCenterDistanceWasFound(float_t  distance) ;

static inline ::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter* New_ctor() ;

/// @brief Method .ctor addr 0x23767cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OffsetByBeatmapObjectSpawnCenter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OffsetByBeatmapObjectSpawnCenter(OffsetByBeatmapObjectSpawnCenter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OffsetByBeatmapObjectSpawnCenter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OffsetByBeatmapObjectSpawnCenter(OffsetByBeatmapObjectSpawnCenter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OffsetByBeatmapObjectSpawnCenter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OffsetByBeatmapObjectSpawnCenter*, "", "OffsetByBeatmapObjectSpawnCenter");

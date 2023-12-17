#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapDataObstaclesAndBombsTransform)
namespace GlobalNamespace {
class __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;
}
namespace GlobalNamespace {
struct __GameplayModifiers__EnabledObstacleType;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataObstaclesAndBombsTransform;
}
namespace GlobalNamespace {
class __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4127))
// CS Name: ::BeatmapDataObstaclesAndBombsTransform::<>c__DisplayClass0_0*
class CORDL_TYPE __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field enabledObstaclesType offset 0x10
 __declspec(property(get=__get_enabledObstaclesType, put=__set_enabledObstaclesType)) ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  enabledObstaclesType;

/// @brief Field noBombs offset 0x14
 __declspec(property(get=__get_noBombs, put=__set_noBombs)) bool  noBombs;

constexpr void __set_enabledObstaclesType(::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  value) ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType& __get_enabledObstaclesType() ;

constexpr ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType const& __get_enabledObstaclesType() const;

constexpr void __set_noBombs(bool  value) ;

constexpr bool& __get_noBombs() ;

constexpr bool const& __get_noBombs() const;

static inline ::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0* New_ctor() ;

/// @brief Method .ctor addr 0x223a678 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CreateTransformedData>g__ProcessData|0 addr 0x223a788 size 0x2c virtual false final false
inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem*  beatmapDataItem) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0(__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0(__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapDataObstaclesAndBombsTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4128))
// CS Name: ::BeatmapDataObstaclesAndBombsTransform*
class CORDL_TYPE BeatmapDataObstaclesAndBombsTransform : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateTransformedData addr 0x223a544 size 0x134 virtual false final false
static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData, ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  enabledObstaclesType, bool  noBombs) ;

/// @brief Method ShouldUseBeatmapDataItem addr 0x223a680 size 0x108 virtual false final false
static inline bool ShouldUseBeatmapDataItem(::GlobalNamespace::BeatmapDataItem*  beatmapDataItem, ::GlobalNamespace::__GameplayModifiers__EnabledObstacleType  enabledObstaclesType, bool  noBombs) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesAndBombsTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataObstaclesAndBombsTransform(BeatmapDataObstaclesAndBombsTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataObstaclesAndBombsTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataObstaclesAndBombsTransform(BeatmapDataObstaclesAndBombsTransform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataObstaclesAndBombsTransform()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataObstaclesAndBombsTransform*, "", "BeatmapDataObstaclesAndBombsTransform");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataObstaclesAndBombsTransform____c__DisplayClass0_0*, "", "BeatmapDataObstaclesAndBombsTransform/<>c__DisplayClass0_0");

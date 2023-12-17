#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDataMirrorTransform)
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class __BeatmapDataMirrorTransform____c__DisplayClass0_0;
}
namespace GlobalNamespace {
class BeatmapDataItem;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDataMirrorTransform;
}
namespace GlobalNamespace {
class __BeatmapDataMirrorTransform____c__DisplayClass0_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDataMirrorTransform);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0);
// Type: ::<>c__DisplayClass0_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4124))
// CS Name: ::BeatmapDataMirrorTransform::<>c__DisplayClass0_0*
class CORDL_TYPE __BeatmapDataMirrorTransform____c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field numberOfLines offset 0x10
 __declspec(property(get=__get_numberOfLines, put=__set_numberOfLines)) int32_t  numberOfLines;

constexpr void __set_numberOfLines(int32_t  value) ;

constexpr int32_t& __get_numberOfLines() ;

constexpr int32_t const& __get_numberOfLines() const;

static inline ::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0* New_ctor() ;

/// @brief Method .ctor addr 0x223a28c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <CreateTransformedData>g__ProcessData|0 addr 0x223a294 size 0xe0 virtual false final false
inline ::GlobalNamespace::BeatmapDataItem* _CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem*  beatmapDataItem) ;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataMirrorTransform____c__DisplayClass0_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapDataMirrorTransform____c__DisplayClass0_0(__BeatmapDataMirrorTransform____c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDataMirrorTransform____c__DisplayClass0_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapDataMirrorTransform____c__DisplayClass0_0(__BeatmapDataMirrorTransform____c__DisplayClass0_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BeatmapDataMirrorTransform____c__DisplayClass0_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapDataMirrorTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4125))
// CS Name: ::BeatmapDataMirrorTransform*
class CORDL_TYPE BeatmapDataMirrorTransform : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method CreateTransformedData addr 0x223a0fc size 0x190 virtual false final false
static inline ::GlobalNamespace::IReadonlyBeatmapData* CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData*  beatmapData) ;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataMirrorTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDataMirrorTransform(BeatmapDataMirrorTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDataMirrorTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDataMirrorTransform(BeatmapDataMirrorTransform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BeatmapDataMirrorTransform()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDataMirrorTransform, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDataMirrorTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataMirrorTransform*, "", "BeatmapDataMirrorTransform");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0*, "", "BeatmapDataMirrorTransform/<>c__DisplayClass0_0");

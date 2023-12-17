#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
CORDL_MODULE_EXPORT(SelectLevelPackDestination)
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectLevelPackDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectLevelPackDestination);
// Type: ::SelectLevelPackDestination
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4155))
// CS Name: ::SelectLevelPackDestination*
class CORDL_TYPE SelectLevelPackDestination : public ::GlobalNamespace::MenuDestination {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::GlobalNamespace::MenuDestination)]{};

/// @brief Field beatmapLevelPack offset 0x10
 __declspec(property(get=__get_beatmapLevelPack, put=__set_beatmapLevelPack)) ::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack;

constexpr void __set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack*  value) ;

constexpr ::GlobalNamespace::IBeatmapLevelPack* __get_beatmapLevelPack() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> __get_beatmapLevelPack() const;

static inline ::GlobalNamespace::SelectLevelPackDestination* New_ctor(::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack) ;

/// @brief Method .ctor addr 0x223cf80 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::IBeatmapLevelPack*  beatmapLevelPack) ;

// Ctor Parameters [CppParam { name: "", ty: "SelectLevelPackDestination", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SelectLevelPackDestination(SelectLevelPackDestination && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SelectLevelPackDestination", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SelectLevelPackDestination(SelectLevelPackDestination const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SelectLevelPackDestination()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelPackDestination, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectLevelPackDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelPackDestination*, "", "SelectLevelPackDestination");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
CORDL_MODULE_EXPORT(LightColorGroup)
namespace GlobalNamespace {
class IEditTimeValidated;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorGroup);
// Type: ::LightColorGroup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4935))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4921))
// CS Name: ::LightColorGroup*
class CORDL_TYPE LightColorGroup : public ::GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::LightGroupSubsystem)]{};

/// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
constexpr operator  ::GlobalNamespace::IEditTimeValidated*() noexcept;

static inline ::GlobalNamespace::LightColorGroup* New_ctor() ;

/// @brief Method .ctor addr 0x23a8068 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightColorGroup(LightColorGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightColorGroup(LightColorGroup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightColorGroup()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorGroup, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroup*, "", "LightColorGroup");

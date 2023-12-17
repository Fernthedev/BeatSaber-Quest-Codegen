#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DropdownMenuItem)
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenuItem);
// Type: UnityEngine.UIElements::DropdownMenuItem
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6945))
// CS Name: ::UnityEngine.UIElements::DropdownMenuItem*
class CORDL_TYPE DropdownMenuItem : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline ::UnityEngine::UIElements::DropdownMenuItem* New_ctor() ;

/// @brief Method .ctor addr 0x2e0853c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DropdownMenuItem(DropdownMenuItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropdownMenuItem(DropdownMenuItem const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DropdownMenuItem()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenuItem, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenuItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuItem*, "UnityEngine.UIElements", "DropdownMenuItem");

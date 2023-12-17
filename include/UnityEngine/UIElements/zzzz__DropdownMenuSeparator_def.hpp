#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DropdownMenuSeparator)
// Forward declare root types
namespace UnityEngine::UIElements {
class DropdownMenuSeparator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DropdownMenuSeparator);
// Type: UnityEngine.UIElements::DropdownMenuSeparator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6945))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6946))
// CS Name: ::UnityEngine.UIElements::DropdownMenuSeparator*
class CORDL_TYPE DropdownMenuSeparator : public ::UnityEngine::UIElements::DropdownMenuItem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::UIElements::DropdownMenuItem)]{};

/// @brief Field <subMenuPath>k__BackingField offset 0x10
 __declspec(property(get=__get__subMenuPath_k__BackingField, put=__set__subMenuPath_k__BackingField)) ::StringW  _subMenuPath_k__BackingField;

constexpr void __set__subMenuPath_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__subMenuPath_k__BackingField() ;

constexpr ::StringW const& __get__subMenuPath_k__BackingField() const;

static inline ::UnityEngine::UIElements::DropdownMenuSeparator* New_ctor(::StringW  subMenuPath) ;

/// @brief Method .ctor addr 0x2e08544 size 0x28 virtual false final false
inline void _ctor(::StringW  subMenuPath) ;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuSeparator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DropdownMenuSeparator(DropdownMenuSeparator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DropdownMenuSeparator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DropdownMenuSeparator(DropdownMenuSeparator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DropdownMenuSeparator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DropdownMenuSeparator, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenuSeparator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuSeparator*, "UnityEngine.UIElements", "DropdownMenuSeparator");

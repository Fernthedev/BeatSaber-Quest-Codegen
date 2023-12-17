#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DisplayStringFormatAttribute)
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class DisplayStringFormatAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute);
// Type: UnityEngine.InputSystem.Utilities::DisplayStringFormatAttribute
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6665))
// CS Name: ::UnityEngine.InputSystem.Utilities::DisplayStringFormatAttribute*
class CORDL_TYPE DisplayStringFormatAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <formatString>k__BackingField offset 0x10
 __declspec(property(get=__get__formatString_k__BackingField, put=__set__formatString_k__BackingField)) ::StringW  _formatString_k__BackingField;

 __declspec(property(get=get_formatString, put=set_formatString)) ::StringW  formatString;

constexpr void __set__formatString_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__formatString_k__BackingField() ;

constexpr ::StringW const& __get__formatString_k__BackingField() const;

/// @brief Method get_formatString addr 0x2b0f9cc size 0x8 virtual false final false
inline ::StringW get_formatString() ;

/// @brief Method set_formatString addr 0x2b0f9d4 size 0x8 virtual false final false
inline void set_formatString(::StringW  value) ;

static inline ::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute* New_ctor(::StringW  formatString) ;

/// @brief Method .ctor addr 0x2b0f9dc size 0x28 virtual false final false
inline void _ctor(::StringW  formatString) ;

// Ctor Parameters [CppParam { name: "", ty: "DisplayStringFormatAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DisplayStringFormatAttribute(DisplayStringFormatAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisplayStringFormatAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisplayStringFormatAttribute(DisplayStringFormatAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DisplayStringFormatAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::DisplayStringFormatAttribute*, "UnityEngine.InputSystem.Utilities", "DisplayStringFormatAttribute");

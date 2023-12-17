#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ButtonAttribute)
// Forward declare root types
namespace BGLib::UnityExtension {
class ButtonAttribute;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::ButtonAttribute);
// Type: BGLib.UnityExtension::ButtonAttribute
namespace BGLib::UnityExtension {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15879))
// CS Name: ::BGLib.UnityExtension::ButtonAttribute*
class CORDL_TYPE ButtonAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::PropertyAttribute)]{};

/// @brief Field title offset 0x10
 __declspec(property(get=__get_title, put=__set_title)) ::StringW  title;

constexpr void __set_title(::StringW  value) ;

constexpr ::StringW& __get_title() ;

constexpr ::StringW const& __get_title() const;

static inline ::BGLib::UnityExtension::ButtonAttribute* New_ctor(::StringW  title) ;

/// @brief Method .ctor addr 0xe28e18 size 0x28 virtual false final false
inline void _ctor(::StringW  title) ;

// Ctor Parameters [CppParam { name: "", ty: "ButtonAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ButtonAttribute(ButtonAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ButtonAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ButtonAttribute(ButtonAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ButtonAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::ButtonAttribute, 0x18>, "Size mismatch!");

} // namespace end def BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::ButtonAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::ButtonAttribute*, "BGLib.UnityExtension", "ButtonAttribute");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RazorDirectiveAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class RazorDirectiveAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::RazorDirectiveAttribute);
// Type: JetBrains.Annotations::RazorDirectiveAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15803))
// CS Name: ::JetBrains.Annotations::RazorDirectiveAttribute*
class CORDL_TYPE RazorDirectiveAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Directive>k__BackingField offset 0x10
 __declspec(property(get=__get__Directive_k__BackingField, put=__set__Directive_k__BackingField)) ::StringW  _Directive_k__BackingField;

 __declspec(property(get=get_Directive, put=set_Directive)) ::StringW  Directive;

constexpr void __set__Directive_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Directive_k__BackingField() ;

constexpr ::StringW const& __get__Directive_k__BackingField() const;

static inline ::JetBrains::Annotations::RazorDirectiveAttribute* New_ctor(::StringW  directive) ;

/// @brief Method .ctor addr 0x2eba8ec size 0x28 virtual false final false
inline void _ctor(::StringW  directive) ;

/// @brief Method get_Directive addr 0x2eba914 size 0x8 virtual false final false
inline ::StringW get_Directive() ;

/// @brief Method set_Directive addr 0x2eba91c size 0x8 virtual false final false
inline void set_Directive(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "RazorDirectiveAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RazorDirectiveAttribute(RazorDirectiveAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RazorDirectiveAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RazorDirectiveAttribute(RazorDirectiveAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RazorDirectiveAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::RazorDirectiveAttribute, 0x18>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::RazorDirectiveAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::RazorDirectiveAttribute*, "JetBrains.Annotations", "RazorDirectiveAttribute");

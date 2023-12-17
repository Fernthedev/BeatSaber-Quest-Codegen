#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyCopyrightAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyCopyrightAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyCopyrightAttribute);
// Type: System.Reflection::AssemblyCopyrightAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3447))
// CS Name: ::System.Reflection::AssemblyCopyrightAttribute*
class CORDL_TYPE AssemblyCopyrightAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Copyright>k__BackingField offset 0x10
 __declspec(property(get=__get__Copyright_k__BackingField, put=__set__Copyright_k__BackingField)) ::StringW  _Copyright_k__BackingField;

constexpr void __set__Copyright_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Copyright_k__BackingField() ;

constexpr ::StringW const& __get__Copyright_k__BackingField() const;

static inline ::System::Reflection::AssemblyCopyrightAttribute* New_ctor(::StringW  copyright) ;

/// @brief Method .ctor addr 0x24e5ed0 size 0x28 virtual false final false
inline void _ctor(::StringW  copyright) ;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyCopyrightAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyCopyrightAttribute(AssemblyCopyrightAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyCopyrightAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyCopyrightAttribute(AssemblyCopyrightAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssemblyCopyrightAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyCopyrightAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyCopyrightAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyCopyrightAttribute*, "System.Reflection", "AssemblyCopyrightAttribute");

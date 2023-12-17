#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyTitleAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyTitleAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyTitleAttribute);
// Type: System.Reflection::AssemblyTitleAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3456))
// CS Name: ::System.Reflection::AssemblyTitleAttribute*
class CORDL_TYPE AssemblyTitleAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Title>k__BackingField offset 0x10
 __declspec(property(get=__get__Title_k__BackingField, put=__set__Title_k__BackingField)) ::StringW  _Title_k__BackingField;

constexpr void __set__Title_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Title_k__BackingField() ;

constexpr ::StringW const& __get__Title_k__BackingField() const;

static inline ::System::Reflection::AssemblyTitleAttribute* New_ctor(::StringW  title) ;

/// @brief Method .ctor addr 0x24e6060 size 0x28 virtual false final false
inline void _ctor(::StringW  title) ;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyTitleAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyTitleAttribute(AssemblyTitleAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyTitleAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyTitleAttribute(AssemblyTitleAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssemblyTitleAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyTitleAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyTitleAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyTitleAttribute*, "System.Reflection", "AssemblyTitleAttribute");

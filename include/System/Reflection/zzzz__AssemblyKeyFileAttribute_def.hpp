#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyKeyFileAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyKeyFileAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyKeyFileAttribute);
// Type: System.Reflection::AssemblyKeyFileAttribute
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3453))
// CS Name: ::System.Reflection::AssemblyKeyFileAttribute*
class CORDL_TYPE AssemblyKeyFileAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <KeyFile>k__BackingField offset 0x10
 __declspec(property(get=__get__KeyFile_k__BackingField, put=__set__KeyFile_k__BackingField)) ::StringW  _KeyFile_k__BackingField;

constexpr void __set__KeyFile_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__KeyFile_k__BackingField() ;

constexpr ::StringW const& __get__KeyFile_k__BackingField() const;

static inline ::System::Reflection::AssemblyKeyFileAttribute* New_ctor(::StringW  keyFile) ;

/// @brief Method .ctor addr 0x24e6010 size 0x28 virtual false final false
inline void _ctor(::StringW  keyFile) ;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyKeyFileAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyKeyFileAttribute(AssemblyKeyFileAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyKeyFileAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyKeyFileAttribute(AssemblyKeyFileAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssemblyKeyFileAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyKeyFileAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyKeyFileAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyKeyFileAttribute*, "System.Reflection", "AssemblyKeyFileAttribute");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeInformation)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class TypeInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::TypeInformation);
// Type: System.Runtime.Serialization.Formatters.Binary::TypeInformation
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3285))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::TypeInformation*
class CORDL_TYPE TypeInformation : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field fullTypeName offset 0x10
 __declspec(property(get=__get_fullTypeName, put=__set_fullTypeName)) ::StringW  fullTypeName;

/// @brief Field assemblyString offset 0x18
 __declspec(property(get=__get_assemblyString, put=__set_assemblyString)) ::StringW  assemblyString;

/// @brief Field hasTypeForwardedFrom offset 0x20
 __declspec(property(get=__get_hasTypeForwardedFrom, put=__set_hasTypeForwardedFrom)) bool  hasTypeForwardedFrom;

 __declspec(property(get=get_FullTypeName)) ::StringW  FullTypeName;

 __declspec(property(get=get_AssemblyString)) ::StringW  AssemblyString;

 __declspec(property(get=get_HasTypeForwardedFrom)) bool  HasTypeForwardedFrom;

constexpr void __set_fullTypeName(::StringW  value) ;

constexpr ::StringW& __get_fullTypeName() ;

constexpr ::StringW const& __get_fullTypeName() const;

constexpr void __set_assemblyString(::StringW  value) ;

constexpr ::StringW& __get_assemblyString() ;

constexpr ::StringW const& __get_assemblyString() const;

constexpr void __set_hasTypeForwardedFrom(bool  value) ;

constexpr bool& __get_hasTypeForwardedFrom() ;

constexpr bool const& __get_hasTypeForwardedFrom() const;

/// @brief Method get_FullTypeName addr 0x24cb3d0 size 0x8 virtual false final false
inline ::StringW get_FullTypeName() ;

/// @brief Method get_AssemblyString addr 0x24cb3d8 size 0x8 virtual false final false
inline ::StringW get_AssemblyString() ;

/// @brief Method get_HasTypeForwardedFrom addr 0x24cb3e0 size 0x8 virtual false final false
inline bool get_HasTypeForwardedFrom() ;

static inline ::System::Runtime::Serialization::Formatters::Binary::TypeInformation* New_ctor(::StringW  fullTypeName, ::StringW  assemblyString, bool  hasTypeForwardedFrom) ;

/// @brief Method .ctor addr 0x24cb3e8 size 0x3c virtual false final false
inline void _ctor(::StringW  fullTypeName, ::StringW  assemblyString, bool  hasTypeForwardedFrom) ;

// Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeInformation(TypeInformation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeInformation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeInformation(TypeInformation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeInformation()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::TypeInformation, 0x28>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::TypeInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::TypeInformation*, "System.Runtime.Serialization.Formatters.Binary", "TypeInformation");

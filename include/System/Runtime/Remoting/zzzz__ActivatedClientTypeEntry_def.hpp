#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ActivatedClientTypeEntry)
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Contexts {
class IContextAttribute;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ActivatedClientTypeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ActivatedClientTypeEntry);
// Type: System.Runtime.Remoting::ActivatedClientTypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3079))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3053))
// CS Name: ::System.Runtime.Remoting::ActivatedClientTypeEntry*
class CORDL_TYPE ActivatedClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Runtime::Remoting::TypeEntry)]{};

/// @brief Field applicationUrl offset 0x20
 __declspec(property(get=__get_applicationUrl, put=__set_applicationUrl)) ::StringW  applicationUrl;

/// @brief Field obj_type offset 0x28
 __declspec(property(get=__get_obj_type, put=__set_obj_type)) ::System::Type*  obj_type;

 __declspec(property(get=get_ApplicationUrl)) ::StringW  ApplicationUrl;

 __declspec(property(get=get_ContextAttributes)) ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*,::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*>  ContextAttributes;

 __declspec(property(get=get_ObjectType)) ::System::Type*  ObjectType;

constexpr void __set_applicationUrl(::StringW  value) ;

constexpr ::StringW& __get_applicationUrl() ;

constexpr ::StringW const& __get_applicationUrl() const;

constexpr void __set_obj_type(::System::Type*  value) ;

constexpr ::System::Type* __get_obj_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_obj_type() const;

static inline ::System::Runtime::Remoting::ActivatedClientTypeEntry* New_ctor(::StringW  typeName, ::StringW  assemblyName, ::StringW  appUrl) ;

/// @brief Method .ctor addr 0x2484d94 size 0x130 virtual false final false
inline void _ctor(::StringW  typeName, ::StringW  assemblyName, ::StringW  appUrl) ;

/// @brief Method get_ApplicationUrl addr 0x2484ecc size 0x8 virtual false final false
inline ::StringW get_ApplicationUrl() ;

/// @brief Method get_ContextAttributes addr 0x2484ed4 size 0x8 virtual false final false
inline ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*,::Array<::System::Runtime::Remoting::Contexts::IContextAttribute*>*> get_ContextAttributes() ;

/// @brief Method get_ObjectType addr 0x2484edc size 0x8 virtual false final false
inline ::System::Type* get_ObjectType() ;

/// @brief Method ToString addr 0x2484ee4 size 0x14 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "ActivatedClientTypeEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivatedClientTypeEntry(ActivatedClientTypeEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivatedClientTypeEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivatedClientTypeEntry(ActivatedClientTypeEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ActivatedClientTypeEntry()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ActivatedClientTypeEntry, 0x30>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ActivatedClientTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ActivatedClientTypeEntry*, "System.Runtime.Remoting", "ActivatedClientTypeEntry");

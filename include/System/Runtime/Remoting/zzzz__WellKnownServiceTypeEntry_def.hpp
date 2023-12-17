#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(WellKnownServiceTypeEntry)
namespace System::Runtime::Remoting {
struct WellKnownObjectMode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class WellKnownServiceTypeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::WellKnownServiceTypeEntry);
// Type: System.Runtime.Remoting::WellKnownServiceTypeEntry
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3079))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3083))
// CS Name: ::System.Runtime.Remoting::WellKnownServiceTypeEntry*
class CORDL_TYPE WellKnownServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Runtime::Remoting::TypeEntry)]{};

/// @brief Field obj_type offset 0x20
 __declspec(property(get=__get_obj_type, put=__set_obj_type)) ::System::Type*  obj_type;

/// @brief Field obj_uri offset 0x28
 __declspec(property(get=__get_obj_uri, put=__set_obj_uri)) ::StringW  obj_uri;

/// @brief Field obj_mode offset 0x30
 __declspec(property(get=__get_obj_mode, put=__set_obj_mode)) ::System::Runtime::Remoting::WellKnownObjectMode  obj_mode;

 __declspec(property(get=get_Mode)) ::System::Runtime::Remoting::WellKnownObjectMode  Mode;

 __declspec(property(get=get_ObjectType)) ::System::Type*  ObjectType;

 __declspec(property(get=get_ObjectUri)) ::StringW  ObjectUri;

constexpr void __set_obj_type(::System::Type*  value) ;

constexpr ::System::Type* __get_obj_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_obj_type() const;

constexpr void __set_obj_uri(::StringW  value) ;

constexpr ::StringW& __get_obj_uri() ;

constexpr ::StringW const& __get_obj_uri() const;

constexpr void __set_obj_mode(::System::Runtime::Remoting::WellKnownObjectMode  value) ;

constexpr ::System::Runtime::Remoting::WellKnownObjectMode& __get_obj_mode() ;

constexpr ::System::Runtime::Remoting::WellKnownObjectMode const& __get_obj_mode() const;

static inline ::System::Runtime::Remoting::WellKnownServiceTypeEntry* New_ctor(::StringW  typeName, ::StringW  assemblyName, ::StringW  objectUri, ::System::Runtime::Remoting::WellKnownObjectMode  mode) ;

/// @brief Method .ctor addr 0x2495a30 size 0x140 virtual false final false
inline void _ctor(::StringW  typeName, ::StringW  assemblyName, ::StringW  objectUri, ::System::Runtime::Remoting::WellKnownObjectMode  mode) ;

/// @brief Method get_Mode addr 0x2495b70 size 0x8 virtual false final false
inline ::System::Runtime::Remoting::WellKnownObjectMode get_Mode() ;

/// @brief Method get_ObjectType addr 0x2495b78 size 0x8 virtual false final false
inline ::System::Type* get_ObjectType() ;

/// @brief Method get_ObjectUri addr 0x2495b80 size 0x8 virtual false final false
inline ::StringW get_ObjectUri() ;

/// @brief Method ToString addr 0x2495b88 size 0x178 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "WellKnownServiceTypeEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WellKnownServiceTypeEntry(WellKnownServiceTypeEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WellKnownServiceTypeEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WellKnownServiceTypeEntry(WellKnownServiceTypeEntry const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 WellKnownServiceTypeEntry()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::WellKnownServiceTypeEntry, 0x38>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::WellKnownServiceTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::WellKnownServiceTypeEntry*, "System.Runtime.Remoting", "WellKnownServiceTypeEntry");

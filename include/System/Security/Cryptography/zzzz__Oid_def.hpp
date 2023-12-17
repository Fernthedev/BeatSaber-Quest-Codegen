#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Oid)
namespace System::Security::Cryptography {
struct OidGroup;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Oid;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Oid);
// Type: System.Security.Cryptography::Oid
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8972))
// CS Name: ::System.Security.Cryptography::Oid*
class CORDL_TYPE Oid : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _value offset 0x10
 __declspec(property(get=__get__value, put=__set__value)) ::StringW  _value;

/// @brief Field _friendlyName offset 0x18
 __declspec(property(get=__get__friendlyName, put=__set__friendlyName)) ::StringW  _friendlyName;

/// @brief Field _group offset 0x20
 __declspec(property(get=__get__group, put=__set__group)) ::System::Security::Cryptography::OidGroup  _group;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

 __declspec(property(get=get_FriendlyName)) ::StringW  FriendlyName;

constexpr void __set__value(::StringW  value) ;

constexpr ::StringW& __get__value() ;

constexpr ::StringW const& __get__value() const;

constexpr void __set__friendlyName(::StringW  value) ;

constexpr ::StringW& __get__friendlyName() ;

constexpr ::StringW const& __get__friendlyName() const;

constexpr void __set__group(::System::Security::Cryptography::OidGroup  value) ;

constexpr ::System::Security::Cryptography::OidGroup& __get__group() ;

constexpr ::System::Security::Cryptography::OidGroup const& __get__group() const;

static inline ::System::Security::Cryptography::Oid* New_ctor() ;

/// @brief Method .ctor addr 0x2975b40 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::Security::Cryptography::Oid* New_ctor(::StringW  oid) ;

/// @brief Method .ctor addr 0x2975b48 size 0x8c virtual false final false
inline void _ctor(::StringW  oid) ;

static inline ::System::Security::Cryptography::Oid* New_ctor(::StringW  value, ::StringW  friendlyName) ;

/// @brief Method .ctor addr 0x2975bd4 size 0x2c virtual false final false
inline void _ctor(::StringW  value, ::StringW  friendlyName) ;

static inline ::System::Security::Cryptography::Oid* New_ctor(::System::Security::Cryptography::Oid*  oid) ;

/// @brief Method .ctor addr 0x2975c00 size 0x84 virtual false final false
inline void _ctor(::System::Security::Cryptography::Oid*  oid) ;

/// @brief Method FromOidValue addr 0x2975c84 size 0x13c virtual false final false
static inline ::System::Security::Cryptography::Oid* FromOidValue(::StringW  oidValue, ::System::Security::Cryptography::OidGroup  group) ;

/// @brief Method get_Value addr 0x2975dfc size 0x8 virtual false final false
inline ::StringW get_Value() ;

/// @brief Method set_Value addr 0x2975e04 size 0x8 virtual false final false
inline void set_Value(::StringW  value) ;

/// @brief Method get_FriendlyName addr 0x2975e0c size 0x84 virtual false final false
inline ::StringW get_FriendlyName() ;

static inline ::System::Security::Cryptography::Oid* New_ctor(::StringW  value, ::StringW  friendlyName, ::System::Security::Cryptography::OidGroup  group) ;

/// @brief Method .ctor addr 0x2975dc0 size 0x3c virtual false final false
inline void _ctor(::StringW  value, ::StringW  friendlyName, ::System::Security::Cryptography::OidGroup  group) ;

// Ctor Parameters [CppParam { name: "", ty: "Oid", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Oid(Oid && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Oid", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Oid(Oid const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Oid()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Oid, 0x28>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Oid);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Oid*, "System.Security.Cryptography", "Oid");

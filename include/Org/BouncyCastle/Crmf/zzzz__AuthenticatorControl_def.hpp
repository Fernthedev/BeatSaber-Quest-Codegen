#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AuthenticatorControl)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crmf {
class IControl;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class AuthenticatorControl;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::AuthenticatorControl);
// Type: Org.BouncyCastle.Crmf::AuthenticatorControl
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(695))
// CS Name: ::Org.BouncyCastle.Crmf::AuthenticatorControl*
class CORDL_TYPE AuthenticatorControl : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field token offset 0x10
 __declspec(property(get=__get_token, put=__set_token)) ::Org::BouncyCastle::Asn1::DerUtf8String*  token;

 __declspec(property(get=get_Type)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  Type;

 __declspec(property(get=get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Value;

/// @brief Convert operator to "::Org::BouncyCastle::Crmf::IControl"
constexpr operator  ::Org::BouncyCastle::Crmf::IControl*() noexcept;

static inline void setStaticF_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_type() ;

constexpr void __set_token(::Org::BouncyCastle::Asn1::DerUtf8String*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerUtf8String* __get_token() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerUtf8String*> __get_token() const;

static inline ::Org::BouncyCastle::Crmf::AuthenticatorControl* New_ctor(::Org::BouncyCastle::Asn1::DerUtf8String*  token) ;

/// @brief Method .ctor addr 0x120dd84 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerUtf8String*  token) ;

static inline ::Org::BouncyCastle::Crmf::AuthenticatorControl* New_ctor(::StringW  token) ;

/// @brief Method .ctor addr 0x120ddac size 0x7c virtual false final false
inline void _ctor(::StringW  token) ;

/// @brief Method get_Type addr 0x120de28 size 0x58 virtual true final true
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Type() ;

/// @brief Method get_Value addr 0x120de80 size 0x8 virtual true final true
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value() ;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatorControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticatorControl(AuthenticatorControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatorControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticatorControl(AuthenticatorControl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AuthenticatorControl()  = default;
public:


// Fields

// Static field type


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::AuthenticatorControl, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::AuthenticatorControl);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::AuthenticatorControl*, "Org.BouncyCastle.Crmf", "AuthenticatorControl");

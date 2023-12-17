#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PopoSigningKeyInput)
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class SubjectPublicKeyInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PopoSigningKeyInput;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput);
// Type: Org.BouncyCastle.Asn1.Crmf::PopoSigningKeyInput
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(120))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PopoSigningKeyInput*
class CORDL_TYPE PopoSigningKeyInput : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field sender offset 0x10
 __declspec(property(get=__get_sender, put=__set_sender)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  sender;

/// @brief Field publicKeyMac offset 0x18
 __declspec(property(get=__get_publicKeyMac, put=__set_publicKeyMac)) ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*  publicKeyMac;

/// @brief Field publicKey offset 0x20
 __declspec(property(get=__get_publicKey, put=__set_publicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  publicKey;

 __declspec(property(get=get_Sender)) ::Org::BouncyCastle::Asn1::X509::GeneralName*  Sender;

 __declspec(property(get=get_PublicKeyMac)) ::Org::BouncyCastle::Asn1::Crmf::PKMacValue*  PublicKeyMac;

 __declspec(property(get=get_PublicKey)) ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  PublicKey;

constexpr void __set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName* __get_sender() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> __get_sender() const;

constexpr void __set_publicKeyMac(::Org::BouncyCastle::Asn1::Crmf::PKMacValue*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* __get_publicKeyMac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::PKMacValue*> __get_publicKeyMac() const;

constexpr void __set_publicKey(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* __get_publicKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*> __get_publicKey() const;

static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe883c8 size 0x174 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe87f84 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralName*  sender, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  spki) ;

/// @brief Method .ctor addr 0xe8853c size 0x30 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralName*  sender, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  spki) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput* New_ctor(::Org::BouncyCastle::Asn1::Crmf::PKMacValue*  pkmac, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  spki) ;

/// @brief Method .ctor addr 0xe8856c size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::PKMacValue*  pkmac, ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*  spki) ;

/// @brief Method get_Sender addr 0xe88598 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Sender() ;

/// @brief Method get_PublicKeyMac addr 0xe885a0 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* get_PublicKeyMac() ;

/// @brief Method get_PublicKey addr 0xe885a8 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_PublicKey() ;

/// @brief Method ToAsn1Object addr 0xe885b0 size 0x104 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PopoSigningKeyInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PopoSigningKeyInput(PopoSigningKeyInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PopoSigningKeyInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PopoSigningKeyInput(PopoSigningKeyInput const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PopoSigningKeyInput()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PopoSigningKeyInput*, "Org.BouncyCastle.Asn1.Crmf", "PopoSigningKeyInput");

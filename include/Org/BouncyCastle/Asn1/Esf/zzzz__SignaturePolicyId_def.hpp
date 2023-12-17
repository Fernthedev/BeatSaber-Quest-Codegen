#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignaturePolicyId)
namespace Org::BouncyCastle::Asn1::Esf {
class OtherHashAlgAndValue;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::Esf {
class SigPolicyQualifierInfo;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Esf {
class SignaturePolicyId;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId);
// Type: Org.BouncyCastle.Asn1.Esf::SignaturePolicyId
namespace Org::BouncyCastle::Asn1::Esf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(155))
// CS Name: ::Org.BouncyCastle.Asn1.Esf::SignaturePolicyId*
class CORDL_TYPE SignaturePolicyId : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field sigPolicyIdentifier offset 0x10
 __declspec(property(get=__get_sigPolicyIdentifier, put=__set_sigPolicyIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier;

/// @brief Field sigPolicyHash offset 0x18
 __declspec(property(get=__get_sigPolicyHash, put=__set_sigPolicyHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash;

/// @brief Field sigPolicyQualifiers offset 0x20
 __declspec(property(get=__get_sigPolicyQualifiers, put=__set_sigPolicyQualifiers)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  sigPolicyQualifiers;

 __declspec(property(get=get_SigPolicyIdentifier)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  SigPolicyIdentifier;

 __declspec(property(get=get_SigPolicyHash)) ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  SigPolicyHash;

constexpr void __set_sigPolicyIdentifier(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_sigPolicyIdentifier() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_sigPolicyIdentifier() const;

constexpr void __set_sigPolicyHash(::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* __get_sigPolicyHash() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*> __get_sigPolicyHash() const;

constexpr void __set_sigPolicyQualifiers(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_sigPolicyQualifiers() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_sigPolicyQualifiers() const;

/// @brief Method GetInstance addr 0xe978d4 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe97a5c size 0x2e4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash) ;

/// @brief Method .ctor addr 0xe97d40 size 0x8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash) ;

static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash, ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*,::Array<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>*>  sigPolicyQualifiers) ;

/// @brief Method .ctor addr 0xe97d48 size 0x104 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash, ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*,::Array<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>*>  sigPolicyQualifiers) ;

static inline ::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash, ::System::Collections::IEnumerable*  sigPolicyQualifiers) ;

/// @brief Method .ctor addr 0xe97e4c size 0x1e4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  sigPolicyIdentifier, ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue*  sigPolicyHash, ::System::Collections::IEnumerable*  sigPolicyQualifiers) ;

/// @brief Method get_SigPolicyIdentifier addr 0xe98030 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_SigPolicyIdentifier() ;

/// @brief Method get_SigPolicyHash addr 0xe98038 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Esf::OtherHashAlgAndValue* get_SigPolicyHash() ;

/// @brief Method GetSigPolicyQualifiers addr 0xe98040 size 0x114 virtual false final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*,::Array<::Org::BouncyCastle::Asn1::Esf::SigPolicyQualifierInfo*>*> GetSigPolicyQualifiers() ;

/// @brief Method ToAsn1Object addr 0xe982dc size 0x160 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignaturePolicyId(SignaturePolicyId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignaturePolicyId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignaturePolicyId(SignaturePolicyId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignaturePolicyId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Esf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Esf::SignaturePolicyId*, "Org.BouncyCastle.Asn1.Esf", "SignaturePolicyId");

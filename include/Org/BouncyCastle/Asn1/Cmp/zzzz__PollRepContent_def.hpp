#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PollRepContent)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PollRepContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PollRepContent);
// Type: Org.BouncyCastle.Asn1.Cmp::PollRepContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(44))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PollRepContent*
class CORDL_TYPE PollRepContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field certReqId offset 0x10
 __declspec(property(get=__get_certReqId, put=__set_certReqId)) ::Org::BouncyCastle::Asn1::DerInteger*  certReqId;

/// @brief Field checkAfter offset 0x18
 __declspec(property(get=__get_checkAfter, put=__set_checkAfter)) ::Org::BouncyCastle::Asn1::DerInteger*  checkAfter;

/// @brief Field reason offset 0x20
 __declspec(property(get=__get_reason, put=__set_reason)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  reason;

 __declspec(property(get=get_CertReqID)) ::Org::BouncyCastle::Asn1::DerInteger*  CertReqID;

 __declspec(property(get=get_CheckAfter)) ::Org::BouncyCastle::Asn1::DerInteger*  CheckAfter;

 __declspec(property(get=get_Reason)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  Reason;

constexpr void __set_certReqId(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_certReqId() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_certReqId() const;

constexpr void __set_checkAfter(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_checkAfter() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_checkAfter() const;

constexpr void __set_reason(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* __get_reason() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*> __get_reason() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::PollRepContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe6da54 size 0xa4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe6a030 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::PollRepContent* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::PollRepContent* New_ctor(::Org::BouncyCastle::Asn1::DerInteger*  certReqId, ::Org::BouncyCastle::Asn1::DerInteger*  checkAfter) ;

/// @brief Method .ctor addr 0xe6daf8 size 0x30 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger*  certReqId, ::Org::BouncyCastle::Asn1::DerInteger*  checkAfter) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::PollRepContent* New_ctor(::Org::BouncyCastle::Asn1::DerInteger*  certReqId, ::Org::BouncyCastle::Asn1::DerInteger*  checkAfter, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  reason) ;

/// @brief Method .ctor addr 0xe6db28 size 0x3c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger*  certReqId, ::Org::BouncyCastle::Asn1::DerInteger*  checkAfter, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  reason) ;

/// @brief Method get_CertReqID addr 0xe6db64 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID() ;

/// @brief Method get_CheckAfter addr 0xe6db6c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_CheckAfter() ;

/// @brief Method get_Reason addr 0xe6db74 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_Reason() ;

/// @brief Method ToAsn1Object addr 0xe6db7c size 0x174 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PollRepContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PollRepContent(PollRepContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PollRepContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PollRepContent(PollRepContent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PollRepContent()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PollRepContent, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PollRepContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PollRepContent*, "Org.BouncyCastle.Asn1.Cmp", "PollRepContent");

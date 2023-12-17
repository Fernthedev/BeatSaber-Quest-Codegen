#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PkiPublicationInfo)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class SinglePubInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiPublicationInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo);
// Type: Org.BouncyCastle.Asn1.Crmf::PkiPublicationInfo
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(116))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PkiPublicationInfo*
class CORDL_TYPE PkiPublicationInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field action offset 0x10
 __declspec(property(get=__get_action, put=__set_action)) ::Org::BouncyCastle::Asn1::DerInteger*  action;

/// @brief Field pubInfos offset 0x18
 __declspec(property(get=__get_pubInfos, put=__set_pubInfos)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  pubInfos;

 __declspec(property(get=get_Action)) ::Org::BouncyCastle::Asn1::DerInteger*  Action;

constexpr void __set_action(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_action() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_action() const;

constexpr void __set_pubInfos(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_pubInfos() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_pubInfos() const;

static inline ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe87014 size 0x68 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe8707c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo* GetInstance(::System::Object*  obj) ;

/// @brief Method get_Action addr 0xe87204 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_Action() ;

/// @brief Method GetPubInfos addr 0xe8720c size 0xfc virtual true final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*,::Array<::Org::BouncyCastle::Asn1::Crmf::SinglePubInfo*>*> GetPubInfos() ;

/// @brief Method ToAsn1Object addr 0xe87490 size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PkiPublicationInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkiPublicationInfo(PkiPublicationInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkiPublicationInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkiPublicationInfo(PkiPublicationInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkiPublicationInfo()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PkiPublicationInfo*, "Org.BouncyCastle.Asn1.Crmf", "PkiPublicationInfo");

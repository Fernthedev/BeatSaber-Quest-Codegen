#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PKMacValue)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PKMacValue;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PKMacValue);
// Type: Org.BouncyCastle.Asn1.Crmf::PKMacValue
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(117))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::PKMacValue*
class CORDL_TYPE PKMacValue : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field algID offset 0x10
 __declspec(property(get=__get_algID, put=__set_algID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algID;

/// @brief Field macValue offset 0x18
 __declspec(property(get=__get_macValue, put=__set_macValue)) ::Org::BouncyCastle::Asn1::DerBitString*  macValue;

 __declspec(property(get=get_AlgID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  AlgID;

 __declspec(property(get=get_MacValue)) ::Org::BouncyCastle::Asn1::DerBitString*  MacValue;

constexpr void __set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_algID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_algID() const;

constexpr void __set_macValue(::Org::BouncyCastle::Asn1::DerBitString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerBitString* __get_macValue() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> __get_macValue() const;

static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe87580 size 0xb4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe87634 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0xe877bc size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  pbmParams, ::Org::BouncyCastle::Asn1::DerBitString*  macValue) ;

/// @brief Method .ctor addr 0xe877d4 size 0xbc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PbmParameter*  pbmParams, ::Org::BouncyCastle::Asn1::DerBitString*  macValue) ;

static inline ::Org::BouncyCastle::Asn1::Crmf::PKMacValue* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algID, ::Org::BouncyCastle::Asn1::DerBitString*  macValue) ;

/// @brief Method .ctor addr 0xe87890 size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algID, ::Org::BouncyCastle::Asn1::DerBitString*  macValue) ;

/// @brief Method get_AlgID addr 0xe878bc size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgID() ;

/// @brief Method get_MacValue addr 0xe878c4 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerBitString* get_MacValue() ;

/// @brief Method ToAsn1Object addr 0xe878cc size 0xf0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "PKMacValue", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PKMacValue(PKMacValue && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKMacValue", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKMacValue(PKMacValue const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PKMacValue()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PKMacValue, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PKMacValue);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PKMacValue*, "Org.BouncyCastle.Asn1.Crmf", "PKMacValue");

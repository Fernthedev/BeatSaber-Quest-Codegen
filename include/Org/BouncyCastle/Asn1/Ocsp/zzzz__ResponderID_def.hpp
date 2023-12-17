#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ResponderID)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Name;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class ResponderID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::ResponderID);
// Type: Org.BouncyCastle.Asn1.Ocsp::ResponderID
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(216))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::ResponderID*
class CORDL_TYPE ResponderID : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field id offset 0x10
 __declspec(property(get=__get_id, put=__set_id)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  id;

 __declspec(property(get=get_Name)) ::Org::BouncyCastle::Asn1::X509::X509Name*  Name;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_id(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_id() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_id() const;

/// @brief Method GetInstance addr 0xf82530 size 0x1ec virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  id) ;

/// @brief Method .ctor addr 0xf8271c size 0x78 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  id) ;

static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* New_ctor(::Org::BouncyCastle::Asn1::X509::X509Name*  id) ;

/// @brief Method .ctor addr 0xf82794 size 0x78 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::X509Name*  id) ;

/// @brief Method GetInstance addr 0xf8280c size 0x1c virtual false final false
static inline ::Org::BouncyCastle::Asn1::Ocsp::ResponderID* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method GetKeyHash addr 0xf82828 size 0x88 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetKeyHash() ;

/// @brief Method get_Name addr 0xf828b0 size 0xb0 virtual true final false
inline ::Org::BouncyCastle::Asn1::X509::X509Name* get_Name() ;

/// @brief Method ToAsn1Object addr 0xf82960 size 0xc0 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "ResponderID", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResponderID(ResponderID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResponderID", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResponderID(ResponderID const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ResponderID()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::ResponderID, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::ResponderID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::ResponderID*, "Org.BouncyCastle.Asn1.Ocsp", "ResponderID");

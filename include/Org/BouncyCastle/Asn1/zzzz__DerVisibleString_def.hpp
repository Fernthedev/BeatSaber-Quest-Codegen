#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerVisibleString)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerVisibleString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerVisibleString);
// Type: Org.BouncyCastle.Asn1::DerVisibleString
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(33))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(522))
// CS Name: ::Org.BouncyCastle.Asn1::DerVisibleString*
class CORDL_TYPE DerVisibleString : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::DerStringBase)]{};

/// @brief Field str offset 0x10
 __declspec(property(get=__get_str, put=__set_str)) ::StringW  str;

constexpr void __set_str(::StringW  value) ;

constexpr ::StringW& __get_str() ;

constexpr ::StringW const& __get_str() const;

/// @brief Method GetInstance addr 0x11c5dd4 size 0x1c8 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerVisibleString* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0x11c5f9c size 0x28 virtual false final false
static inline ::Org::BouncyCastle::Asn1::DerVisibleString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

static inline ::Org::BouncyCastle::Asn1::DerVisibleString* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str) ;

/// @brief Method .ctor addr 0x11b7500 size 0x24 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str) ;

static inline ::Org::BouncyCastle::Asn1::DerVisibleString* New_ctor(::StringW  str) ;

/// @brief Method .ctor addr 0x11c5fc4 size 0x78 virtual false final false
inline void _ctor(::StringW  str) ;

/// @brief Method GetString addr 0x11c603c size 0x8 virtual true final false
inline ::StringW GetString() ;

/// @brief Method GetOctets addr 0x11c6044 size 0xc virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetOctets() ;

/// @brief Method Encode addr 0x11c6050 size 0x30 virtual true final false
inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut) ;

/// @brief Method Asn1Equals addr 0x11c6080 size 0xa0 virtual true final false
inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object*  asn1Object) ;

/// @brief Method Asn1GetHashCode addr 0x11c6120 size 0x1c virtual true final false
inline int32_t Asn1GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "DerVisibleString", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerVisibleString(DerVisibleString && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerVisibleString", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerVisibleString(DerVisibleString const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DerVisibleString()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerVisibleString, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerVisibleString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerVisibleString*, "Org.BouncyCastle.Asn1", "DerVisibleString");

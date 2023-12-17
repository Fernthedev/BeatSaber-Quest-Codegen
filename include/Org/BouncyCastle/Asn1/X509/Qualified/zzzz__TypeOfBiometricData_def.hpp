#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeOfBiometricData)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class TypeOfBiometricData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::TypeOfBiometricData
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(334))
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::TypeOfBiometricData*
class CORDL_TYPE TypeOfBiometricData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field Picture offset 0x0
static constexpr int32_t  Picture{static_cast<int32_t>(0x0)};

/// @brief Field HandwrittenSignature offset 0x0
static constexpr int32_t  HandwrittenSignature{static_cast<int32_t>(0x1)};

/// @brief Field obj offset 0x10
 __declspec(property(get=__get_obj, put=__set_obj)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  obj;

 __declspec(property(get=get_IsPredefined)) bool  IsPredefined;

 __declspec(property(get=get_PredefinedBiometricType)) int32_t  PredefinedBiometricType;

 __declspec(property(get=get_BiometricDataOid)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  BiometricDataOid;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_obj() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_obj() const;

/// @brief Method GetInstance addr 0x10803fc size 0x1e8 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* New_ctor(int32_t  predefinedBiometricType) ;

/// @brief Method .ctor addr 0x1082188 size 0xfc virtual false final false
inline void _ctor(int32_t  predefinedBiometricType) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  biometricDataOid) ;

/// @brief Method .ctor addr 0x1082284 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  biometricDataOid) ;

/// @brief Method get_IsPredefined addr 0x10822ac size 0x7c virtual false final false
inline bool get_IsPredefined() ;

/// @brief Method get_PredefinedBiometricType addr 0x1082328 size 0x80 virtual false final false
inline int32_t get_PredefinedBiometricType() ;

/// @brief Method get_BiometricDataOid addr 0x10823a8 size 0x78 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_BiometricDataOid() ;

/// @brief Method ToAsn1Object addr 0x1082420 size 0x20 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "TypeOfBiometricData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeOfBiometricData(TypeOfBiometricData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeOfBiometricData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeOfBiometricData(TypeOfBiometricData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeOfBiometricData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::TypeOfBiometricData*, "Org.BouncyCastle.Asn1.X509.Qualified", "TypeOfBiometricData");

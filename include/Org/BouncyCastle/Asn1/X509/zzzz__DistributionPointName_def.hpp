#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DistributionPointName)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Text {
class StringBuilder;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralNames;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class DistributionPointName;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::DistributionPointName);
// Type: Org.BouncyCastle.Asn1.X509::DistributionPointName
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(358))
// CS Name: ::Org.BouncyCastle.Asn1.X509::DistributionPointName*
class CORDL_TYPE DistributionPointName : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field FullName offset 0x0
static constexpr int32_t  FullName{static_cast<int32_t>(0x0)};

/// @brief Field NameRelativeToCrlIssuer offset 0x0
static constexpr int32_t  NameRelativeToCrlIssuer{static_cast<int32_t>(0x1)};

/// @brief Field name offset 0x10
 __declspec(property(get=__get_name, put=__set_name)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  name;

/// @brief Field type offset 0x18
 __declspec(property(get=__get_type, put=__set_type)) int32_t  type;

 __declspec(property(get=get_PointType)) int32_t  PointType;

 __declspec(property(get=get_Name)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  Name;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_name(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* __get_name() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> __get_name() const;

constexpr void __set_type(int32_t  value) ;

constexpr int32_t& __get_type() ;

constexpr int32_t const& __get_type() const;

/// @brief Method GetInstance addr 0x118bf9c size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0x118c43c size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(int32_t  type, ::Org::BouncyCastle::Asn1::Asn1Encodable*  name) ;

/// @brief Method .ctor addr 0x118c61c size 0x30 virtual false final false
inline void _ctor(int32_t  type, ::Org::BouncyCastle::Asn1::Asn1Encodable*  name) ;

static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames*  name) ;

/// @brief Method .ctor addr 0x118c64c size 0x2c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::X509::GeneralNames*  name) ;

/// @brief Method get_PointType addr 0x118c678 size 0x8 virtual false final false
inline int32_t get_PointType() ;

/// @brief Method get_Name addr 0x118c680 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Name() ;

static inline ::Org::BouncyCastle::Asn1::X509::DistributionPointName* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj) ;

/// @brief Method .ctor addr 0x118c5c4 size 0x58 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj) ;

/// @brief Method ToAsn1Object addr 0x118c688 size 0x74 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method ToString addr 0x118c6fc size 0x168 virtual true final false
inline ::StringW ToString() ;

/// @brief Method appendObject addr 0x118c864 size 0xf8 virtual false final false
inline void appendObject(::System::Text::StringBuilder*  buf, ::StringW  sep, ::StringW  name, ::StringW  val) ;

// Ctor Parameters [CppParam { name: "", ty: "DistributionPointName", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DistributionPointName(DistributionPointName && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DistributionPointName", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DistributionPointName(DistributionPointName const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DistributionPointName()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::DistributionPointName, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::DistributionPointName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::DistributionPointName*, "Org.BouncyCastle.Asn1.X509", "DistributionPointName");

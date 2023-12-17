#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509AttrCertStoreSelector)
namespace System {
class Object;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateHolder;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
namespace System {
class ICloneable;
}
namespace Org::BouncyCastle::X509 {
class AttributeCertificateIssuer;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::X509 {
class IX509AttributeCertificate;
}
namespace Org::BouncyCastle::X509::Store {
class IX509Selector;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509AttrCertStoreSelector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector);
// Type: Org.BouncyCastle.X509.Store::X509AttrCertStoreSelector
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1846))
// CS Name: ::Org.BouncyCastle.X509.Store::X509AttrCertStoreSelector*
class CORDL_TYPE X509AttrCertStoreSelector : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field attributeCert offset 0x10
 __declspec(property(get=__get_attributeCert, put=__set_attributeCert)) ::Org::BouncyCastle::X509::IX509AttributeCertificate*  attributeCert;

/// @brief Field attributeCertificateValid offset 0x18
 __declspec(property(get=__get_attributeCertificateValid, put=__set_attributeCertificateValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject*  attributeCertificateValid;

/// @brief Field holder offset 0x20
 __declspec(property(get=__get_holder, put=__set_holder)) ::Org::BouncyCastle::X509::AttributeCertificateHolder*  holder;

/// @brief Field issuer offset 0x28
 __declspec(property(get=__get_issuer, put=__set_issuer)) ::Org::BouncyCastle::X509::AttributeCertificateIssuer*  issuer;

/// @brief Field serialNumber offset 0x30
 __declspec(property(get=__get_serialNumber, put=__set_serialNumber)) ::Org::BouncyCastle::Math::BigInteger*  serialNumber;

/// @brief Field targetNames offset 0x38
 __declspec(property(get=__get_targetNames, put=__set_targetNames)) ::Org::BouncyCastle::Utilities::Collections::ISet*  targetNames;

/// @brief Field targetGroups offset 0x40
 __declspec(property(get=__get_targetGroups, put=__set_targetGroups)) ::Org::BouncyCastle::Utilities::Collections::ISet*  targetGroups;

 __declspec(property(get=get_AttributeCert, put=set_AttributeCert)) ::Org::BouncyCastle::X509::IX509AttributeCertificate*  AttributeCert;

 __declspec(property(get=get_AttribueCertificateValid, put=set_AttribueCertificateValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject*  AttribueCertificateValid;

 __declspec(property(get=get_AttributeCertificateValid, put=set_AttributeCertificateValid)) ::Org::BouncyCastle::Utilities::Date::DateTimeObject*  AttributeCertificateValid;

 __declspec(property(get=get_Holder, put=set_Holder)) ::Org::BouncyCastle::X509::AttributeCertificateHolder*  Holder;

 __declspec(property(get=get_Issuer, put=set_Issuer)) ::Org::BouncyCastle::X509::AttributeCertificateIssuer*  Issuer;

 __declspec(property(get=get_SerialNumber, put=set_SerialNumber)) ::Org::BouncyCastle::Math::BigInteger*  SerialNumber;

/// @brief Convert operator to "::Org::BouncyCastle::X509::Store::IX509Selector"
constexpr operator  ::Org::BouncyCastle::X509::Store::IX509Selector*() noexcept;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

constexpr void __set_attributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate*  value) ;

constexpr ::Org::BouncyCastle::X509::IX509AttributeCertificate* __get_attributeCert() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::IX509AttributeCertificate*> __get_attributeCert() const;

constexpr void __set_attributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject*  value) ;

constexpr ::Org::BouncyCastle::Utilities::Date::DateTimeObject* __get_attributeCertificateValid() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Date::DateTimeObject*> __get_attributeCertificateValid() const;

constexpr void __set_holder(::Org::BouncyCastle::X509::AttributeCertificateHolder*  value) ;

constexpr ::Org::BouncyCastle::X509::AttributeCertificateHolder* __get_holder() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::AttributeCertificateHolder*> __get_holder() const;

constexpr void __set_issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer*  value) ;

constexpr ::Org::BouncyCastle::X509::AttributeCertificateIssuer* __get_issuer() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::X509::AttributeCertificateIssuer*> __get_issuer() const;

constexpr void __set_serialNumber(::Org::BouncyCastle::Math::BigInteger*  value) ;

constexpr ::Org::BouncyCastle::Math::BigInteger* __get_serialNumber() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> __get_serialNumber() const;

constexpr void __set_targetNames(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* __get_targetNames() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> __get_targetNames() const;

constexpr void __set_targetGroups(::Org::BouncyCastle::Utilities::Collections::ISet*  value) ;

constexpr ::Org::BouncyCastle::Utilities::Collections::ISet* __get_targetGroups() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Collections::ISet*> __get_targetGroups() const;

static inline ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* New_ctor() ;

/// @brief Method .ctor addr 0x1170214 size 0x84 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* New_ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*  o) ;

/// @brief Method .ctor addr 0x1170298 size 0xf8 virtual false final false
inline void _ctor(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*  o) ;

/// @brief Method Match addr 0x1170390 size 0x814 virtual true final true
inline bool Match(::System::Object*  obj) ;

/// @brief Method Clone addr 0x1170ba4 size 0x60 virtual true final true
inline ::System::Object* Clone() ;

/// @brief Method get_AttributeCert addr 0x1170c04 size 0x8 virtual false final false
inline ::Org::BouncyCastle::X509::IX509AttributeCertificate* get_AttributeCert() ;

/// @brief Method set_AttributeCert addr 0x1170c0c size 0x8 virtual false final false
inline void set_AttributeCert(::Org::BouncyCastle::X509::IX509AttributeCertificate*  value) ;

/// @brief Method get_AttribueCertificateValid addr 0x1170c14 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_AttribueCertificateValid() ;

/// @brief Method set_AttribueCertificateValid addr 0x1170c1c size 0x8 virtual false final false
inline void set_AttribueCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject*  value) ;

/// @brief Method get_AttributeCertificateValid addr 0x1170c24 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_AttributeCertificateValid() ;

/// @brief Method set_AttributeCertificateValid addr 0x1170c2c size 0x8 virtual false final false
inline void set_AttributeCertificateValid(::Org::BouncyCastle::Utilities::Date::DateTimeObject*  value) ;

/// @brief Method get_Holder addr 0x1170c34 size 0x8 virtual false final false
inline ::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder() ;

/// @brief Method set_Holder addr 0x1170c3c size 0x8 virtual false final false
inline void set_Holder(::Org::BouncyCastle::X509::AttributeCertificateHolder*  value) ;

/// @brief Method get_Issuer addr 0x1170c44 size 0x8 virtual false final false
inline ::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer() ;

/// @brief Method set_Issuer addr 0x1170c4c size 0x8 virtual false final false
inline void set_Issuer(::Org::BouncyCastle::X509::AttributeCertificateIssuer*  value) ;

/// @brief Method get_SerialNumber addr 0x1170c54 size 0x8 virtual false final false
inline ::Org::BouncyCastle::Math::BigInteger* get_SerialNumber() ;

/// @brief Method set_SerialNumber addr 0x1170c5c size 0x8 virtual false final false
inline void set_SerialNumber(::Org::BouncyCastle::Math::BigInteger*  value) ;

/// @brief Method AddTargetName addr 0x1170c64 size 0xa8 virtual false final false
inline void AddTargetName(::Org::BouncyCastle::Asn1::X509::GeneralName*  name) ;

/// @brief Method AddTargetName addr 0x1170d0c size 0x2c virtual false final false
inline void AddTargetName(::ArrayW<uint8_t,::Array<uint8_t>*>  name) ;

/// @brief Method SetTargetNames addr 0x1170d38 size 0x18 virtual false final false
inline void SetTargetNames(::System::Collections::IEnumerable*  names) ;

/// @brief Method GetTargetNames addr 0x11711d0 size 0x68 virtual false final false
inline ::System::Collections::IEnumerable* GetTargetNames() ;

/// @brief Method AddTargetGroup addr 0x1171238 size 0xa8 virtual false final false
inline void AddTargetGroup(::Org::BouncyCastle::Asn1::X509::GeneralName*  group) ;

/// @brief Method AddTargetGroup addr 0x11712e0 size 0x2c virtual false final false
inline void AddTargetGroup(::ArrayW<uint8_t,::Array<uint8_t>*>  name) ;

/// @brief Method SetTargetGroups addr 0x117130c size 0x18 virtual false final false
inline void SetTargetGroups(::System::Collections::IEnumerable*  names) ;

/// @brief Method GetTargetGroups addr 0x1171324 size 0x68 virtual false final false
inline ::System::Collections::IEnumerable* GetTargetGroups() ;

/// @brief Method ExtractGeneralNames addr 0x1170d50 size 0x480 virtual false final false
inline ::Org::BouncyCastle::Utilities::Collections::ISet* ExtractGeneralNames(::System::Collections::IEnumerable*  names) ;

// Ctor Parameters [CppParam { name: "", ty: "X509AttrCertStoreSelector", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509AttrCertStoreSelector(X509AttrCertStoreSelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509AttrCertStoreSelector", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509AttrCertStoreSelector(X509AttrCertStoreSelector const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509AttrCertStoreSelector()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector, 0x48>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector*, "Org.BouncyCastle.X509.Store", "X509AttrCertStoreSelector");

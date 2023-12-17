#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtendedKeyUsage)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::Collections {
class ArrayList;
}
namespace Org::BouncyCastle::Asn1::X509 {
class KeyPurposeID;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ExtendedKeyUsage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage);
// Type: Org.BouncyCastle.Asn1.X509::ExtendedKeyUsage
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(360))
// CS Name: ::Org.BouncyCastle.Asn1.X509::ExtendedKeyUsage*
class CORDL_TYPE ExtendedKeyUsage : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field usageTable offset 0x10
 __declspec(property(get=__get_usageTable, put=__set_usageTable)) ::System::Collections::IDictionary*  usageTable;

/// @brief Field seq offset 0x18
 __declspec(property(get=__get_seq, put=__set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  seq;

 __declspec(property(get=get_Count)) int32_t  Count;

constexpr void __set_usageTable(::System::Collections::IDictionary*  value) ;

constexpr ::System::Collections::IDictionary* __get_usageTable() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> __get_usageTable() const;

constexpr void __set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_seq() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_seq() const;

/// @brief Method GetInstance addr 0x118ce68 size 0x18 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  explicitly) ;

/// @brief Method GetInstance addr 0x118ce80 size 0xec virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* GetInstance(::System::Object*  obj) ;

/// @brief Method FromExtensions addr 0x118d458 size 0x74 virtual false final false
static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions*  extensions) ;

static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0x118d074 size 0x3e4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*,::Array<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>*>  usages) ;

/// @brief Method .ctor addr 0x118d4cc size 0x170 virtual false final false
inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*,::Array<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>*>  usages) ;

static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* New_ctor(::System::Collections::ArrayList*  usages) ;

/// @brief Method .ctor addr 0x118d63c size 0x4 virtual false final false
inline void _ctor(::System::Collections::ArrayList*  usages) ;

static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* New_ctor(::System::Collections::IEnumerable*  usages) ;

/// @brief Method .ctor addr 0x118d640 size 0x458 virtual false final false
inline void _ctor(::System::Collections::IEnumerable*  usages) ;

/// @brief Method HasKeyPurposeId addr 0x118da98 size 0xac virtual false final false
inline bool HasKeyPurposeId(::Org::BouncyCastle::Asn1::X509::KeyPurposeID*  keyPurposeId) ;

/// @brief Method GetUsages addr 0x118db44 size 0xe4 virtual false final false
inline ::System::Collections::ArrayList* GetUsages() ;

/// @brief Method GetAllUsages addr 0x118dc28 size 0xdc virtual false final false
inline ::System::Collections::IList* GetAllUsages() ;

/// @brief Method get_Count addr 0x118dd04 size 0xa4 virtual false final false
inline int32_t get_Count() ;

/// @brief Method ToAsn1Object addr 0x118dda8 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedKeyUsage", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtendedKeyUsage(ExtendedKeyUsage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedKeyUsage", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtendedKeyUsage(ExtendedKeyUsage const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExtendedKeyUsage()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*, "Org.BouncyCastle.Asn1.X509", "ExtendedKeyUsage");

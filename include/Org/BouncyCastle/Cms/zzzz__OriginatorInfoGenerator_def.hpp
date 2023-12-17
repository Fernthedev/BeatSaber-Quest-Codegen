#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OriginatorInfoGenerator)
namespace Org::BouncyCastle::X509::Store {
class IX509Store;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::Cms {
class OriginatorInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorInfoGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::OriginatorInfoGenerator);
// Type: Org.BouncyCastle.Cms::OriginatorInfoGenerator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(680))
// CS Name: ::Org.BouncyCastle.Cms::OriginatorInfoGenerator*
class CORDL_TYPE OriginatorInfoGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field origCerts offset 0x10
 __declspec(property(get=__get_origCerts, put=__set_origCerts)) ::System::Collections::IList*  origCerts;

/// @brief Field origCrls offset 0x18
 __declspec(property(get=__get_origCrls, put=__set_origCrls)) ::System::Collections::IList*  origCrls;

constexpr void __set_origCerts(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_origCerts() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_origCerts() const;

constexpr void __set_origCrls(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_origCrls() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_origCrls() const;

static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::X509Certificate*  origCert) ;

/// @brief Method .ctor addr 0x1206928 size 0x110 virtual false final false
inline void _ctor(::Org::BouncyCastle::X509::X509Certificate*  origCert) ;

static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::Store::IX509Store*  origCerts) ;

/// @brief Method .ctor addr 0x1206a38 size 0x30 virtual false final false
inline void _ctor(::Org::BouncyCastle::X509::Store::IX509Store*  origCerts) ;

static inline ::Org::BouncyCastle::Cms::OriginatorInfoGenerator* New_ctor(::Org::BouncyCastle::X509::Store::IX509Store*  origCerts, ::Org::BouncyCastle::X509::Store::IX509Store*  origCrls) ;

/// @brief Method .ctor addr 0x1206a68 size 0x4c virtual false final false
inline void _ctor(::Org::BouncyCastle::X509::Store::IX509Store*  origCerts, ::Org::BouncyCastle::X509::Store::IX509Store*  origCrls) ;

/// @brief Method Generate addr 0x1206ab4 size 0x90 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Generate() ;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInfoGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OriginatorInfoGenerator(OriginatorInfoGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OriginatorInfoGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OriginatorInfoGenerator(OriginatorInfoGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OriginatorInfoGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::OriginatorInfoGenerator, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::OriginatorInfoGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::OriginatorInfoGenerator*, "Org.BouncyCastle.Cms", "OriginatorInfoGenerator");

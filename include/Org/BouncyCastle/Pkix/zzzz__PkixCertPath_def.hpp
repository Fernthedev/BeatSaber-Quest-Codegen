#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkixCertPath)
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace System::Collections {
class ICollection;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCertPath);
// Type: Org.BouncyCastle.Pkix::PkixCertPath
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1715))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCertPath*
class CORDL_TYPE PkixCertPath : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field certificates offset 0x10
 __declspec(property(get=__get_certificates, put=__set_certificates)) ::System::Collections::IList*  certificates;

 __declspec(property(get=get_Encodings)) ::System::Collections::IEnumerable*  Encodings;

 __declspec(property(get=get_Certificates)) ::System::Collections::IList*  Certificates;

static inline void setStaticF_certPathEncodings(::System::Collections::IList*  value) ;

static inline ::System::Collections::IList* getStaticF_certPathEncodings() ;

constexpr void __set_certificates(::System::Collections::IList*  value) ;

constexpr ::System::Collections::IList* __get_certificates() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> __get_certificates() const;

/// @brief Method SortCerts addr 0x10f00b0 size 0xd94 virtual false final false
static inline ::System::Collections::IList* SortCerts(::System::Collections::IList*  certs) ;

static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::Collections::ICollection*  certificates) ;

/// @brief Method .ctor addr 0x10eb394 size 0xac virtual false final false
inline void _ctor(::System::Collections::ICollection*  certificates) ;

static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::IO::Stream*  inStream) ;

/// @brief Method .ctor addr 0x10f0e44 size 0x58 virtual false final false
inline void _ctor(::System::IO::Stream*  inStream) ;

static inline ::Org::BouncyCastle::Pkix::PkixCertPath* New_ctor(::System::IO::Stream*  inStream, ::StringW  encoding) ;

/// @brief Method .ctor addr 0x10f0e9c size 0x86c virtual false final false
inline void _ctor(::System::IO::Stream*  inStream, ::StringW  encoding) ;

/// @brief Method get_Encodings addr 0x10f1708 size 0x90 virtual true final false
inline ::System::Collections::IEnumerable* get_Encodings() ;

/// @brief Method Equals addr 0x10f1798 size 0x41c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x10f1bb4 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method GetEncoded addr 0x10f1bdc size 0x344 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded() ;

/// @brief Method GetEncoded addr 0x10f1f20 size 0x88c virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetEncoded(::StringW  encoding) ;

/// @brief Method get_Certificates addr 0x10f29c8 size 0xc virtual true final false
inline ::System::Collections::IList* get_Certificates() ;

/// @brief Method ToAsn1Object addr 0x10f27ac size 0x100 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object(::Org::BouncyCastle::X509::X509Certificate*  cert) ;

/// @brief Method ToDerEncoded addr 0x10f28ac size 0x11c virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> ToDerEncoded(::Org::BouncyCastle::Asn1::Asn1Encodable*  obj) ;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixCertPath(PkixCertPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixCertPath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixCertPath(PkixCertPath const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PkixCertPath()  = default;
public:


// Fields

// Static field certPathEncodings


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCertPath, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCertPath);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCertPath*, "Org.BouncyCastle.Pkix", "PkixCertPath");

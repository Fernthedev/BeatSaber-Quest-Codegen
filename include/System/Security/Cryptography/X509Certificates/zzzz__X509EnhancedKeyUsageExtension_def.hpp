#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509EnhancedKeyUsageExtension)
namespace System::Security::Cryptography {
class AsnEncodedData;
}
namespace System::Security::Cryptography {
class OidCollection;
}
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509EnhancedKeyUsageExtension;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension);
// Type: System.Security.Cryptography.X509Certificates::X509EnhancedKeyUsageExtension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9011))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9010))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509EnhancedKeyUsageExtension*
class CORDL_TYPE X509EnhancedKeyUsageExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Security::Cryptography::X509Certificates::X509Extension)]{};

/// @brief Field _enhKeyUsage offset 0x28
 __declspec(property(get=__get__enhKeyUsage, put=__set__enhKeyUsage)) ::System::Security::Cryptography::OidCollection*  _enhKeyUsage;

/// @brief Field _status offset 0x30
 __declspec(property(get=__get__status, put=__set__status)) ::System::Security::Cryptography::AsnDecodeStatus  _status;

constexpr void __set__enhKeyUsage(::System::Security::Cryptography::OidCollection*  value) ;

constexpr ::System::Security::Cryptography::OidCollection* __get__enhKeyUsage() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::OidCollection*> __get__enhKeyUsage() const;

constexpr void __set__status(::System::Security::Cryptography::AsnDecodeStatus  value) ;

constexpr ::System::Security::Cryptography::AsnDecodeStatus& __get__status() ;

constexpr ::System::Security::Cryptography::AsnDecodeStatus const& __get__status() const;

static inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* New_ctor() ;

/// @brief Method .ctor addr 0x297b468 size 0xa8 virtual false final false
inline void _ctor() ;

static inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* New_ctor(::System::Security::Cryptography::AsnEncodedData*  encodedEnhancedKeyUsages, bool  critical) ;

/// @brief Method .ctor addr 0x297771c size 0xd8 virtual false final false
inline void _ctor(::System::Security::Cryptography::AsnEncodedData*  encodedEnhancedKeyUsages, bool  critical) ;

static inline ::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension* New_ctor(::System::Security::Cryptography::OidCollection*  enhancedKeyUsages, bool  critical) ;

/// @brief Method .ctor addr 0x2983ec0 size 0x188 virtual false final false
inline void _ctor(::System::Security::Cryptography::OidCollection*  enhancedKeyUsages, bool  critical) ;

/// @brief Method CopyFrom addr 0x2984100 size 0x1dc virtual true final false
inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

/// @brief Method Decode addr 0x2983c60 size 0x260 virtual false final false
inline ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  extension) ;

/// @brief Method Encode addr 0x2984048 size 0xb8 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Encode() ;

/// @brief Method ToString addr 0x29842dc size 0x2d4 virtual true final false
inline ::StringW ToString(bool  multiLine) ;

// Ctor Parameters [CppParam { name: "", ty: "X509EnhancedKeyUsageExtension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509EnhancedKeyUsageExtension(X509EnhancedKeyUsageExtension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509EnhancedKeyUsageExtension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509EnhancedKeyUsageExtension(X509EnhancedKeyUsageExtension const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509EnhancedKeyUsageExtension()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension, 0x38>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension*, "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension");

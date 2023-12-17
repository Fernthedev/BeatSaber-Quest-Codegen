#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Extension)
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Extension);
// Type: System.Security.Cryptography.X509Certificates::X509Extension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8977))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9011))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Extension*
class CORDL_TYPE X509Extension : public ::System::Security::Cryptography::AsnEncodedData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Security::Cryptography::AsnEncodedData)]{};

/// @brief Field _critical offset 0x20
 __declspec(property(get=__get__critical, put=__set__critical)) bool  _critical;

 __declspec(property(get=get_Critical, put=set_Critical)) bool  Critical;

constexpr void __set__critical(bool  value) ;

constexpr bool& __get__critical() ;

constexpr bool const& __get__critical() const;

static inline ::System::Security::Cryptography::X509Certificates::X509Extension* New_ctor() ;

/// @brief Method .ctor addr 0x29845b0 size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::Security::Cryptography::X509Certificates::X509Extension* New_ctor(::StringW  oid, ::ArrayW<uint8_t,::Array<uint8_t>*>  rawData, bool  critical) ;

/// @brief Method .ctor addr 0x29845b8 size 0x28 virtual false final false
inline void _ctor(::StringW  oid, ::ArrayW<uint8_t,::Array<uint8_t>*>  rawData, bool  critical) ;

/// @brief Method get_Critical addr 0x29845e0 size 0x8 virtual false final false
inline bool get_Critical() ;

/// @brief Method set_Critical addr 0x29845e8 size 0xc virtual false final false
inline void set_Critical(bool  value) ;

/// @brief Method CopyFrom addr 0x29845f4 size 0x130 virtual true final false
inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

/// @brief Method FormatUnkownData addr 0x2984724 size 0x114 virtual false final false
inline ::StringW FormatUnkownData(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Extension(X509Extension && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Extension(X509Extension const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509Extension()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Extension, 0x28>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Extension*, "System.Security.Cryptography.X509Certificates", "X509Extension");

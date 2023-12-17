#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509ChainElement)
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ChainElement);
// Type: System.Security.Cryptography.X509Certificates::X509ChainElement
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9003))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ChainElement*
class CORDL_TYPE X509ChainElement : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field certificate offset 0x10
 __declspec(property(get=__get_certificate, put=__set_certificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate;

/// @brief Field status offset 0x18
 __declspec(property(get=__get_status, put=__set_status)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus,::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>  status;

/// @brief Field info offset 0x20
 __declspec(property(get=__get_info, put=__set_info)) ::StringW  info;

/// @brief Field compressed_status_flags offset 0x28
 __declspec(property(get=__get_compressed_status_flags, put=__set_compressed_status_flags)) ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  compressed_status_flags;

 __declspec(property(get=get_Certificate)) ::System::Security::Cryptography::X509Certificates::X509Certificate2*  Certificate;

 __declspec(property(get=get_ChainElementStatus)) ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus,::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>  ChainElementStatus;

 __declspec(property(get=get_StatusFlags, put=set_StatusFlags)) ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  StatusFlags;

constexpr void __set_certificate(::System::Security::Cryptography::X509Certificates::X509Certificate2*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2* __get_certificate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2*> __get_certificate() const;

constexpr void __set_status(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus,::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>  value) ;

constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus,::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>& __get_status() ;

constexpr ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus,::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> const& __get_status() const;

constexpr void __set_info(::StringW  value) ;

constexpr ::StringW& __get_info() ;

constexpr ::StringW const& __get_info() const;

constexpr void __set_compressed_status_flags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags& __get_compressed_status_flags() ;

constexpr ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags const& __get_compressed_status_flags() const;

static inline ::System::Security::Cryptography::X509Certificates::X509ChainElement* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate) ;

/// @brief Method .ctor addr 0x297fc40 size 0x6c virtual false final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2*  certificate) ;

/// @brief Method get_Certificate addr 0x297fcac size 0x8 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Certificate() ;

/// @brief Method get_ChainElementStatus addr 0x297fcb4 size 0x8 virtual false final false
inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus,::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> get_ChainElementStatus() ;

/// @brief Method get_StatusFlags addr 0x297fcbc size 0x8 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_StatusFlags() ;

/// @brief Method set_StatusFlags addr 0x297fcc4 size 0x8 virtual false final false
inline void set_StatusFlags(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  value) ;

/// @brief Method Count addr 0x297fccc size 0x24 virtual false final false
inline int32_t Count(::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  flags) ;

/// @brief Method Set addr 0x297fcf0 size 0x74 virtual false final false
inline void Set(::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus,::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*>  status, ByRef<int32_t>  position, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  flags, ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags  mask) ;

/// @brief Method UncompressFlags addr 0x297fefc size 0x248 virtual false final false
inline void UncompressFlags() ;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509ChainElement(X509ChainElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509ChainElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509ChainElement(X509ChainElement const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509ChainElement()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainElement, 0x30>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainElement);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainElement*, "System.Security.Cryptography.X509Certificates", "X509ChainElement");

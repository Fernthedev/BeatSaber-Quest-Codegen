#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(ErrorMsgContent)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class ErrorMsgContent;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent);
// Type: Org.BouncyCastle.Asn1.Cmp::ErrorMsgContent
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(22))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::ErrorMsgContent*
class CORDL_TYPE ErrorMsgContent : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field pkiStatusInfo offset 0x10
 __declspec(property(get=__get_pkiStatusInfo, put=__set_pkiStatusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  pkiStatusInfo;

/// @brief Field errorCode offset 0x18
 __declspec(property(get=__get_errorCode, put=__set_errorCode)) ::Org::BouncyCastle::Asn1::DerInteger*  errorCode;

/// @brief Field errorDetails offset 0x20
 __declspec(property(get=__get_errorDetails, put=__set_errorDetails)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  errorDetails;

 __declspec(property(get=get_PkiStatusInfo)) ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  PkiStatusInfo;

 __declspec(property(get=get_ErrorCode)) ::Org::BouncyCastle::Asn1::DerInteger*  ErrorCode;

 __declspec(property(get=get_ErrorDetails)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  ErrorDetails;

constexpr void __set_pkiStatusInfo(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* __get_pkiStatusInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*> __get_pkiStatusInfo() const;

constexpr void __set_errorCode(::Org::BouncyCastle::Asn1::DerInteger*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerInteger* __get_errorCode() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> __get_errorCode() const;

constexpr void __set_errorDetails(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* __get_errorDetails() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*> __get_errorDetails() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xe66f38 size 0x11c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method GetInstance addr 0xe671dc size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  pkiStatusInfo) ;

/// @brief Method .ctor addr 0xe67364 size 0xc virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  pkiStatusInfo) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  pkiStatusInfo, ::Org::BouncyCastle::Asn1::DerInteger*  errorCode, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  errorDetails) ;

/// @brief Method .ctor addr 0xe67370 size 0x8c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*  pkiStatusInfo, ::Org::BouncyCastle::Asn1::DerInteger*  errorCode, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*  errorDetails) ;

/// @brief Method get_PkiStatusInfo addr 0xe673fc size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_PkiStatusInfo() ;

/// @brief Method get_ErrorCode addr 0xe67404 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerInteger* get_ErrorCode() ;

/// @brief Method get_ErrorDetails addr 0xe6740c size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_ErrorDetails() ;

/// @brief Method ToAsn1Object addr 0xe67414 size 0x174 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMsgContent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorMsgContent(ErrorMsgContent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorMsgContent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorMsgContent(ErrorMsgContent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ErrorMsgContent()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::ErrorMsgContent*, "Org.BouncyCastle.Asn1.Cmp", "ErrorMsgContent");

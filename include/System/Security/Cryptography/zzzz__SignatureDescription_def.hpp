#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SignatureDescription)
// Forward declare root types
namespace System::Security::Cryptography {
class SignatureDescription;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SignatureDescription);
// Type: System.Security.Cryptography::SignatureDescription
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2966))
// CS Name: ::System.Security.Cryptography::SignatureDescription*
class CORDL_TYPE SignatureDescription : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _strKey offset 0x10
 __declspec(property(get=__get__strKey, put=__set__strKey)) ::StringW  _strKey;

/// @brief Field _strDigest offset 0x18
 __declspec(property(get=__get__strDigest, put=__set__strDigest)) ::StringW  _strDigest;

/// @brief Field _strFormatter offset 0x20
 __declspec(property(get=__get__strFormatter, put=__set__strFormatter)) ::StringW  _strFormatter;

/// @brief Field _strDeformatter offset 0x28
 __declspec(property(get=__get__strDeformatter, put=__set__strDeformatter)) ::StringW  _strDeformatter;

 __declspec(property(put=set_KeyAlgorithm)) ::StringW  KeyAlgorithm;

 __declspec(property(put=set_DigestAlgorithm)) ::StringW  DigestAlgorithm;

 __declspec(property(put=set_FormatterAlgorithm)) ::StringW  FormatterAlgorithm;

 __declspec(property(put=set_DeformatterAlgorithm)) ::StringW  DeformatterAlgorithm;

constexpr void __set__strKey(::StringW  value) ;

constexpr ::StringW& __get__strKey() ;

constexpr ::StringW const& __get__strKey() const;

constexpr void __set__strDigest(::StringW  value) ;

constexpr ::StringW& __get__strDigest() ;

constexpr ::StringW const& __get__strDigest() const;

constexpr void __set__strFormatter(::StringW  value) ;

constexpr ::StringW& __get__strFormatter() ;

constexpr ::StringW const& __get__strFormatter() const;

constexpr void __set__strDeformatter(::StringW  value) ;

constexpr ::StringW& __get__strDeformatter() ;

constexpr ::StringW const& __get__strDeformatter() const;

static inline ::System::Security::Cryptography::SignatureDescription* New_ctor() ;

/// @brief Method .ctor addr 0x246a038 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method set_KeyAlgorithm addr 0x246a040 size 0x8 virtual false final false
inline void set_KeyAlgorithm(::StringW  value) ;

/// @brief Method set_DigestAlgorithm addr 0x246a048 size 0x8 virtual false final false
inline void set_DigestAlgorithm(::StringW  value) ;

/// @brief Method set_FormatterAlgorithm addr 0x246a050 size 0x8 virtual false final false
inline void set_FormatterAlgorithm(::StringW  value) ;

/// @brief Method set_DeformatterAlgorithm addr 0x246a058 size 0x8 virtual false final false
inline void set_DeformatterAlgorithm(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "SignatureDescription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignatureDescription(SignatureDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignatureDescription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignatureDescription(SignatureDescription const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignatureDescription()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SignatureDescription, 0x30>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SignatureDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SignatureDescription*, "System.Security.Cryptography", "SignatureDescription");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsymmetricAlgorithm)
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsymmetricAlgorithm);
// Type: System.Security.Cryptography::AsymmetricAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2918))
// CS Name: ::System.Security.Cryptography::AsymmetricAlgorithm*
class CORDL_TYPE AsymmetricAlgorithm : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field KeySizeValue offset 0x10
 __declspec(property(get=__get_KeySizeValue, put=__set_KeySizeValue)) int32_t  KeySizeValue;

/// @brief Field LegalKeySizesValue offset 0x18
 __declspec(property(get=__get_LegalKeySizesValue, put=__set_LegalKeySizesValue)) ::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>  LegalKeySizesValue;

 __declspec(property(get=get_KeySize, put=set_KeySize)) int32_t  KeySize;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set_KeySizeValue(int32_t  value) ;

constexpr int32_t& __get_KeySizeValue() ;

constexpr int32_t const& __get_KeySizeValue() const;

constexpr void __set_LegalKeySizesValue(::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>  value) ;

constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>& __get_LegalKeySizesValue() ;

constexpr ::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*> const& __get_LegalKeySizesValue() const;

static inline ::System::Security::Cryptography::AsymmetricAlgorithm* New_ctor() ;

/// @brief Method .ctor addr 0x245bde8 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Dispose addr 0x245bdf0 size 0x4 virtual true final true
inline void Dispose() ;

/// @brief Method Clear addr 0x245bdf4 size 0x6c virtual false final false
inline void Clear() ;

/// @brief Method Dispose addr 0x245be60 size 0x4 virtual true final false
inline void Dispose(bool  disposing) ;

/// @brief Method get_KeySize addr 0x245be64 size 0x8 virtual true final false
inline int32_t get_KeySize() ;

/// @brief Method set_KeySize addr 0x245be6c size 0xdc virtual true final false
inline void set_KeySize(int32_t  value) ;

/// @brief Method FromXmlString addr 0x245bf70 size 0x40 virtual true final false
inline void FromXmlString(::StringW  xmlString) ;

/// @brief Method ToXmlString addr 0x245bfb0 size 0x40 virtual true final false
inline ::StringW ToXmlString(bool  includePrivateParameters) ;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsymmetricAlgorithm(AsymmetricAlgorithm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsymmetricAlgorithm", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsymmetricAlgorithm(AsymmetricAlgorithm const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AsymmetricAlgorithm()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsymmetricAlgorithm, 0x20>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsymmetricAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsymmetricAlgorithm*, "System.Security.Cryptography", "AsymmetricAlgorithm");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AeadParameters)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class AeadParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::AeadParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::AeadParameters
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1013))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::AeadParameters*
class CORDL_TYPE AeadParameters : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field associatedText offset 0x10
 __declspec(property(get=__get_associatedText, put=__set_associatedText)) ::ArrayW<uint8_t,::Array<uint8_t>*>  associatedText;

/// @brief Field nonce offset 0x18
 __declspec(property(get=__get_nonce, put=__set_nonce)) ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce;

/// @brief Field key offset 0x20
 __declspec(property(get=__get_key, put=__set_key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key;

/// @brief Field macSize offset 0x28
 __declspec(property(get=__get_macSize, put=__set_macSize)) int32_t  macSize;

 __declspec(property(get=get_Key)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  Key;

 __declspec(property(get=get_MacSize)) int32_t  MacSize;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
constexpr operator  ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

constexpr void __set_associatedText(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_associatedText() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_associatedText() const;

constexpr void __set_nonce(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_nonce() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_nonce() const;

constexpr void __set_key(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* __get_key() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> __get_key() const;

constexpr void __set_macSize(int32_t  value) ;

constexpr int32_t& __get_macSize() ;

constexpr int32_t const& __get_macSize() const;

static inline ::Org::BouncyCastle::Crypto::Parameters::AeadParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, int32_t  macSize, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce) ;

/// @brief Method .ctor addr 0xf2f5bc size 0x40 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, int32_t  macSize, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::AeadParameters* New_ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, int32_t  macSize, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce, ::ArrayW<uint8_t,::Array<uint8_t>*>  associatedText) ;

/// @brief Method .ctor addr 0xf2f5fc size 0x44 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::KeyParameter*  key, int32_t  macSize, ::ArrayW<uint8_t,::Array<uint8_t>*>  nonce, ::ArrayW<uint8_t,::Array<uint8_t>*>  associatedText) ;

/// @brief Method get_Key addr 0xf2f640 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* get_Key() ;

/// @brief Method get_MacSize addr 0xf2f648 size 0x8 virtual true final false
inline int32_t get_MacSize() ;

/// @brief Method GetAssociatedText addr 0xf2f650 size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetAssociatedText() ;

/// @brief Method GetNonce addr 0xf2f658 size 0x8 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetNonce() ;

// Ctor Parameters [CppParam { name: "", ty: "AeadParameters", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AeadParameters(AeadParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AeadParameters", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AeadParameters(AeadParameters const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AeadParameters()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::AeadParameters, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::AeadParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::AeadParameters*, "Org.BouncyCastle.Crypto.Parameters", "AeadParameters");

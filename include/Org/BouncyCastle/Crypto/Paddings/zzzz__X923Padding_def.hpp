#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X923Padding)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class X923Padding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Paddings::X923Padding);
// Type: Org.BouncyCastle.Crypto.Paddings::X923Padding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1011))
// CS Name: ::Org.BouncyCastle.Crypto.Paddings::X923Padding*
class CORDL_TYPE X923Padding : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field random offset 0x10
 __declspec(property(get=__get_random, put=__set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

 __declspec(property(get=get_PaddingName)) ::StringW  PaddingName;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding"
constexpr operator  ::Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*() noexcept;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_random() const;

/// @brief Method Init addr 0xf2f334 size 0x8 virtual true final true
inline void Init(::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method get_PaddingName addr 0xf2f33c size 0x40 virtual true final true
inline ::StringW get_PaddingName() ;

/// @brief Method AddPadding addr 0xf2f37c size 0xcc virtual true final true
inline int32_t AddPadding(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff) ;

/// @brief Method PadCount addr 0xf2f448 size 0x84 virtual true final true
inline int32_t PadCount(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

static inline ::Org::BouncyCastle::Crypto::Paddings::X923Padding* New_ctor() ;

/// @brief Method .ctor addr 0xf2f4cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "X923Padding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X923Padding(X923Padding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X923Padding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X923Padding(X923Padding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X923Padding()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Paddings::X923Padding, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::X923Padding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::X923Padding*, "Org.BouncyCastle.Crypto.Paddings", "X923Padding");

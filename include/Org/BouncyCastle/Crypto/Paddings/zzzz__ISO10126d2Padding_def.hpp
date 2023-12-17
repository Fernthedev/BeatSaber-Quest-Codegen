#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISO10126d2Padding)
namespace Org::BouncyCastle::Crypto::Paddings {
class IBlockCipherPadding;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Paddings {
class ISO10126d2Padding;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding);
// Type: Org.BouncyCastle.Crypto.Paddings::ISO10126d2Padding
namespace Org::BouncyCastle::Crypto::Paddings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1006))
// CS Name: ::Org.BouncyCastle.Crypto.Paddings::ISO10126d2Padding*
class CORDL_TYPE ISO10126d2Padding : public ::System::Object {
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

/// @brief Method Init addr 0xf2e114 size 0x6c virtual true final true
inline void Init(::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method get_PaddingName addr 0xf2e180 size 0x40 virtual true final true
inline ::StringW get_PaddingName() ;

/// @brief Method AddPadding addr 0xf2e1c0 size 0xb4 virtual true final true
inline int32_t AddPadding(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff) ;

/// @brief Method PadCount addr 0xf2e274 size 0x84 virtual true final true
inline int32_t PadCount(::ArrayW<uint8_t,::Array<uint8_t>*>  input) ;

static inline ::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding* New_ctor() ;

/// @brief Method .ctor addr 0xf2e2f8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ISO10126d2Padding", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISO10126d2Padding(ISO10126d2Padding && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISO10126d2Padding", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISO10126d2Padding(ISO10126d2Padding const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ISO10126d2Padding()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Paddings
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Paddings::ISO10126d2Padding*, "Org.BouncyCastle.Crypto.Paddings", "ISO10126d2Padding");

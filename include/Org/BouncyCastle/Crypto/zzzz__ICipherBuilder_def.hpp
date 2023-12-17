#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ICipherBuilder)
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto {
class ICipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::ICipherBuilder);
// Type: Org.BouncyCastle.Crypto::ICipherBuilder
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(978))
// CS Name: ::Org.BouncyCastle.Crypto::ICipherBuilder*
class CORDL_TYPE ICipherBuilder {
public:
// Declarations
 __declspec(property(get=get_AlgorithmDetails)) ::System::Object*  AlgorithmDetails;

/// @brief Method get_AlgorithmDetails addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* get_AlgorithmDetails() ;

/// @brief Method GetMaxOutputSize addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetMaxOutputSize(int32_t  inputLen) ;

/// @brief Method BuildCipher addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Crypto::ICipher* BuildCipher(::System::IO::Stream*  stream) ;

// Ctor Parameters [CppParam { name: "", ty: "ICipherBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ICipherBuilder(ICipherBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ICipherBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ICipherBuilder(ICipherBuilder const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ICipherBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ICipherBuilder*, "Org.BouncyCastle.Crypto", "ICipherBuilder");

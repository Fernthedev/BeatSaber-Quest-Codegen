#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDecryptorBuilderProvider)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IDecryptorBuilderProvider;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider);
// Type: Org.BouncyCastle.Crypto::IDecryptorBuilderProvider
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1349))
// CS Name: ::Org.BouncyCastle.Crypto::IDecryptorBuilderProvider*
class CORDL_TYPE IDecryptorBuilderProvider {
public:
// Declarations
/// @brief Method CreateDecryptorBuilder addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Crypto::ICipherBuilder* CreateDecryptorBuilder(::System::Object*  algorithmDetails) ;

// Ctor Parameters [CppParam { name: "", ty: "IDecryptorBuilderProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IDecryptorBuilderProvider(IDecryptorBuilderProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IDecryptorBuilderProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDecryptorBuilderProvider(IDecryptorBuilderProvider const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IDecryptorBuilderProvider*, "Org.BouncyCastle.Crypto", "IDecryptorBuilderProvider");

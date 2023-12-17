#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMacFactory)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IMacFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IMacFactory);
// Type: Org.BouncyCastle.Crypto::IMacFactory
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(707))
// CS Name: ::Org.BouncyCastle.Crypto::IMacFactory*
class CORDL_TYPE IMacFactory {
public:
// Declarations
 __declspec(property(get=get_AlgorithmDetails)) ::System::Object*  AlgorithmDetails;

/// @brief Method get_AlgorithmDetails addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Object* get_AlgorithmDetails() ;

/// @brief Method CreateCalculator addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator() ;

// Ctor Parameters [CppParam { name: "", ty: "IMacFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IMacFactory(IMacFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IMacFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMacFactory(IMacFactory const& ) = delete;


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IMacFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IMacFactory*, "Org.BouncyCastle.Crypto", "IMacFactory");

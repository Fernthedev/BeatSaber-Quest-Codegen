#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseDigestCalculator)
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class BaseDigestCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::BaseDigestCalculator);
// Type: Org.BouncyCastle.Cms::BaseDigestCalculator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(611))
// CS Name: ::Org.BouncyCastle.Cms::BaseDigestCalculator*
class CORDL_TYPE BaseDigestCalculator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field digest offset 0x10
 __declspec(property(get=__get_digest, put=__set_digest)) ::ArrayW<uint8_t,::Array<uint8_t>*>  digest;

/// @brief Convert operator to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr operator  ::Org::BouncyCastle::Cms::IDigestCalculator*() noexcept;

constexpr void __set_digest(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_digest() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_digest() const;

static inline ::Org::BouncyCastle::Cms::BaseDigestCalculator* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  digest) ;

/// @brief Method .ctor addr 0x11d81ac size 0x28 virtual false final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  digest) ;

/// @brief Method GetDigest addr 0x11d81d4 size 0x5c virtual true final true
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetDigest() ;

// Ctor Parameters [CppParam { name: "", ty: "BaseDigestCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseDigestCalculator(BaseDigestCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseDigestCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseDigestCalculator(BaseDigestCalculator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseDigestCalculator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::BaseDigestCalculator, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::BaseDigestCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::BaseDigestCalculator*, "Org.BouncyCastle.Cms", "BaseDigestCalculator");

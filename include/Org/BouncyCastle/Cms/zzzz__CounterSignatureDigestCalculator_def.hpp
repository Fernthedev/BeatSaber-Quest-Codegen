#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CounterSignatureDigestCalculator)
namespace Org::BouncyCastle::Cms {
class IDigestCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CounterSignatureDigestCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator);
// Type: Org.BouncyCastle.Cms::CounterSignatureDigestCalculator
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(665))
// CS Name: ::Org.BouncyCastle.Cms::CounterSignatureDigestCalculator*
class CORDL_TYPE CounterSignatureDigestCalculator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field alg offset 0x10
 __declspec(property(get=__get_alg, put=__set_alg)) ::StringW  alg;

/// @brief Field data offset 0x18
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

/// @brief Convert operator to "::Org::BouncyCastle::Cms::IDigestCalculator"
constexpr operator  ::Org::BouncyCastle::Cms::IDigestCalculator*() noexcept;

constexpr void __set_alg(::StringW  value) ;

constexpr ::StringW& __get_alg() ;

constexpr ::StringW const& __get_alg() const;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

static inline ::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator* New_ctor(::StringW  alg, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor addr 0x12001c4 size 0x2c virtual false final false
inline void _ctor(::StringW  alg, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method GetDigest addr 0x12001f0 size 0xa8 virtual true final true
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetDigest() ;

// Ctor Parameters [CppParam { name: "", ty: "CounterSignatureDigestCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CounterSignatureDigestCalculator(CounterSignatureDigestCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CounterSignatureDigestCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CounterSignatureDigestCalculator(CounterSignatureDigestCalculator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CounterSignatureDigestCalculator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CounterSignatureDigestCalculator*, "Org.BouncyCastle.Cms", "CounterSignatureDigestCalculator");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultPKMacResult)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class DefaultPKMacResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::DefaultPKMacResult);
// Type: Org.BouncyCastle.Crmf::DefaultPKMacResult
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(710))
// CS Name: ::Org.BouncyCastle.Crmf::DefaultPKMacResult*
class CORDL_TYPE DefaultPKMacResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field mac offset 0x10
 __declspec(property(get=__get_mac, put=__set_mac)) ::Org::BouncyCastle::Crypto::IMac*  mac;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept;

constexpr void __set_mac(::Org::BouncyCastle::Crypto::IMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IMac* __get_mac() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> __get_mac() const;

static inline ::Org::BouncyCastle::Crmf::DefaultPKMacResult* New_ctor(::Org::BouncyCastle::Crypto::IMac*  mac) ;

/// @brief Method .ctor addr 0x1211fb4 size 0x28 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IMac*  mac) ;

/// @brief Method Collect addr 0x1212268 size 0x148 virtual true final true
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Collect() ;

/// @brief Method Collect addr 0x12123b0 size 0x40 virtual true final true
inline int32_t Collect(::ArrayW<uint8_t,::Array<uint8_t>*>  sig, int32_t  sigOff) ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultPKMacResult(DefaultPKMacResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultPKMacResult(DefaultPKMacResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultPKMacResult()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::DefaultPKMacResult, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::DefaultPKMacResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::DefaultPKMacResult*, "Org.BouncyCastle.Crmf", "DefaultPKMacResult");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NtlmAuthLevel)
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
struct NtlmAuthLevel;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel);
// Type: Mono.Security.Protocol.Ntlm::NtlmAuthLevel
namespace Mono::Security::Protocol::Ntlm {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13766))
// CS Name: ::Mono.Security.Protocol.Ntlm::NtlmAuthLevel
struct CORDL_TYPE NtlmAuthLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NtlmAuthLevel_Unwrapped
enum struct __NtlmAuthLevel_Unwrapped : int32_t {
__E_LM_and_NTLM = static_cast<int32_t>(0x0),
__E_LM_and_NTLM_and_try_NTLMv2_Session = static_cast<int32_t>(0x1),
__E_NTLM_only = static_cast<int32_t>(0x2),
__E_NTLMv2_only = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field LM_and_NTLM value: static_cast<int32_t>(0x0)
static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const LM_and_NTLM;

/// @brief Field LM_and_NTLM_and_try_NTLMv2_Session value: static_cast<int32_t>(0x1)
static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const LM_and_NTLM_and_try_NTLMv2_Session;

/// @brief Field NTLM_only value: static_cast<int32_t>(0x2)
static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const NTLM_only;

/// @brief Field NTLMv2_only value: static_cast<int32_t>(0x3)
static ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel const NTLMv2_only;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NtlmAuthLevel_Unwrapped () const noexcept {
return std::bit_cast<__NtlmAuthLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NtlmAuthLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NtlmAuthLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NtlmAuthLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, 0x4>, "Size mismatch!");

} // namespace end def Mono::Security::Protocol::Ntlm
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "Mono.Security.Protocol.Ntlm", "NtlmAuthLevel");

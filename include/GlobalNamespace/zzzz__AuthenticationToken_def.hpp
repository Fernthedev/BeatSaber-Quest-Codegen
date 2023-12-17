#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationToken)
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace LiteNetLib::Utils {
template<typename T>
class INetImmutableSerializable_1;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
// Forward declare root types
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct AuthenticationToken;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AuthenticationToken__Platform);
MARK_VAL_T(::GlobalNamespace::AuthenticationToken);
// Type: ::Platform
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12681))
// CS Name: ::AuthenticationToken::Platform
struct CORDL_TYPE __AuthenticationToken__Platform : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct ____AuthenticationToken__Platform_Unwrapped
enum struct ____AuthenticationToken__Platform_Unwrapped : uint8_t {
__E_Test = static_cast<uint8_t>(0x0u),
__E_OculusRift = static_cast<uint8_t>(0x1u),
__E_OculusQuest = static_cast<uint8_t>(0x2u),
__E_Steam = static_cast<uint8_t>(0x3u),
__E_PS4 = static_cast<uint8_t>(0x4u),
__E_PS4Dev = static_cast<uint8_t>(0x5u),
__E_PS4Cert = static_cast<uint8_t>(0x6u),
__E_PS5 = static_cast<uint8_t>(0x7u),
__E_PS5Dev = static_cast<uint8_t>(0x8u),
__E_PS5Cert = static_cast<uint8_t>(0x9u),
__E_Oculus = static_cast<uint8_t>(0x2u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Test value: static_cast<uint8_t>(0x0u)
static ::GlobalNamespace::__AuthenticationToken__Platform const Test;

/// @brief Field OculusRift value: static_cast<uint8_t>(0x1u)
static ::GlobalNamespace::__AuthenticationToken__Platform const OculusRift;

/// @brief Field OculusQuest value: static_cast<uint8_t>(0x2u)
static ::GlobalNamespace::__AuthenticationToken__Platform const OculusQuest;

/// @brief Field Steam value: static_cast<uint8_t>(0x3u)
static ::GlobalNamespace::__AuthenticationToken__Platform const Steam;

/// @brief Field PS4 value: static_cast<uint8_t>(0x4u)
static ::GlobalNamespace::__AuthenticationToken__Platform const PS4;

/// @brief Field PS4Dev value: static_cast<uint8_t>(0x5u)
static ::GlobalNamespace::__AuthenticationToken__Platform const PS4Dev;

/// @brief Field PS4Cert value: static_cast<uint8_t>(0x6u)
static ::GlobalNamespace::__AuthenticationToken__Platform const PS4Cert;

/// @brief Field PS5 value: static_cast<uint8_t>(0x7u)
static ::GlobalNamespace::__AuthenticationToken__Platform const PS5;

/// @brief Field PS5Dev value: static_cast<uint8_t>(0x8u)
static ::GlobalNamespace::__AuthenticationToken__Platform const PS5Dev;

/// @brief Field PS5Cert value: static_cast<uint8_t>(0x9u)
static ::GlobalNamespace::__AuthenticationToken__Platform const PS5Cert;

/// @brief Field Oculus value: static_cast<uint8_t>(0x2u)
static ::GlobalNamespace::__AuthenticationToken__Platform const Oculus;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____AuthenticationToken__Platform_Unwrapped () const noexcept {
return std::bit_cast<____AuthenticationToken__Platform_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr __AuthenticationToken__Platform(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __AuthenticationToken__Platform(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __AuthenticationToken__Platform()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AuthenticationToken__Platform, 0x1>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AuthenticationToken
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12682))
// CS Name: ::AuthenticationToken
struct CORDL_TYPE AuthenticationToken : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
using Platform = ::GlobalNamespace::__AuthenticationToken__Platform;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field platform offset 0x0
 __declspec(property(get=__get_platform, put=__set_platform)) ::GlobalNamespace::__AuthenticationToken__Platform  platform;

/// @brief Field userId offset 0x8
 __declspec(property(get=__get_userId, put=__set_userId)) ::StringW  userId;

/// @brief Field userName offset 0x10
 __declspec(property(get=__get_userName, put=__set_userName)) ::StringW  userName;

/// @brief Field sessionToken offset 0x18
 __declspec(property(get=__get_sessionToken, put=__set_sessionToken)) ::StringW  sessionToken;

/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>"
constexpr operator  ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::AuthenticationToken>*() ;

constexpr void __set_platform(::GlobalNamespace::__AuthenticationToken__Platform  value) ;

constexpr ::GlobalNamespace::__AuthenticationToken__Platform& __get_platform() ;

constexpr ::GlobalNamespace::__AuthenticationToken__Platform const& __get_platform() const;

constexpr void __set_userId(::StringW  value) ;

constexpr ::StringW& __get_userId() ;

constexpr ::StringW const& __get_userId() const;

constexpr void __set_userName(::StringW  value) ;

constexpr ::StringW& __get_userName() ;

constexpr ::StringW const& __get_userName() const;

constexpr void __set_sessionToken(::StringW  value) ;

constexpr ::StringW& __get_sessionToken() ;

constexpr ::StringW const& __get_sessionToken() const;

/// @brief Method .ctor addr 0xe293f4 size 0x10 virtual false final false
inline void _ctor(::GlobalNamespace::__AuthenticationToken__Platform  platform, ::StringW  userId, ::StringW  userName, ::StringW  sessionToken) ;

/// @brief Method Serialize addr 0xe29404 size 0x94 virtual true final true
inline void Serialize(::LiteNetLib::Utils::NetDataWriter*  writer) ;

/// @brief Method CreateFromSerializedData addr 0xe295b0 size 0x2c virtual true final true
inline ::GlobalNamespace::AuthenticationToken CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method Deserialize addr 0xe295dc size 0xf0 virtual false final false
static inline ::GlobalNamespace::AuthenticationToken Deserialize(::LiteNetLib::Utils::NetDataReader*  reader) ;

/// @brief Method FromHex addr 0xe294c8 size 0xe8 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromHex(::StringW  str) ;

/// @brief Method GetHexVal addr 0xe29794 size 0xcc virtual false final false
static inline uint8_t GetHexVal(char16_t  c) ;

/// @brief Method FromUtf8 addr 0xe29498 size 0x30 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> FromUtf8(::StringW  str) ;

/// @brief Method ToHex addr 0xe296fc size 0x98 virtual false final false
static inline ::StringW ToHex(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method ToUtf8 addr 0xe296cc size 0x30 virtual false final false
static inline ::StringW ToUtf8(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

// Ctor Parameters [CppParam { name: "platform", ty: "::GlobalNamespace::__AuthenticationToken__Platform", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "userName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "sessionToken", ty: "::StringW", modifiers: "", def_value: None }]
constexpr AuthenticationToken(::GlobalNamespace::__AuthenticationToken__Platform  platform, ::StringW  userId, ::StringW  userName, ::StringW  sessionToken) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AuthenticationToken(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AuthenticationToken()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AuthenticationToken, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AuthenticationToken__Platform, "", "AuthenticationToken/Platform");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthenticationToken, "", "AuthenticationToken");

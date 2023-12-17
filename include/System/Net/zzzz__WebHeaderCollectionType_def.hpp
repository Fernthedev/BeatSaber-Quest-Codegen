#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebHeaderCollectionType)
// Forward declare root types
namespace System::Net {
struct WebHeaderCollectionType;
}
// Write type traits
MARK_VAL_T(::System::Net::WebHeaderCollectionType);
// Type: System.Net::WebHeaderCollectionType
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9089))
// CS Name: ::System.Net::WebHeaderCollectionType
struct CORDL_TYPE WebHeaderCollectionType : public ::bs_hook::EnumTypeWrapper<0x2> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint16_t;

/// @brief Nested struct __WebHeaderCollectionType_Unwrapped
enum struct __WebHeaderCollectionType_Unwrapped : uint16_t {
__E_Unknown = static_cast<uint16_t>(0x0u),
__E_WebRequest = static_cast<uint16_t>(0x1u),
__E_WebResponse = static_cast<uint16_t>(0x2u),
__E_HttpWebRequest = static_cast<uint16_t>(0x3u),
__E_HttpWebResponse = static_cast<uint16_t>(0x4u),
__E_HttpListenerRequest = static_cast<uint16_t>(0x5u),
__E_HttpListenerResponse = static_cast<uint16_t>(0x6u),
__E_FtpWebRequest = static_cast<uint16_t>(0x7u),
__E_FtpWebResponse = static_cast<uint16_t>(0x8u),
__E_FileWebRequest = static_cast<uint16_t>(0x9u),
__E_FileWebResponse = static_cast<uint16_t>(0xau),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field Unknown value: static_cast<uint16_t>(0x0u)
static ::System::Net::WebHeaderCollectionType const Unknown;

/// @brief Field WebRequest value: static_cast<uint16_t>(0x1u)
static ::System::Net::WebHeaderCollectionType const WebRequest;

/// @brief Field WebResponse value: static_cast<uint16_t>(0x2u)
static ::System::Net::WebHeaderCollectionType const WebResponse;

/// @brief Field HttpWebRequest value: static_cast<uint16_t>(0x3u)
static ::System::Net::WebHeaderCollectionType const HttpWebRequest;

/// @brief Field HttpWebResponse value: static_cast<uint16_t>(0x4u)
static ::System::Net::WebHeaderCollectionType const HttpWebResponse;

/// @brief Field HttpListenerRequest value: static_cast<uint16_t>(0x5u)
static ::System::Net::WebHeaderCollectionType const HttpListenerRequest;

/// @brief Field HttpListenerResponse value: static_cast<uint16_t>(0x6u)
static ::System::Net::WebHeaderCollectionType const HttpListenerResponse;

/// @brief Field FtpWebRequest value: static_cast<uint16_t>(0x7u)
static ::System::Net::WebHeaderCollectionType const FtpWebRequest;

/// @brief Field FtpWebResponse value: static_cast<uint16_t>(0x8u)
static ::System::Net::WebHeaderCollectionType const FtpWebResponse;

/// @brief Field FileWebRequest value: static_cast<uint16_t>(0x9u)
static ::System::Net::WebHeaderCollectionType const FileWebRequest;

/// @brief Field FileWebResponse value: static_cast<uint16_t>(0xau)
static ::System::Net::WebHeaderCollectionType const FileWebResponse;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint16_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __WebHeaderCollectionType_Unwrapped () const noexcept {
return std::bit_cast<__WebHeaderCollectionType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x2>::instance);
}

constexpr void __set_value__(uint16_t  value) ;

constexpr uint16_t& __get_value__() ;

constexpr uint16_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr WebHeaderCollectionType(uint16_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit WebHeaderCollectionType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 WebHeaderCollectionType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::WebHeaderCollectionType, 0x2>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebHeaderCollectionType, "System.Net", "WebHeaderCollectionType");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieToken)
// Forward declare root types
namespace System::Net {
struct CookieToken;
}
// Write type traits
MARK_VAL_T(::System::Net::CookieToken);
// Type: System.Net::CookieToken
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9121))
// CS Name: ::System.Net::CookieToken
struct CORDL_TYPE CookieToken : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CookieToken_Unwrapped
enum struct __CookieToken_Unwrapped : int32_t {
__E_Nothing = static_cast<int32_t>(0x0),
__E_NameValuePair = static_cast<int32_t>(0x1),
__E_Attribute = static_cast<int32_t>(0x2),
__E_EndToken = static_cast<int32_t>(0x3),
__E_EndCookie = static_cast<int32_t>(0x4),
__E_End = static_cast<int32_t>(0x5),
__E_Equals = static_cast<int32_t>(0x6),
__E_Comment = static_cast<int32_t>(0x7),
__E_CommentUrl = static_cast<int32_t>(0x8),
__E_CookieName = static_cast<int32_t>(0x9),
__E_Discard = static_cast<int32_t>(0xa),
__E_Domain = static_cast<int32_t>(0xb),
__E_Expires = static_cast<int32_t>(0xc),
__E_MaxAge = static_cast<int32_t>(0xd),
__E_Path = static_cast<int32_t>(0xe),
__E_Port = static_cast<int32_t>(0xf),
__E_Secure = static_cast<int32_t>(0x10),
__E_HttpOnly = static_cast<int32_t>(0x11),
__E_Unknown = static_cast<int32_t>(0x12),
__E_Version = static_cast<int32_t>(0x13),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Nothing value: static_cast<int32_t>(0x0)
static ::System::Net::CookieToken const Nothing;

/// @brief Field NameValuePair value: static_cast<int32_t>(0x1)
static ::System::Net::CookieToken const NameValuePair;

/// @brief Field Attribute value: static_cast<int32_t>(0x2)
static ::System::Net::CookieToken const Attribute;

/// @brief Field EndToken value: static_cast<int32_t>(0x3)
static ::System::Net::CookieToken const EndToken;

/// @brief Field EndCookie value: static_cast<int32_t>(0x4)
static ::System::Net::CookieToken const EndCookie;

/// @brief Field End value: static_cast<int32_t>(0x5)
static ::System::Net::CookieToken const End;

/// @brief Field Equals value: static_cast<int32_t>(0x6)
static ::System::Net::CookieToken const Equals;

/// @brief Field Comment value: static_cast<int32_t>(0x7)
static ::System::Net::CookieToken const Comment;

/// @brief Field CommentUrl value: static_cast<int32_t>(0x8)
static ::System::Net::CookieToken const CommentUrl;

/// @brief Field CookieName value: static_cast<int32_t>(0x9)
static ::System::Net::CookieToken const CookieName;

/// @brief Field Discard value: static_cast<int32_t>(0xa)
static ::System::Net::CookieToken const Discard;

/// @brief Field Domain value: static_cast<int32_t>(0xb)
static ::System::Net::CookieToken const Domain;

/// @brief Field Expires value: static_cast<int32_t>(0xc)
static ::System::Net::CookieToken const Expires;

/// @brief Field MaxAge value: static_cast<int32_t>(0xd)
static ::System::Net::CookieToken const MaxAge;

/// @brief Field Path value: static_cast<int32_t>(0xe)
static ::System::Net::CookieToken const Path;

/// @brief Field Port value: static_cast<int32_t>(0xf)
static ::System::Net::CookieToken const Port;

/// @brief Field Secure value: static_cast<int32_t>(0x10)
static ::System::Net::CookieToken const Secure;

/// @brief Field HttpOnly value: static_cast<int32_t>(0x11)
static ::System::Net::CookieToken const HttpOnly;

/// @brief Field Unknown value: static_cast<int32_t>(0x12)
static ::System::Net::CookieToken const Unknown;

/// @brief Field Version value: static_cast<int32_t>(0x13)
static ::System::Net::CookieToken const Version;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CookieToken_Unwrapped () const noexcept {
return std::bit_cast<__CookieToken_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CookieToken(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CookieToken(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CookieToken()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CookieToken, 0x4>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieToken, "System.Net", "CookieToken");
